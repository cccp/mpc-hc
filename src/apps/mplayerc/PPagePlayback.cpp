/*
 * $Id$
 *
 * (C) 2003-2006 Gabest
 * (C) 2006-2010 see AUTHORS
 *
 * This file is part of mplayerc.
 *
 * Mplayerc is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3 of the License, or
 * (at your option) any later version.
 *
 * Mplayerc is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

#include "stdafx.h"
#include "mplayerc.h"
#include "MainFrm.h"
#include "PPagePlayback.h"

#include "Monitors.h"
#include "MultiMonitor.h"


// CPPagePlayback dialog

IMPLEMENT_DYNAMIC(CPPagePlayback, CPPageBase)
CPPagePlayback::CPPagePlayback()
	: CPPageBase(CPPagePlayback::IDD, CPPagePlayback::IDD)
	, m_iLoopForever(0)
	, m_nLoops(0)
	, m_fRewind(FALSE)
	, m_iZoomLevel(0)
	, m_iRememberZoomLevel(FALSE)
	, m_fSetFullscreenRes(FALSE)
	, m_nVolume(0)
	, m_nBalance(0)
	, m_fAutoloadAudio(FALSE)
	, m_fAutoloadSubtitles(FALSE)
	, m_fEnableWorkerThreadForOpening(FALSE)
	, m_fReportFailedPins(FALSE)
{
}

CPPagePlayback::~CPPagePlayback()
{
}

void CPPagePlayback::DoDataExchange(CDataExchange* pDX)
{
	__super::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_SLIDER1, m_volumectrl);
	DDX_Control(pDX, IDC_SLIDER2, m_balancectrl);
	DDX_Slider(pDX, IDC_SLIDER1, m_nVolume);
	DDX_Slider(pDX, IDC_SLIDER2, m_nBalance);
	DDX_Radio(pDX, IDC_RADIO1, m_iLoopForever);
	DDX_Control(pDX, IDC_EDIT1, m_loopnumctrl);
	DDX_Text(pDX, IDC_EDIT1, m_nLoops);
	DDX_Check(pDX, IDC_CHECK1, m_fRewind);
	DDX_CBIndex(pDX, IDC_COMBO1, m_iZoomLevel);
	DDX_Check(pDX, IDC_CHECK5, m_iRememberZoomLevel);
	DDX_Check(pDX, IDC_CHECK4, m_fSetFullscreenRes);
	DDX_Control(pDX, IDC_COMBO2, m_dispmodecombo);
	DDX_Check(pDX, IDC_CHECK2, m_fAutoloadAudio);
	DDX_Check(pDX, IDC_CHECK3, m_fAutoloadSubtitles);
	DDX_Check(pDX, IDC_CHECK7, m_fEnableWorkerThreadForOpening);
	DDX_Check(pDX, IDC_CHECK6, m_fReportFailedPins);
	DDX_CBIndex(pDX, IDC_COMBO3, m_iMonitorType);
	DDX_Control(pDX, IDC_COMBO3, m_iMonitorTypeCtrl);
}

BEGIN_MESSAGE_MAP(CPPagePlayback, CPPageBase)
	ON_WM_HSCROLL()
	ON_CONTROL_RANGE(BN_CLICKED, IDC_RADIO1, IDC_RADIO2, OnBnClickedRadio12)
	ON_UPDATE_COMMAND_UI(IDC_EDIT1, OnUpdateLoopNum)
	ON_UPDATE_COMMAND_UI(IDC_STATIC1, OnUpdateLoopNum)
	ON_UPDATE_COMMAND_UI(IDC_COMBO1, OnUpdateAutoZoomCombo)
	ON_UPDATE_COMMAND_UI(IDC_COMBO2, OnUpdateDispModeCombo)
	ON_CBN_SELCHANGE(IDC_COMBO3, OnUpdateFullScrCombo)
END_MESSAGE_MAP()


// CPPagePlayback message handlers

BOOL CPPagePlayback::OnInitDialog()
{
	__super::OnInitDialog();

	AppSettings& s = AfxGetAppSettings();

	m_volumectrl.SetRange(1, 100);
	m_volumectrl.SetTicFreq(10);
	m_balancectrl.SetRange(0, 200);
	m_balancectrl.SetTicFreq(20);
	m_nVolume = s.nVolume;
	m_nBalance = s.nBalance+100;
	m_iLoopForever = s.fLoopForever?1:0;
	m_nLoops = s.nLoops;
	m_fRewind = s.fRewind;
	m_iZoomLevel = s.iZoomLevel;
	m_iRememberZoomLevel = s.fRememberZoomLevel;
	m_dmFullscreenRes = s.dmFullscreenRes;
	m_f_hmonitor = s.f_hmonitor;

   //-> Multi-Monitor code
	CString str;
	m_iMonitorType = 0;

	CMonitor monitor;
	CMonitors monitors;

	m_iMonitorTypeCtrl.AddString(ResStr(IDS_FULLSCREENMONITOR_CURRENT));
	m_MonitorDisplayNames.Add(_T("Current"));
	if(m_f_hmonitor == _T("Current"))
	{
		m_iMonitorType = m_iMonitorTypeCtrl.GetCount()-1;
	}

	for ( int i = 0; i < monitors.GetCount(); i++ )
	{
		monitor = monitors.GetMonitor( i );
		monitor.GetName(str);
		
		if(monitor.IsMonitor())
		{
			DISPLAY_DEVICE displayDevice;
			ZeroMemory(&displayDevice, sizeof(displayDevice));
			displayDevice.cb = sizeof(displayDevice);
			VERIFY(EnumDisplayDevices(str, 0,  &displayDevice, 0));
						
			m_iMonitorTypeCtrl.AddString(str+_T(" - ")+displayDevice.DeviceString);
			m_MonitorDisplayNames.Add(str);
			
			if(m_f_hmonitor == str && m_iMonitorType == 0)
			{
				m_iMonitorType = m_iMonitorTypeCtrl.GetCount()-1;
			}
		}
	}

	//(m_iMonitorTypeCtrl.GetCount() > 2)	? {GetDlgItem(IDC_COMBO2)->EnableWindow(TRUE)} : GetDlgItem(IDC_COMBO2)->EnableWindow(FALSE);
	if(m_iMonitorTypeCtrl.GetCount() > 2)
	  {
		GetDlgItem(IDC_COMBO3)->EnableWindow(TRUE);
	  }
	else
	  { 
		m_iMonitorType = 0;
		GetDlgItem(IDC_COMBO3)->EnableWindow(FALSE);
	  }
   //<- Multi-Monitor code

    CPPagePlayback::ModesUpdate();

	m_fAutoloadAudio = s.fAutoloadAudio;
	m_fAutoloadSubtitles = s.fAutoloadSubtitles;
	m_fEnableWorkerThreadForOpening = s.fEnableWorkerThreadForOpening;
	m_fReportFailedPins = s.fReportFailedPins;

	UpdateData(FALSE);

	return TRUE;  // return TRUE unless you set the focus to a control
	// EXCEPTION: OCX Property Pages should return FALSE
}

BOOL CPPagePlayback::OnApply()
{
	UpdateData();

	AppSettings& s = AfxGetAppSettings();

	s.nVolume = m_nVolume;
	s.nBalance = m_nBalance-100;
	s.fLoopForever = !!m_iLoopForever;
	s.nLoops = m_nLoops;
	s.fRewind = !!m_fRewind;
	s.iZoomLevel = m_iZoomLevel;
	s.fRememberZoomLevel = !!m_iRememberZoomLevel;
	int iSel = m_dispmodecombo.GetCurSel();
	if((s.dmFullscreenRes.fValid = !!m_fSetFullscreenRes) && iSel >= 0 && iSel < m_dms.GetCount())
		s.dmFullscreenRes = m_dms[m_dispmodecombo.GetCurSel()];
	s.fAutoloadAudio = !!m_fAutoloadAudio;
	s.fAutoloadSubtitles = !!m_fAutoloadSubtitles;
	s.fEnableWorkerThreadForOpening = !!m_fEnableWorkerThreadForOpening;
	s.fReportFailedPins = !!m_fReportFailedPins;
	s.dmFullscreenRes =	m_dmFullscreenRes;
	s.f_hmonitor =	m_f_hmonitor;

	return __super::OnApply();
}

LRESULT CPPagePlayback::DefWindowProc(UINT message, WPARAM wParam, LPARAM lParam)
{
	if(message == WM_HSCROLL || message == WM_VSCROLL)
	{
		SetModified();
	}

	return __super::DefWindowProc(message, wParam, lParam);
}

void CPPagePlayback::OnHScroll(UINT nSBCode, UINT nPos, CScrollBar* pScrollBar)
{
	if(*pScrollBar == m_volumectrl)
	{
		UpdateData();
		((CMainFrame*)GetParentFrame())->m_wndToolBar.Volume = m_nVolume; // nice shortcut...
	}
	else if(*pScrollBar == m_balancectrl)
	{
		UpdateData();
		((CMainFrame*)GetParentFrame())->SetBalance(m_nBalance-100); // see prev note...
	}

	SetModified();

	__super::OnHScroll(nSBCode, nPos, pScrollBar);
}

void CPPagePlayback::OnBnClickedRadio12(UINT nID)
{
	SetModified();
}

void CPPagePlayback::OnUpdateLoopNum(CCmdUI* pCmdUI)
{
	pCmdUI->Enable(!!IsDlgButtonChecked(IDC_RADIO1));
}

void CPPagePlayback::OnUpdateAutoZoomCombo(CCmdUI* pCmdUI)
{
	pCmdUI->Enable(!!IsDlgButtonChecked(IDC_CHECK5));
}

void CPPagePlayback::OnUpdateDispModeCombo(CCmdUI* pCmdUI)
{
	pCmdUI->Enable(!!IsDlgButtonChecked(IDC_CHECK4));
}

void CPPagePlayback::OnUpdateFullScrCombo()
{
	CMonitors monitors;
	m_f_hmonitor = m_MonitorDisplayNames[m_iMonitorTypeCtrl.GetCurSel()];
	ModesUpdate();
}
void CPPagePlayback::ModesUpdate()
{
	CMonitors monitors;
	m_fSetFullscreenRes = m_dmFullscreenRes.fValid;
	int iSel = -1;
	dispmode dm, dmtoset = m_dmFullscreenRes;
	if(!dmtoset.fValid) GetCurDispMode(dmtoset, m_f_hmonitor);
	CString str;
	dispmode dm1;

	ComboBox_ResetContent(m_dispmodecombo);
	m_dms.IsEmpty();
	for(int i = 0, j = 0, ModeExist = true;  ; i++)
	{
		ModeExist = GetDispMode(i, dm, m_f_hmonitor);
		if (!ModeExist) break;   
		if(dm.bpp <= 8) continue;
		if(dm.size.cx == 1920 && dm.size.cy == 1080 && dm.freq==24) //HDMI MODE EXIST,
		//ADD Modes 1920x1080 16bpp AUTO, 1920x1080 24bpp AUTO, 1920x1080 32bpp AUTO.
		{
			dm1=dm;
			dm1.freq=-1; //AUTO1 Mode Marker
			m_dms.Add(dm1); // Add AUTO-HDMI Mode To Modes Array.
			str.Format(_T("%dx%d %dbpp AUTO 23.97@24, 25.00@25, 29.97@30"), dm.size.cx, dm.size.cy, dm.bpp);
			m_dispmodecombo.AddString(str);
			j++;
			dm1.freq=-2; //AUTO2 Mode Marker
			m_dms.Add(dm1); // Add AUTO-HDMI Mode To Modes Array.
			str.Format(_T("%dx%d %dbpp AUTO 23.97@24, 25.00@50, 29.97@60"), dm.size.cx, dm.size.cy, dm.bpp);
			m_dispmodecombo.AddString(str);
			j++;
		}
		m_dms.Add(dm); // 1920x1080 16bpp 24Hz, 1920x1080 24bpp 25Hz, 1920x1080 32bpp 30Hz also exist
		str.Format(_T("%dx%d %dbpp %dHz"), dm.size.cx, dm.size.cy, dm.bpp, dm.freq);
		m_dispmodecombo.AddString(str);

		if(iSel < 0 && dmtoset.fValid && dm.size == dmtoset.size
		&& dm.bpp == dmtoset.bpp && dm.freq == dmtoset.freq)
			iSel = j;
		if(iSel < 0 && dmtoset.fValid && dm.size == dmtoset.size
		&& dm.bpp == dmtoset.bpp && dmtoset.freq== -1 && dm.freq==24)
			iSel = j-2;
		if(iSel < 0 && dmtoset.fValid && dm.size == dmtoset.size
		&& dm.bpp == dmtoset.bpp && dmtoset.freq== -2 && dm.freq==24)
			iSel = j-1;
		j++;
	}
	m_dispmodecombo.SetCurSel(iSel);
}
