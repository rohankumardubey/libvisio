/* -*- Mode: C++; tab-width: 2; indent-tabs-mode: nil; c-basic-offset: 2 -*- */
/* libvisio
 * Version: MPL 1.1 / GPLv2+ / LGPLv2+
 *
 * The contents of this file are subject to the Mozilla Public License Version
 * 1.1 (the "License"); you may not use this file except in compliance with
 * the License or as specified alternatively below. You may obtain a copy of
 * the License at http://www.mozilla.org/MPL/
 *
 * Software distributed under the License is distributed on an "AS IS" basis,
 * WITHOUT WARRANTY OF ANY KIND, either express or implied. See the License
 * for the specific language governing rights and limitations under the
 * License.
 *
 * Major Contributor(s):
 * Copyright (C) 2011 Fridrich Strba <fridrich.strba@bluewin.ch>
 * Copyright (C) 2011 Eilidh McAdam <tibbylickle@gmail.com>
 *
 *
 * All Rights Reserved.
 *
 * For minor contributions see the git repository.
 *
 * Alternatively, the contents of this file may be used under the terms of
 * either the GNU General Public License Version 2 or later (the "GPLv2+"), or
 * the GNU Lesser General Public License Version 2 or later (the "LGPLv2+"),
 * in which case the provisions of the GPLv2+ or the LGPLv2+ are applicable
 * instead of those above.
 */

#ifndef VSDXDOCUMENTSTRUCTURE_H
#define VSDXDOCUMENTSTRUCTURE_H

#define VSD_FOREIGN_DATA 0x0c
#define VSD_OLE_LIST 0x0d
#define VSD_TEXT 0x0e

#define VSD_PAGE 0x15
#define VSD_COLORS 0x16
#define VSD_FONT_LIST 0x18
#define VSD_FONT_IX 0x19
#define VSD_STYLES 0x1a
#define VSD_STENCILS 0x1d
#define VSD_STENCIL_PAGE 0x1e
#define VSD_OLE_DATA 0x1f

#define VSD_PAGES 0x27

#define VSD_NAME_LIST 0x2c
#define VSD_NAME 0x2d

#define VSD_SHAPE_GROUP 0x47
#define VSD_SHAPE_SHAPE 0x48
#define VSD_SHAPE_GUIDE 0x4d
#define VSD_SHAPE_FOREIGN 0x4e

#define VSD_STYLE_SHEET 0x4a

#define VSD_SHAPE_LIST 0x65
#define VSD_FIELD_LIST 0x66
#define VSD_PROP_LIST 0x68
#define VSD_CHAR_LIST 0x69
#define VSD_PARA_LIST 0x6a
#define VSD_GEOM_LIST 0x6c

#define VSD_SHAPE_ID 0x83
#define VSD_EVENT 0x84
#define VSD_LINE 0x85
#define VSD_FILL_AND_SHADOW 0x86
#define VSD_TEXT_BLOCK 0x87
#define VSD_TABS_DATA_1 0x88
#define VSD_GEOMETRY 0x89
#define VSD_MOVE_TO 0x8a
#define VSD_LINE_TO 0x8b
#define VSD_ARC_TO 0x8c
#define VSD_INFINITE_LINE 0x8d

#define VSD_ELLIPSE 0x8f
#define VSD_ELLIPTICAL_ARC_TO 0x90

#define VSD_PAGE_PROPS 0x92
#define VSD_STYLE_PROPS 0x93
#define VSD_CHAR_IX 0x94
#define VSD_PARA_IX 0x95
#define VSD_TABS_DATA_2 0x96
#define VSD_TABS_DATA_3 0x97
#define VSD_FOREIGN_DATA_TYPE 0x98
#define VSD_CONNECTION_POINTS 0x99

#define VSD_XFORM_DATA 0x9b
#define VSD_TEXT_XFORM 0x9c
#define VSD_XFORM_1D 0x9d
#define VSD_SCRATCH 0x9e

#define VSD_PROTECTION 0xa0
#define VSD_TEXT_FIELD 0xa1
#define VSD_CONTROL_ANOTHER_TYPE 0xa2

#define VSD_MISC 0xa4
#define VSD_SPLINE_START 0xa5
#define VSD_SPLINE_KNOT 0xa6
#define VSD_LAYER_MEMBERSHIP 0xa7
#define VSD_LAYER 0xa8
#define VSD_ACT_ID 0xa9
#define VSD_CONTROL 0xaa

#define VSD_USER_DEFINED_CELLS 0xb5
#define VSD_TABS_DATA_4 0xb5
#define VSD_CUSTOM_PROPS 0xb6
#define VSD_RULER_GRID 0xb7

#define VSD_CONNECTION_POINTS_ANOTHER_TYPE 0xba

#define VSD_DOC_PROPS 0xbc
#define VSD_IMAGE 0xbd
#define VSD_GROUP 0xbe
#define VSD_LAYOUT 0xbf
#define VSD_PAGE_LAYOUT_IX 0xc0

#define VSD_POLYLINE_TO 0xc1
#define VSD_NURBS_TO 0xc3
#define VSD_HYPERLINK 0xc4
#define VSD_REVIEWER 0xc5
#define VSD_ANNOTATION 0xc6
#define VSD_SMART_TAG_DEF 0xc7
#define VSD_PRINT_PROPS 0xc8

#define VSD_SHAPE_DATA 0xd1
#define VSD_FONTFACE 0xd7
#define VSD_FONTFACES 0xd8

// Field formats

#define VSD_FIELD_FORMAT_NumGenNoUnits  0
#define VSD_FIELD_FORMAT_NumGenDefUnits  1
#define VSD_FIELD_FORMAT_0PlNoUnits  2
#define VSD_FIELD_FORMAT_0PlDefUnits  3
#define VSD_FIELD_FORMAT_1PlNoUnits  4
#define VSD_FIELD_FORMAT_1PlDefUnits  5
#define VSD_FIELD_FORMAT_2PlNoUnits  6
#define VSD_FIELD_FORMAT_2PlDefUnits  7
#define VSD_FIELD_FORMAT_3PlNoUnits  8
#define VSD_FIELD_FORMAT_3PlDefUnits  9
#define VSD_FIELD_FORMAT_FeetAndInches  10
#define VSD_FIELD_FORMAT_Radians  11
#define VSD_FIELD_FORMAT_Degrees  12
#define VSD_FIELD_FORMAT_FeetAndInches1Pl  13
#define VSD_FIELD_FORMAT_FeetAndInches2Pl  14
#define VSD_FIELD_FORMAT_Fraction1PlNoUnits  15
#define VSD_FIELD_FORMAT_Fraction1PlDefUnits  16
#define VSD_FIELD_FORMAT_Fraction2PlNoUnits  17
#define VSD_FIELD_FORMAT_Fraction2PlDefUnits  18

#define VSD_FIELD_FORMAT_DateShort  20
#define VSD_FIELD_FORMAT_DateLong  21
#define VSD_FIELD_FORMAT_DateMDYY  22
#define VSD_FIELD_FORMAT_DateMMDDYY  23
#define VSD_FIELD_FORMAT_DateMmmDYYYY  24
#define VSD_FIELD_FORMAT_DateMmmmDYYYY  25
#define VSD_FIELD_FORMAT_DateDMYY  26
#define VSD_FIELD_FORMAT_DateDDMMYY  27
#define VSD_FIELD_FORMAT_DateDMMMYYYY  28
#define VSD_FIELD_FORMAT_DateDMMMMYYYY  29
#define VSD_FIELD_FORMAT_TimeGen  30
#define VSD_FIELD_FORMAT_TimeHMM  31
#define VSD_FIELD_FORMAT_TimeHHMM  32
#define VSD_FIELD_FORMAT_TimeHMM24  33
#define VSD_FIELD_FORMAT_TimeHHMM24  34
#define VSD_FIELD_FORMAT_TimeHMMAMPM  35
#define VSD_FIELD_FORMAT_TimeHHMMAMPM  36
#define VSD_FIELD_FORMAT_StrNormal  37
#define VSD_FIELD_FORMAT_StrLower  38
#define VSD_FIELD_FORMAT_StrUpper  39

#define VSD_FIELD_FORMAT_Dateyyyymd  44
#define VSD_FIELD_FORMAT_Dateyymmdd  45
#define VSD_FIELD_FORMAT_TimeAMPMhmm_J  46

#define VSD_FIELD_FORMAT_DateTWNfYYYYMMDDD_C  50
#define VSD_FIELD_FORMAT_DateTWNsYYYYMMDDD_C  51
#define VSD_FIELD_FORMAT_DateTWNfyyyymmddww_C  52
#define VSD_FIELD_FORMAT_DateTWNfyyyymmdd_C  53
#define VSD_FIELD_FORMAT_Dategggemdww_J  54
#define VSD_FIELD_FORMAT_Dateyyyymdww_J  55
#define VSD_FIELD_FORMAT_Dategggemd_J  56
#define VSD_FIELD_FORMAT_Dateyyyymd_J  57
#define VSD_FIELD_FORMAT_DateYYYYMMMDDDWWW_C  58
#define VSD_FIELD_FORMAT_DateYYYYMMMDDD_C  59
#define VSD_FIELD_FORMAT_DategeMMMMddddww_K  60
#define VSD_FIELD_FORMAT_Dateyyyymdww_K  61
#define VSD_FIELD_FORMAT_DategeMMMMddd_K  62
#define VSD_FIELD_FORMAT_Dateyyyymd_K  63
#define VSD_FIELD_FORMAT_Dateyyyy_m_d  64
#define VSD_FIELD_FORMAT_Dateyy_mm_dd  65
#define VSD_FIELD_FORMAT_TimeAMPMhmm_C  66
#define VSD_FIELD_FORMAT_TimeAMPMhmm_K  67
#define VSD_FIELD_FORMAT_TimeAMPM_hmm_J  68
#define VSD_FIELD_FORMAT_Timehmm_J  69
#define VSD_FIELD_FORMAT_TimeAMPM_hmm_C  70
#define VSD_FIELD_FORMAT_Timehmm_C  71
#define VSD_FIELD_FORMAT_TimeAMPM_hmm_K  72
#define VSD_FIELD_FORMAT_Timehmm_K  73
#define VSD_FIELD_FORMAT_TimeHMMAMPM_E  74
#define VSD_FIELD_FORMAT_TimeHHMMAMPM_E  75
#define VSD_FIELD_FORMAT_Dateyyyymd_S  76
#define VSD_FIELD_FORMAT_Dateyyyymmdd_S  77
#define VSD_FIELD_FORMAT_Datewwyyyymmdd_S  78
#define VSD_FIELD_FORMAT_Datewwyyyymd_S  79
#define VSD_FIELD_FORMAT_TimeAMPMhmm_S  80
#define VSD_FIELD_FORMAT_TimeAMPMhhmm_S  81

#define VSD_FIELD_FORMAT_MsoDateShort  200
#define VSD_FIELD_FORMAT_MsoDateLongDay  201
#define VSD_FIELD_FORMAT_MsoDateLong  202
#define VSD_FIELD_FORMAT_MsoDateShortAlt  203
#define VSD_FIELD_FORMAT_MsoDateISO  204
#define VSD_FIELD_FORMAT_MsoDateShortMon  205
#define VSD_FIELD_FORMAT_MsoDateShortSlash  206
#define VSD_FIELD_FORMAT_MsoDateShortAbb  207
#define VSD_FIELD_FORMAT_MsoDateEnglish  208
#define VSD_FIELD_FORMAT_MsoDateMonthYr  209
#define VSD_FIELD_FORMAT_MsoDateMon_Yr  210
#define VSD_FIELD_FORMAT_MsoTimeDatePM  211
#define VSD_FIELD_FORMAT_MsoTimeDateSecPM  212
#define VSD_FIELD_FORMAT_MsoTimePM  213
#define VSD_FIELD_FORMAT_MsoTimeSecPM  214
#define VSD_FIELD_FORMAT_MsoTime24  215
#define VSD_FIELD_FORMAT_MsoTimeSec24  216
#define VSD_FIELD_FORMAT_MsoFEExtra1  217
#define VSD_FIELD_FORMAT_MsoFEExtra2  218
#define VSD_FIELD_FORMAT_MsoFEExtra3  219
#define VSD_FIELD_FORMAT_MsoFEExtra4  220
#define VSD_FIELD_FORMAT_MsoFEExtra5  221

#define VSD_FIELD_FORMAT_Unknown 0xffff

#endif /* VSDXDOCUMENTSTRUCTURE_H */
/* vim:set shiftwidth=2 softtabstop=2 expandtab: */
