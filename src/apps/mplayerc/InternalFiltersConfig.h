/*
 * $Id$
 *
 * (C) 2003-2006 Gabest
 * (C) 2006-2011 see AUTHORS
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

// For configuring which internal filters are included into the build.


#pragma once

// Internal source filters
#define INTERNAL_SOURCEFILTER_AVI       1
#define INTERNAL_SOURCEFILTER_CDDA      1
#define INTERNAL_SOURCEFILTER_CDXA      1
#define INTERNAL_SOURCEFILTER_DSM       1
#define INTERNAL_SOURCEFILTER_DTSAC3    1
#define INTERNAL_SOURCEFILTER_VTS       1
#define INTERNAL_SOURCEFILTER_DVSOURCE  1
#define INTERNAL_SOURCEFILTER_FLIC      1
#define INTERNAL_SOURCEFILTER_FLAC      1
#define INTERNAL_SOURCEFILTER_FLV       1
#define INTERNAL_SOURCEFILTER_MATROSKA  1
#define INTERNAL_SOURCEFILTER_MP4       1
#define INTERNAL_SOURCEFILTER_OGG       1
#define INTERNAL_SOURCEFILTER_MPEGAUDIO 1
#define INTERNAL_SOURCEFILTER_MPEG      1
#define INTERNAL_SOURCEFILTER_REALMEDIA 1
#define INTERNAL_SOURCEFILTER_SHOUTCAST 1
#define INTERNAL_SOURCEFILTER_UDP       1
#define INTERNAL_SOURCEFILTER_AVI2AC3   1

// Internal audio decoders
#define INTERNAL_DECODER_DTS            1
#define INTERNAL_DECODER_LPCM           1
#define INTERNAL_DECODER_PS2AUDIO       1
#define INTERNAL_DECODER_REALAUDIO      1
#define INTERNAL_DECODER_FLAC           1
#define INTERNAL_DECODER_PCM            1

// Internal audio decoders (FFmpeg)
#define INTERNAL_DECODER_AC3            1 /* also E-AC3,TrueHD,MLP */
#define INTERNAL_DECODER_AAC            1
#define INTERNAL_DECODER_MPEGAUDIO      1
#define INTERNAL_DECODER_VORBIS         1
#define INTERNAL_DECODER_NELLYMOSER     1
#define INTERNAL_DECODER_AMR            1
#define INTERNAL_DECODER_IMA4           1

// Internal video decoders
#define INTERNAL_DECODER_MPEG1          1
#define INTERNAL_DECODER_MPEG2          1
#define INTERNAL_DECODER_REALVIDEO      1

// Internal video decoders (FFmpeg)
#define INTERNAL_DECODER_H264           1
#define INTERNAL_DECODER_VC1            1
#define INTERNAL_DECODER_FLV            1
#define INTERNAL_DECODER_VP6            1
#define INTERNAL_DECODER_DIVX           1
#define INTERNAL_DECODER_XVID           1
#define INTERNAL_DECODER_WMV            1
#define INTERNAL_DECODER_MSMPEG4        1
#define INTERNAL_DECODER_SVQ            1
#define INTERNAL_DECODER_H263           1
#define INTERNAL_DECODER_THEORA         1
#define INTERNAL_DECODER_AMVV           1
#define INTERNAL_DECODER_VP8            1
#define INTERNAL_DECODER_MJPEG          1
#define INTERNAL_DECODER_INDEO          1

// DXVA decoders
#define INTERNAL_DECODER_H264_DXVA      1
#define INTERNAL_DECODER_VC1_DXVA       1
#define INTERNAL_DECODER_MPEG2_DXVA     1

// Groups
#define HAS_SOURCEFILTERS \
		(INTERNAL_SOURCEFILTER_AVI|INTERNAL_SOURCEFILTER_CDDA|INTERNAL_SOURCEFILTER_CDXA|INTERNAL_SOURCEFILTER_DSM|INTERNAL_SOURCEFILTER_DTSAC3|\
		INTERNAL_SOURCEFILTER_VTS|INTERNAL_SOURCEFILTER_DVSOURCE|INTERNAL_SOURCEFILTER_FLIC|INTERNAL_SOURCEFILTER_FLAC|INTERNAL_SOURCEFILTER_FLV|\
		INTERNAL_SOURCEFILTER_MATROSKA|INTERNAL_SOURCEFILTER_MP4|INTERNAL_SOURCEFILTER_OGG|INTERNAL_SOURCEFILTER_MPEGAUDIO|INTERNAL_SOURCEFILTER_MPEG|\
		INTERNAL_SOURCEFILTER_REALMEDIA|INTERNAL_SOURCEFILTER_SHOUTCAST|INTERNAL_SOURCEFILTER_UDP|INTERNAL_SOURCEFILTER_AVI2AC3)

#define HAS_OTHER_DECODERS \
		(INTERNAL_DECODER_DTS|INTERNAL_DECODER_LPCM|INTERNAL_DECODER_PS2AUDIO|INTERNAL_DECODER_REALAUDIO|\
		INTERNAL_DECODER_FLAC|INTERNAL_DECODER_PCM|INTERNAL_DECODER_MPEG1|INTERNAL_DECODER_MPEG2|INTERNAL_DECODER_REALVIDEO)

#define HAS_FFMPEG_AUDIO_DECODERS \
		(INTERNAL_DECODER_AC3|INTERNAL_DECODER_AAC|INTERNAL_DECODER_MPEGAUDIO|INTERNAL_DECODER_VORBIS|INTERNAL_DECODER_NELLYMOSER|INTERNAL_DECODER_AMR|INTERNAL_DECODER_IMA4)

#define HAS_FFMPEG_VIDEO_DECODERS \
		(INTERNAL_DECODER_H264|INTERNAL_DECODER_VC1|INTERNAL_DECODER_FLV|INTERNAL_DECODER_VP6|INTERNAL_DECODER_DIVX|INTERNAL_DECODER_XVID|INTERNAL_DECODER_WMV|\
		INTERNAL_DECODER_MSMPEG4|INTERNAL_DECODER_SVQ|INTERNAL_DECODER_H263|INTERNAL_DECODER_THEORA|INTERNAL_DECODER_AMVV|INTERNAL_DECODER_VP8|INTERNAL_DECODER_MJPEG|INTERNAL_DECODER_INDEO)

#define HAS_FFMPEG_DECODERS \
		(HAS_FFMPEG_AUDIO_DECODERS|HAS_FFMPEG_VIDEO_DECODERS)

#define HAS_DXVA_VIDEO_DECODERS \
		(INTERNAL_DECODER_H264_DXVA|INTERNAL_DECODER_VC1_DXVA|INTERNAL_DECODER_MPEG2_DXVA)

#define HAS_FFMPEG \
		(HAS_FFMPEG_AUDIO_DECODERS|HAS_FFMPEG_VIDEO_DECODERS|HAS_DXVA_VIDEO_DECODERS)
