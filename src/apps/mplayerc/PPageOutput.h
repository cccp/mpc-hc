/*
 * $Id$
 *
 * (C) 2003-2006 Gabest
 * (C) 2006-2007 see AUTHORS
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

#pragma once

#include "PPageBase.h"


// CPPageOutput dialog

class CPPageOutput : public CPPageBase
{
	DECLARE_DYNAMIC(CPPageOutput)

private:
	CStringArray m_AudioRendererDisplayNames;

	CStringArray m_MonitorDisplayNames;

	void DisableRadioButton(UINT nID, UINT nDefID);

public:
	CPPageOutput();
	virtual ~CPPageOutput();

// Dialog Data
	enum { IDD = IDD_PPAGEOUTPUT };
	int m_iDSVideoRendererType;
	int m_iRMVideoRendererType;
	int m_iQTVideoRendererType;
	int m_iAPSurfaceUsage;
	int m_iAudioRendererType;
	CComboBox m_iAudioRendererTypeCtrl;
//	BOOL m_fVMRSyncFix;
	int m_iDX9Resizer;
	BOOL m_fVMR9MixerMode;
	BOOL m_fVMR9MixerYUV;
	BOOL m_fD3DFullscreen;
	BOOL m_fVMR9AlterativeVSync;
	CString m_iEvrBuffers;

	int m_iMonitorType;
	CComboBox m_iMonitorTypeCtrl;

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	virtual BOOL OnInitDialog();
	virtual BOOL OnApply();

	DECLARE_MESSAGE_MAP()

public:
	afx_msg void OnUpdateMixerYUV(CCmdUI* pCmdUI);
	afx_msg void OnSurfaceChange();
	afx_msg void OnDSRendererChange(UINT nIDbutton);
	afx_msg void OnFullscreenCheck();
};
