/*
 * VC-1 and WMV3 decoder
 * copyright (c) 2006 Konstantin Shishkov
 *
 * This file is part of Libav.
 *
 * Libav is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * Libav is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with Libav; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA
 */

#ifndef AVCODEC_VC1ACDATA_H
#define AVCODEC_VC1ACDATA_H

#include <stdint.h>

#define AC_MODES 8

static const int vc1_ac_sizes[AC_MODES] = {
    186, 169, 133, 149, 103, 103, 163, 175
};

static const uint32_t vc1_ac_tables[AC_MODES][186][2] = {
{
{ 0x0001,  2}, { 0x0005,  3}, { 0x000D,  4}, { 0x0012,  5}, { 0x000E,  6}, { 0x0015,  7},
{ 0x0013,  8}, { 0x003F,  8}, { 0x004B,  9}, { 0x011F,  9}, { 0x00B8, 10}, { 0x03E3, 10},
{ 0x0172, 11}, { 0x024D, 12}, { 0x03DA, 12}, { 0x02DD, 13}, { 0x1F55, 13}, { 0x05B9, 14},
{ 0x3EAE, 14}, { 0x0000,  4}, { 0x0010,  5}, { 0x0008,  7}, { 0x0020,  8}, { 0x0029,  9},
{ 0x01F4,  9}, { 0x0233, 10}, { 0x01E0, 11}, { 0x012A, 12}, { 0x03DD, 12}, { 0x050A, 13},
{ 0x1F29, 13}, { 0x0A42, 14}, { 0x1272, 15}, { 0x1737, 15}, { 0x0003,  5}, { 0x0011,  7},
{ 0x00C4,  8}, { 0x004B, 10}, { 0x00B4, 11}, { 0x07D4, 11}, { 0x0345, 12}, { 0x02D7, 13},
{ 0x07BF, 13}, { 0x0938, 14}, { 0x0BBB, 14}, { 0x095E, 15}, { 0x0013,  5}, { 0x0078,  7},
{ 0x0069,  9}, { 0x0232, 10}, { 0x0461, 11}, { 0x03EC, 12}, { 0x0520, 13}, { 0x1F2A, 13},
{ 0x3E50, 14}, { 0x3E51, 14}, { 0x1486, 15}, { 0x000C,  6}, { 0x0024,  9}, { 0x0094, 11},
{ 0x08C0, 12}, { 0x0F09, 14}, { 0x1EF0, 15}, { 0x003D,  6}, { 0x0053,  9}, { 0x01A0, 11},
{ 0x02D6, 13}, { 0x0F08, 14}, { 0x0013,  7}, { 0x007C,  9}, { 0x07C1, 11}, { 0x04AC, 14},
{ 0x001B,  7}, { 0x00A0, 10}, { 0x0344, 12}, { 0x0F79, 14}, { 0x0079,  7}, { 0x03E1, 10},
{ 0x02D4, 13}, { 0x2306, 14}, { 0x0021,  8}, { 0x023C, 10}, { 0x0FAE, 12}, { 0x23DE, 14},
{ 0x0035,  8}, { 0x0175, 11}, { 0x07B3, 13}, { 0x00C5,  8}, { 0x0174, 11}, { 0x0785, 13},
{ 0x0048,  9}, { 0x01A3, 11}, { 0x049E, 13}, { 0x002C,  9}, { 0x00FA, 10}, { 0x07D6, 11},
{ 0x0092, 10}, { 0x05CC, 13}, { 0x1EF1, 15}, { 0x00A3, 10}, { 0x03ED, 12}, { 0x093E, 14},
{ 0x01E2, 11}, { 0x1273, 15}, { 0x07C4, 11}, { 0x1487, 15}, { 0x0291, 12}, { 0x0293, 12},
{ 0x0F8A, 12}, { 0x0509, 13}, { 0x0508, 13}, { 0x078D, 13}, { 0x07BE, 13}, { 0x078C, 13},
{ 0x04AE, 14}, { 0x0BBA, 14}, { 0x2307, 14}, { 0x0B9A, 14}, { 0x1736, 15}, { 0x000E,  4},
{ 0x0045,  7}, { 0x01F3,  9}, { 0x047A, 11}, { 0x05DC, 13}, { 0x23DF, 14}, { 0x0019,  5},
{ 0x0028,  9}, { 0x0176, 11}, { 0x049D, 13}, { 0x23DD, 14}, { 0x0030,  6}, { 0x00A2, 10},
{ 0x02EF, 12}, { 0x05B8, 14}, { 0x003F,  6}, { 0x00A5, 10}, { 0x03DB, 12}, { 0x093F, 14},
{ 0x0044,  7}, { 0x07CB, 11}, { 0x095F, 15}, { 0x0063,  7}, { 0x03C3, 12}, { 0x0015,  8},
{ 0x08F6, 12}, { 0x0017,  8}, { 0x0498, 13}, { 0x002C,  8}, { 0x07B2, 13}, { 0x002F,  8},
{ 0x1F54, 13}, { 0x008D,  8}, { 0x07BD, 13}, { 0x008E,  8}, { 0x1182, 13}, { 0x00FB,  8},
{ 0x050B, 13}, { 0x002D,  8}, { 0x07C0, 11}, { 0x0079,  9}, { 0x1F5F, 13}, { 0x007A,  9},
{ 0x1F56, 13}, { 0x0231, 10}, { 0x03E4, 10}, { 0x01A1, 11}, { 0x0143, 11}, { 0x01F7, 11},
{ 0x016F, 12}, { 0x0292, 12}, { 0x02E7, 12}, { 0x016C, 12}, { 0x016D, 12}, { 0x03DC, 12},
{ 0x0F8B, 12}, { 0x0499, 13}, { 0x03D8, 12}, { 0x078E, 13}, { 0x02D5, 13}, { 0x1F5E, 13},
{ 0x1F2B, 13}, { 0x078F, 13}, { 0x04AD, 14}, { 0x3EAF, 14}, { 0x23DC, 14}, { 0x004A,  9}
},
{
{ 0x0000,  3}, { 0x0003,  4}, { 0x000B,  5}, { 0x0014,  6}, { 0x003F,  6}, { 0x005D,  7},
{ 0x00A2,  8}, { 0x00AC,  9}, { 0x016E,  9}, { 0x020A, 10}, { 0x02E2, 10}, { 0x0432, 11},
{ 0x05C9, 11}, { 0x0827, 12}, { 0x0B54, 12}, { 0x04E6, 13}, { 0x105F, 13}, { 0x172A, 13},
{ 0x20B2, 14}, { 0x2D4E, 14}, { 0x39F0, 14}, { 0x4175, 15}, { 0x5A9E, 15}, { 0x0004,  4},
{ 0x001E,  5}, { 0x0042,  7}, { 0x00B6,  8}, { 0x0173,  9}, { 0x0395, 10}, { 0x072E, 11},
{ 0x0B94, 12}, { 0x16A4, 13}, { 0x20B3, 14}, { 0x2E45, 14}, { 0x0005,  5}, { 0x0040,  7},
{ 0x0049,  9}, { 0x028F, 10}, { 0x05CB, 11}, { 0x048A, 13}, { 0x09DD, 14}, { 0x73E2, 15},
{ 0x0018,  5}, { 0x0025,  8}, { 0x008A, 10}, { 0x051B, 11}, { 0x0E5F, 12}, { 0x09C9, 14},
{ 0x139C, 15}, { 0x0029,  6}, { 0x004F,  9}, { 0x0412, 11}, { 0x048D, 13}, { 0x2E41, 14},
{ 0x0038,  6}, { 0x010E,  9}, { 0x05A8, 11}, { 0x105C, 13}, { 0x39F2, 14}, { 0x0058,  7},
{ 0x021F, 10}, { 0x0E7E, 12}, { 0x39FF, 14}, { 0x0023,  8}, { 0x02E3, 10}, { 0x04E5, 13},
{ 0x2E40, 14}, { 0x00A1,  8}, { 0x05BE, 11}, { 0x09C8, 14}, { 0x0083,  8}, { 0x013A, 11},
{ 0x1721, 13}, { 0x0044,  9}, { 0x0276, 12}, { 0x39F6, 14}, { 0x008B, 10}, { 0x04EF, 13},
{ 0x5A9B, 15}, { 0x0208, 10}, { 0x1CFE, 13}, { 0x0399, 10}, { 0x1CB4, 13}, { 0x039E, 10},
{ 0x39F3, 14}, { 0x05AB, 11}, { 0x73E3, 15}, { 0x0737, 11}, { 0x5A9F, 15}, { 0x082D, 12},
{ 0x0E69, 12}, { 0x0E68, 12}, { 0x0433, 11}, { 0x0B7B, 12}, { 0x2DF8, 14}, { 0x2E56, 14},
{ 0x2E57, 14}, { 0x39F7, 14}, { 0x51A5, 15}, { 0x0003,  3}, { 0x002A,  6}, { 0x00E4,  8},
{ 0x028E, 10}, { 0x0735, 11}, { 0x1058, 13}, { 0x1CFA, 13}, { 0x2DF9, 14}, { 0x4174, 15},
{ 0x0009,  4}, { 0x0054,  8}, { 0x0398, 10}, { 0x048B, 13}, { 0x139D, 15}, { 0x000D,  4},
{ 0x00AD,  9}, { 0x0826, 12}, { 0x2D4C, 14}, { 0x0011,  5}, { 0x016B,  9}, { 0x0B7F, 12},
{ 0x51A4, 15}, { 0x0019,  5}, { 0x021B, 10}, { 0x16FD, 13}, { 0x001D,  5}, { 0x0394, 10},
{ 0x28D3, 14}, { 0x002B,  6}, { 0x05BC, 11}, { 0x5A9A, 15}, { 0x002F,  6}, { 0x0247, 12},
{ 0x0010,  7}, { 0x0A35, 12}, { 0x003E,  6}, { 0x0B7A, 12}, { 0x0059,  7}, { 0x105E, 13},
{ 0x0026,  8}, { 0x09CF, 14}, { 0x0055,  8}, { 0x1CB5, 13}, { 0x0057,  8}, { 0x0E5B, 12},
{ 0x00A0,  8}, { 0x1468, 13}, { 0x0170,  9}, { 0x0090, 10}, { 0x01CE,  9}, { 0x021A, 10},
{ 0x0218, 10}, { 0x0168,  9}, { 0x021E, 10}, { 0x0244, 12}, { 0x0736, 11}, { 0x0138, 11},
{ 0x0519, 11}, { 0x0E5E, 12}, { 0x072C, 11}, { 0x0B55, 12}, { 0x09DC, 14}, { 0x20BB, 14},
{ 0x048C, 13}, { 0x1723, 13}, { 0x2E44, 14}, { 0x16A5, 13}, { 0x0518, 11}, { 0x39FE, 14},
{ 0x0169,  9}
},
{
{ 0x0001,  2}, { 0x0006,  3}, { 0x000F,  4}, { 0x0016,  5}, { 0x0020,  6}, { 0x0018,  7},
{ 0x0008,  8}, { 0x009A,  8}, { 0x0056,  9}, { 0x013E,  9}, { 0x00F0, 10}, { 0x03A5, 10},
{ 0x0077, 11}, { 0x01EF, 11}, { 0x009A, 12}, { 0x005D, 13}, { 0x0001,  4}, { 0x0011,  5},
{ 0x0002,  7}, { 0x000B,  8}, { 0x0012,  9}, { 0x01D6,  9}, { 0x027E, 10}, { 0x0191, 11},
{ 0x00EA, 12}, { 0x03DC, 12}, { 0x013B, 13}, { 0x0004,  5}, { 0x0014,  7}, { 0x009E,  8},
{ 0x0009, 10}, { 0x01AC, 11}, { 0x01E2, 11}, { 0x03CA, 12}, { 0x005F, 13}, { 0x0017,  5},
{ 0x004E,  7}, { 0x005E,  9}, { 0x00F3, 10}, { 0x01AD, 11}, { 0x00EC, 12}, { 0x05F0, 13},
{ 0x000E,  6}, { 0x00E1,  8}, { 0x03A4, 10}, { 0x009C, 12}, { 0x013D, 13}, { 0x003B,  6},
{ 0x001C,  9}, { 0x0014, 11}, { 0x09BE, 12}, { 0x0006,  7}, { 0x007A,  9}, { 0x0190, 11},
{ 0x0137, 13}, { 0x001B,  7}, { 0x0008, 10}, { 0x075C, 11}, { 0x0071,  7}, { 0x00D7, 10},
{ 0x09BF, 12}, { 0x0007,  8}, { 0x00AF, 10}, { 0x04CC, 11}, { 0x0034,  8}, { 0x0265, 10},
{ 0x009F, 12}, { 0x00E0,  8}, { 0x0016, 11}, { 0x0327, 12}, { 0x0015,  9}, { 0x017D, 11},
{ 0x0EBB, 12}, { 0x0014,  9}, { 0x00F6, 10}, { 0x01E4, 11}, { 0x00CB, 10}, { 0x099D, 12},
{ 0x00CA, 10}, { 0x02FC, 12}, { 0x017F, 11}, { 0x04CD, 11}, { 0x02FD, 12}, { 0x04FE, 11},
{ 0x013A, 13}, { 0x000A,  4}, { 0x0042,  7}, { 0x01D3,  9}, { 0x04DD, 11}, { 0x0012,  5},
{ 0x00E8,  8}, { 0x004C, 11}, { 0x0136, 13}, { 0x0039,  6}, { 0x0264, 10}, { 0x0EBA, 12},
{ 0x0000,  7}, { 0x00AE, 10}, { 0x099C, 12}, { 0x001F,  7}, { 0x04DE, 11}, { 0x0043,  7},
{ 0x04DC, 11}, { 0x0003,  8}, { 0x03CB, 12}, { 0x0006,  8}, { 0x099E, 12}, { 0x002A,  8},
{ 0x05F1, 13}, { 0x000F,  8}, { 0x09FE, 12}, { 0x0033,  8}, { 0x09FF, 12}, { 0x0098,  8},
{ 0x099F, 12}, { 0x00EA,  8}, { 0x013C, 13}, { 0x002E,  8}, { 0x0192, 11}, { 0x0136,  9},
{ 0x006A,  9}, { 0x0015, 11}, { 0x03AF, 10}, { 0x01E3, 11}, { 0x0074, 11}, { 0x00EB, 12},
{ 0x02F9, 12}, { 0x005C, 13}, { 0x00ED, 12}, { 0x03DD, 12}, { 0x0326, 12}, { 0x005E, 13},
{ 0x0016,  7}
},
{
{ 0x0004,  3}, { 0x0014,  5}, { 0x0017,  7}, { 0x007F,  8}, { 0x0154,  9}, { 0x01F2, 10},
{ 0x00BF, 11}, { 0x0065, 12}, { 0x0AAA, 12}, { 0x0630, 13}, { 0x1597, 13}, { 0x03B7, 14},
{ 0x2B22, 14}, { 0x0BE6, 15}, { 0x000B,  4}, { 0x0037,  7}, { 0x0062,  9}, { 0x0007, 11},
{ 0x0166, 12}, { 0x00CE, 13}, { 0x1590, 13}, { 0x05F6, 14}, { 0x0BE7, 15}, { 0x0007,  5},
{ 0x006D,  8}, { 0x0003, 11}, { 0x031F, 12}, { 0x05F2, 14}, { 0x0002,  6}, { 0x0061,  9},
{ 0x0055, 12}, { 0x01DF, 14}, { 0x001A,  6}, { 0x001E, 10}, { 0x0AC9, 12}, { 0x2B23, 14},
{ 0x001E,  6}, { 0x001F, 10}, { 0x0AC3, 12}, { 0x2B2B, 14}, { 0x0006,  7}, { 0x0004, 11},
{ 0x02F8, 13}, { 0x0019,  7}, { 0x0006, 11}, { 0x063D, 13}, { 0x0057,  7}, { 0x0182, 11},
{ 0x2AA2, 14}, { 0x0004,  8}, { 0x0180, 11}, { 0x059C, 14}, { 0x007D,  8}, { 0x0164, 12},
{ 0x076D, 15}, { 0x0002,  9}, { 0x018D, 11}, { 0x1581, 13}, { 0x00AD,  8}, { 0x0060, 12},
{ 0x0C67, 14}, { 0x001C,  9}, { 0x00EE, 13}, { 0x0003,  9}, { 0x02CF, 13}, { 0x00D9,  9},
{ 0x1580, 13}, { 0x0002, 11}, { 0x0183, 11}, { 0x0057, 12}, { 0x0061, 12}, { 0x0031, 11},
{ 0x0066, 12}, { 0x0631, 13}, { 0x0632, 13}, { 0x00AC, 13}, { 0x031D, 12}, { 0x0076, 12},
{ 0x003A, 11}, { 0x0165, 12}, { 0x0C66, 14}, { 0x0003,  2}, { 0x0054,  7}, { 0x02AB, 10},
{ 0x0016, 13}, { 0x05F7, 14}, { 0x0005,  4}, { 0x00F8,  9}, { 0x0AA9, 12}, { 0x005F, 15},
{ 0x0004,  4}, { 0x001C, 10}, { 0x1550, 13}, { 0x0004,  5}, { 0x0077, 11}, { 0x076C, 15},
{ 0x000E,  5}, { 0x000A, 12}, { 0x000C,  5}, { 0x0562, 11}, { 0x0004,  6}, { 0x031C, 12},
{ 0x0006,  6}, { 0x00C8, 13}, { 0x000D,  6}, { 0x01DA, 13}, { 0x0007,  6}, { 0x00C9, 13},
{ 0x0001,  7}, { 0x002E, 14}, { 0x0014,  7}, { 0x1596, 13}, { 0x000A,  7}, { 0x0AC2, 12},
{ 0x0016,  7}, { 0x015B, 14}, { 0x0015,  7}, { 0x015A, 14}, { 0x000F,  8}, { 0x005E, 15},
{ 0x007E,  8}, { 0x00AB,  8}, { 0x002D,  9}, { 0x00D8,  9}, { 0x000B,  9}, { 0x0014, 10},
{ 0x02B3, 10}, { 0x01F3, 10}, { 0x003A, 10}, { 0x0000, 10}, { 0x0058, 10}, { 0x002E,  9},
{ 0x005E, 10}, { 0x0563, 11}, { 0x00EC, 12}, { 0x0054, 12}, { 0x0AC1, 12}, { 0x1556, 13},
{ 0x02FA, 13}, { 0x0181, 11}, { 0x1557, 13}, { 0x059D, 14}, { 0x2AA3, 14}, { 0x2B2A, 14},
{ 0x01DE, 14}, { 0x063C, 13}, { 0x00CF, 13}, { 0x1594, 13}, { 0x000D,  9}
},
{
{ 0x0002,  2}, { 0x0006,  3}, { 0x000F,  4}, { 0x000D,  5}, { 0x000C,  5}, { 0x0015,  6},
{ 0x0013,  6}, { 0x0012,  6}, { 0x0017,  7}, { 0x001F,  8}, { 0x001E,  8}, { 0x001D,  8},
{ 0x0025,  9}, { 0x0024,  9}, { 0x0023,  9}, { 0x0021,  9}, { 0x0021, 10}, { 0x0020, 10},
{ 0x000F, 10}, { 0x000E, 10}, { 0x0007, 11}, { 0x0006, 11}, { 0x0020, 11}, { 0x0021, 11},
{ 0x0050, 12}, { 0x0051, 12}, { 0x0052, 12}, { 0x000E,  4}, { 0x0014,  6}, { 0x0016,  7},
{ 0x001C,  8}, { 0x0020,  9}, { 0x001F,  9}, { 0x000D, 10}, { 0x0022, 11}, { 0x0053, 12},
{ 0x0055, 12}, { 0x000B,  5}, { 0x0015,  7}, { 0x001E,  9}, { 0x000C, 10}, { 0x0056, 12},
{ 0x0011,  6}, { 0x001B,  8}, { 0x001D,  9}, { 0x000B, 10}, { 0x0010,  6}, { 0x0022,  9},
{ 0x000A, 10}, { 0x000D,  6}, { 0x001C,  9}, { 0x0008, 10}, { 0x0012,  7}, { 0x001B,  9},
{ 0x0054, 12}, { 0x0014,  7}, { 0x001A,  9}, { 0x0057, 12}, { 0x0019,  8}, { 0x0009, 10},
{ 0x0018,  8}, { 0x0023, 11}, { 0x0017,  8}, { 0x0019,  9}, { 0x0018,  9}, { 0x0007, 10},
{ 0x0058, 12}, { 0x0007,  4}, { 0x000C,  6}, { 0x0016,  8}, { 0x0017,  9}, { 0x0006, 10},
{ 0x0005, 11}, { 0x0004, 11}, { 0x0059, 12}, { 0x000F,  6}, { 0x0016,  9}, { 0x0005, 10},
{ 0x000E,  6}, { 0x0004, 10}, { 0x0011,  7}, { 0x0024, 11}, { 0x0010,  7}, { 0x0025, 11},
{ 0x0013,  7}, { 0x005A, 12}, { 0x0015,  8}, { 0x005B, 12}, { 0x0014,  8}, { 0x0013,  8},
{ 0x001A,  8}, { 0x0015,  9}, { 0x0014,  9}, { 0x0013,  9}, { 0x0012,  9}, { 0x0011,  9},
{ 0x0026, 11}, { 0x0027, 11}, { 0x005C, 12}, { 0x005D, 12}, { 0x005E, 12}, { 0x005F, 12},
{ 0x0003,  7}
},
{
{ 0x0002,  2}, { 0x000F,  4}, { 0x0015,  6}, { 0x0017,  7}, { 0x001F,  8}, { 0x0025,  9},
{ 0x0024,  9}, { 0x0021, 10}, { 0x0020, 10}, { 0x0007, 11}, { 0x0006, 11}, { 0x0020, 11},
{ 0x0006,  3}, { 0x0014,  6}, { 0x001E,  8}, { 0x000F, 10}, { 0x0021, 11}, { 0x0050, 12},
{ 0x000E,  4}, { 0x001D,  8}, { 0x000E, 10}, { 0x0051, 12}, { 0x000D,  5}, { 0x0023,  9},
{ 0x000D, 10}, { 0x000C,  5}, { 0x0022,  9}, { 0x0052, 12}, { 0x000B,  5}, { 0x000C, 10},
{ 0x0053, 12}, { 0x0013,  6}, { 0x000B, 10}, { 0x0054, 12}, { 0x0012,  6}, { 0x000A, 10},
{ 0x0011,  6}, { 0x0009, 10}, { 0x0010,  6}, { 0x0008, 10}, { 0x0016,  7}, { 0x0055, 12},
{ 0x0015,  7}, { 0x0014,  7}, { 0x001C,  8}, { 0x001B,  8}, { 0x0021,  9}, { 0x0020,  9},
{ 0x001F,  9}, { 0x001E,  9}, { 0x001D,  9}, { 0x001C,  9}, { 0x001B,  9}, { 0x001A,  9},
{ 0x0022, 11}, { 0x0023, 11}, { 0x0056, 12}, { 0x0057, 12}, { 0x0007,  4}, { 0x0019,  9},
{ 0x0005, 11}, { 0x000F,  6}, { 0x0004, 11}, { 0x000E,  6}, { 0x000D,  6}, { 0x000C,  6},
{ 0x0013,  7}, { 0x0012,  7}, { 0x0011,  7}, { 0x0010,  7}, { 0x001A,  8}, { 0x0019,  8},
{ 0x0018,  8}, { 0x0017,  8}, { 0x0016,  8}, { 0x0015,  8}, { 0x0014,  8}, { 0x0013,  8},
{ 0x0018,  9}, { 0x0017,  9}, { 0x0016,  9}, { 0x0015,  9}, { 0x0014,  9}, { 0x0013,  9},
{ 0x0012,  9}, { 0x0011,  9}, { 0x0007, 10}, { 0x0006, 10}, { 0x0005, 10}, { 0x0004, 10},
{ 0x0024, 11}, { 0x0025, 11}, { 0x0026, 11}, { 0x0027, 11}, { 0x0058, 12}, { 0x0059, 12},
{ 0x005A, 12}, { 0x005B, 12}, { 0x005C, 12}, { 0x005D, 12}, { 0x005E, 12}, { 0x005F, 12},
{ 0x0003,  7}
},
{
{ 0x0000,  2}, { 0x0003,  3}, { 0x000D,  4}, { 0x0005,  4}, { 0x001C,  5}, { 0x0016,  5},
{ 0x003F,  6}, { 0x003A,  6}, { 0x002E,  6}, { 0x0022,  6}, { 0x007B,  7}, { 0x0067,  7},
{ 0x005F,  7}, { 0x0047,  7}, { 0x0026,  7}, { 0x00EF,  8}, { 0x00CD,  8}, { 0x00C1,  8},
{ 0x00A9,  8}, { 0x004F,  8}, { 0x01F2,  9}, { 0x01DD,  9}, { 0x0199,  9}, { 0x0185,  9},
{ 0x015D,  9}, { 0x011B,  9}, { 0x03EF, 10}, { 0x03E1, 10}, { 0x03C8, 10}, { 0x0331, 10},
{ 0x0303, 10}, { 0x02F1, 10}, { 0x02A0, 10}, { 0x0233, 10}, { 0x0126, 10}, { 0x07C0, 11},
{ 0x076F, 11}, { 0x076C, 11}, { 0x0661, 11}, { 0x0604, 11}, { 0x0572, 11}, { 0x0551, 11},
{ 0x046A, 11}, { 0x0274, 11}, { 0x0F27, 12}, { 0x0F24, 12}, { 0x0EDB, 12}, { 0x0C8E, 12},
{ 0x0C0B, 12}, { 0x0C0A, 12}, { 0x0AE3, 12}, { 0x08D6, 12}, { 0x0490, 12}, { 0x0495, 12},
{ 0x1F19, 13}, { 0x1DB5, 13}, { 0x0009,  4}, { 0x0010,  5}, { 0x0029,  6}, { 0x0062,  7},
{ 0x00F3,  8}, { 0x00AD,  8}, { 0x01E5,  9}, { 0x0179,  9}, { 0x009C,  9}, { 0x03B1, 10},
{ 0x02AE, 10}, { 0x0127, 10}, { 0x076E, 11}, { 0x0570, 11}, { 0x0275, 11}, { 0x0F25, 12},
{ 0x0EC0, 12}, { 0x0AA0, 12}, { 0x08D7, 12}, { 0x1E4C, 13}, { 0x0008,  5}, { 0x0063,  7},
{ 0x00AF,  8}, { 0x017B,  9}, { 0x03B3, 10}, { 0x07DD, 11}, { 0x0640, 11}, { 0x0F8D, 12},
{ 0x0BC1, 12}, { 0x0491, 12}, { 0x0028,  6}, { 0x00C3,  8}, { 0x0151,  9}, { 0x02A1, 10},
{ 0x0573, 11}, { 0x0EC3, 12}, { 0x1F35, 13}, { 0x0065,  7}, { 0x01DA,  9}, { 0x02AF, 10},
{ 0x0277, 11}, { 0x08C9, 12}, { 0x1781, 13}, { 0x0025,  7}, { 0x0118,  9}, { 0x0646, 11},
{ 0x0AA6, 12}, { 0x1780, 13}, { 0x00C9,  8}, { 0x0321, 10}, { 0x0F9B, 12}, { 0x191E, 13},
{ 0x0048,  8}, { 0x07CC, 11}, { 0x0AA1, 12}, { 0x0180,  9}, { 0x0465, 11}, { 0x1905, 13},
{ 0x03E2, 10}, { 0x0EC1, 12}, { 0x3C9B, 14}, { 0x02F4, 10}, { 0x08C8, 12}, { 0x07C1, 11},
{ 0x0928, 13}, { 0x05E1, 11}, { 0x320D, 14}, { 0x0EC2, 12}, { 0x6418, 15}, { 0x1F34, 13},
{ 0x0078,  7}, { 0x0155,  9}, { 0x0552, 11}, { 0x191F, 13}, { 0x00FA,  8}, { 0x07DC, 11},
{ 0x1907, 13}, { 0x00AC,  8}, { 0x0249, 11}, { 0x13B1, 14}, { 0x01F6,  9}, { 0x0AE2, 12},
{ 0x01DC,  9}, { 0x04ED, 12}, { 0x0184,  9}, { 0x1904, 13}, { 0x0156,  9}, { 0x09D9, 13},
{ 0x03E7, 10}, { 0x0929, 13}, { 0x03B2, 10}, { 0x3B68, 14}, { 0x02F5, 10}, { 0x13B0, 14},
{ 0x0322, 10}, { 0x3B69, 14}, { 0x0234, 10}, { 0x7935, 15}, { 0x07C7, 11}, { 0xC833, 16},
{ 0x0660, 11}, { 0x7934, 15}, { 0x024B, 11}, { 0xC832, 16}, { 0x0AA7, 12}, { 0x1F18, 13},
{ 0x007A,  7}
},
{
{ 0x0002,  2}, { 0x0000,  3}, { 0x001E,  5}, { 0x0004,  5}, { 0x0012,  6}, { 0x0070,  7},
{ 0x001A,  7}, { 0x005F,  8}, { 0x0047,  8}, { 0x01D3,  9}, { 0x00B5,  9}, { 0x0057,  9},
{ 0x03B5, 10}, { 0x016D, 10}, { 0x0162, 10}, { 0x07CE, 11}, { 0x0719, 11}, { 0x0691, 11},
{ 0x02C6, 11}, { 0x0156, 11}, { 0x0F92, 12}, { 0x0D2E, 12}, { 0x0D20, 12}, { 0x059E, 12},
{ 0x0468, 12}, { 0x02A6, 12}, { 0x1DA2, 13}, { 0x1C60, 13}, { 0x1A43, 13}, { 0x0B1D, 13},
{ 0x08C0, 13}, { 0x055D, 13}, { 0x0003,  3}, { 0x000A,  5}, { 0x0077,  7}, { 0x00E5,  8},
{ 0x01D9,  9}, { 0x03E5, 10}, { 0x0166, 10}, { 0x0694, 11}, { 0x0152, 11}, { 0x059F, 12},
{ 0x1F3C, 13}, { 0x1A4B, 13}, { 0x055E, 13}, { 0x000C,  4}, { 0x007D,  7}, { 0x0044,  8},
{ 0x03E0, 10}, { 0x0769, 11}, { 0x0E31, 12}, { 0x1F26, 13}, { 0x055C, 13}, { 0x001B,  5},
{ 0x00E2,  8}, { 0x03A5, 10}, { 0x02C9, 11}, { 0x1F23, 13}, { 0x3B47, 14}, { 0x0007,  5},
{ 0x01D8,  9}, { 0x02D8, 11}, { 0x1F27, 13}, { 0x3494, 14}, { 0x0035,  6}, { 0x03E1, 10},
{ 0x059C, 12}, { 0x38C3, 14}, { 0x000C,  6}, { 0x0165, 10}, { 0x1D23, 13}, { 0x1638, 14},
{ 0x0068,  7}, { 0x0693, 11}, { 0x3A45, 14}, { 0x0020,  7}, { 0x0F90, 12}, { 0x7CF6, 15},
{ 0x00E8,  8}, { 0x058F, 12}, { 0x2CEF, 15}, { 0x0045,  8}, { 0x0B3A, 13}, { 0x01F1,  9},
{ 0x3B46, 14}, { 0x01A7,  9}, { 0x1676, 14}, { 0x0056,  9}, { 0x692A, 15}, { 0x038D, 10},
{ 0xE309, 16}, { 0x00AA, 10}, { 0x1C611, 17}, { 0x02DF, 11}, { 0xB3B9, 17}, { 0x02C8, 11},
{ 0x38C20, 18}, { 0x01B0, 11}, { 0x16390, 18}, { 0x0F9F, 12}, { 0x16771, 18}, { 0x0ED0, 12},
{ 0x71843, 19}, { 0x0D2A, 12}, { 0xF9E8C, 20}, { 0x0461, 12}, { 0xF9E8E, 20}, { 0x0B67, 13},
{ 0x055F, 13}, { 0x003F,  6}, { 0x006D,  9}, { 0x0E90, 12}, { 0x054E, 13}, { 0x0013,  6},
{ 0x0119, 10}, { 0x0B66, 13}, { 0x000B,  6}, { 0x0235, 11}, { 0x7CF5, 15}, { 0x0075,  7},
{ 0x0D24, 12}, { 0xF9E9, 16}, { 0x002E,  7}, { 0x1F22, 13}, { 0x0021,  7}, { 0x054F, 13},
{ 0x0014,  7}, { 0x3A44, 14}, { 0x00E4,  8}, { 0x7CF7, 15}, { 0x005E,  8}, { 0x7185, 15},
{ 0x0037,  8}, { 0x2C73, 15}, { 0x01DB,  9}, { 0x59DD, 16}, { 0x01C7,  9}, { 0x692B, 15},
{ 0x01A6,  9}, { 0x58E5, 16}, { 0x00B4,  9}, { 0x1F3D0, 17}, { 0x00B0,  9}, { 0xB1C9, 17},
{ 0x03E6, 10}, { 0x16770, 18}, { 0x016E, 10}, { 0x3E7A2, 18}, { 0x011B, 10}, { 0xF9E8D, 20},
{ 0x00D9, 10}, { 0xF9E8F, 20}, { 0x00A8, 10}, { 0x2C723, 19}, { 0x0749, 11}, { 0xE3084, 20},
{ 0x0696, 11}, { 0x58E45, 20}, { 0x02DE, 11}, { 0xB1C88, 21}, { 0x0231, 11}, { 0x1C610A, 21},
{ 0x01B1, 11}, { 0x71842D, 23}, { 0x0D2B, 12}, { 0x38C217, 22}, { 0x0D2F, 12}, { 0x163913, 22},
{ 0x05B2, 12}, { 0x163912, 22}, { 0x0469, 12}, { 0x71842C, 23}, { 0x1A42, 13}, { 0x08C1, 13},
{ 0x0073,  7}
}
};

/* which indexes point to last=1 entries in tables */
static const int vc1_last_decode_table[AC_MODES] = {
    119, 99, 85, 81, 67, 58, 126, 109
};

static const uint8_t vc1_index_decode_table[AC_MODES][185][2] = {
{
{  0,  1}, {  0,  2}, {  0,  3}, {  0,  4}, {  0,  5}, {  0,  6}, {  0,  7}, {  0,  8},
{  0,  9}, {  0, 10}, {  0, 11}, {  0, 12}, {  0, 13}, {  0, 14}, {  0, 15}, {  0, 16},
{  0, 17}, {  0, 18}, {  0, 19}, {  1,  1}, {  1,  2}, {  1,  3}, {  1,  4}, {  1,  5},
{  1,  6}, {  1,  7}, {  1,  8}, {  1,  9}, {  1, 10}, {  1, 11}, {  1, 12}, {  1, 13},
{  1, 14}, {  1, 15}, {  2,  1}, {  2,  2}, {  2,  3}, {  2,  4}, {  2,  5}, {  2,  6},
{  2,  7}, {  2,  8}, {  2,  9}, {  2, 10}, {  2, 11}, {  2, 12}, {  3,  1}, {  3,  2},
{  3,  3}, {  3,  4}, {  3,  5}, {  3,  6}, {  3,  7}, {  3,  8}, {  3,  9}, {  3, 10},
{  3, 11}, {  4,  1}, {  4,  2}, {  4,  3}, {  4,  4}, {  4,  5}, {  4,  6}, {  5,  1},
{  5,  2}, {  5,  3}, {  5,  4}, {  5,  5}, {  6,  1}, {  6,  2}, {  6,  3}, {  6,  4},
{  7,  1}, {  7,  2}, {  7,  3}, {  7,  4}, {  8,  1}, {  8,  2}, {  8,  3}, {  8,  4},
{  9,  1}, {  9,  2}, {  9,  3}, {  9,  4}, { 10,  1}, { 10,  2}, { 10,  3}, { 11,  1},
{ 11,  2}, { 11,  3}, { 12,  1}, { 12,  2}, { 12,  3}, { 13,  1}, { 13,  2}, { 13,  3},
{ 14,  1}, { 14,  2}, { 14,  3}, { 15,  1}, { 15,  2}, { 15,  3}, { 16,  1}, { 16,  2},
{ 17,  1}, { 17,  2}, { 18,  1}, { 19,  1}, { 20,  1}, { 21,  1}, { 22,  1}, { 23,  1},
{ 24,  1}, { 25,  1}, { 26,  1}, { 27,  1}, { 28,  1}, { 29,  1}, { 30,  1}, {  0,  1},
{  0,  2}, {  0,  3}, {  0,  4}, {  0,  5}, {  0,  6}, {  1,  1}, {  1,  2}, {  1,  3},
{  1,  4}, {  1,  5}, {  2,  1}, {  2,  2}, {  2,  3}, {  2,  4}, {  3,  1}, {  3,  2},
{  3,  3}, {  3,  4}, {  4,  1}, {  4,  2}, {  4,  3}, {  5,  1}, {  5,  2}, {  6,  1},
{  6,  2}, {  7,  1}, {  7,  2}, {  8,  1}, {  8,  2}, {  9,  1}, {  9,  2}, { 10,  1},
{ 10,  2}, { 11,  1}, { 11,  2}, { 12,  1}, { 12,  2}, { 13,  1}, { 13,  2}, { 14,  1},
{ 14,  2}, { 15,  1}, { 15,  2}, { 16,  1}, { 17,  1}, { 18,  1}, { 19,  1}, { 20,  1},
{ 21,  1}, { 22,  1}, { 23,  1}, { 24,  1}, { 25,  1}, { 26,  1}, { 27,  1}, { 28,  1},
{ 29,  1}, { 30,  1}, { 31,  1}, { 32,  1}, { 33,  1}, { 34,  1}, { 35,  1}, { 36,  1},
{ 37,  1}
},
{
{  0,  1}, {  0,  2}, {  0,  3}, {  0,  4}, {  0,  5}, {  0,  6}, {  0,  7}, {  0,  8},
{  0,  9}, {  0, 10}, {  0, 11}, {  0, 12}, {  0, 13}, {  0, 14}, {  0, 15}, {  0, 16},
{  0, 17}, {  0, 18}, {  0, 19}, {  0, 20}, {  0, 21}, {  0, 22}, {  0, 23}, {  1,  1},
{  1,  2}, {  1,  3}, {  1,  4}, {  1,  5}, {  1,  6}, {  1,  7}, {  1,  8}, {  1,  9},
{  1, 10}, {  1, 11}, {  2,  1}, {  2,  2}, {  2,  3}, {  2,  4}, {  2,  5}, {  2,  6},
{  2,  7}, {  2,  8}, {  3,  1}, {  3,  2}, {  3,  3}, {  3,  4}, {  3,  5}, {  3,  6},
{  3,  7}, {  4,  1}, {  4,  2}, {  4,  3}, {  4,  4}, {  4,  5}, {  5,  1}, {  5,  2},
{  5,  3}, {  5,  4}, {  5,  5}, {  6,  1}, {  6,  2}, {  6,  3}, {  6,  4}, {  7,  1},
{  7,  2}, {  7,  3}, {  7,  4}, {  8,  1}, {  8,  2}, {  8,  3}, {  9,  1}, {  9,  2},
{  9,  3}, { 10,  1}, { 10,  2}, { 10,  3}, { 11,  1}, { 11,  2}, { 11,  3}, { 12,  1},
{ 12,  2}, { 13,  1}, { 13,  2}, { 14,  1}, { 14,  2}, { 15,  1}, { 15,  2}, { 16,  1},
{ 16,  2}, { 17,  1}, { 18,  1}, { 19,  1}, { 20,  1}, { 21,  1}, { 22,  1}, { 23,  1},
{ 24,  1}, { 25,  1}, { 26,  1}, {  0,  1}, {  0,  2}, {  0,  3}, {  0,  4}, {  0,  5},
{  0,  6}, {  0,  7}, {  0,  8}, {  0,  9}, {  1,  1}, {  1,  2}, {  1,  3}, {  1,  4},
{  1,  5}, {  2,  1}, {  2,  2}, {  2,  3}, {  2,  4}, {  3,  1}, {  3,  2}, {  3,  3},
{  3,  4}, {  4,  1}, {  4,  2}, {  4,  3}, {  5,  1}, {  5,  2}, {  5,  3}, {  6,  1},
{  6,  2}, {  6,  3}, {  7,  1}, {  7,  2}, {  8,  1}, {  8,  2}, {  9,  1}, {  9,  2},
{ 10,  1}, { 10,  2}, { 11,  1}, { 11,  2}, { 12,  1}, { 12,  2}, { 13,  1}, { 13,  2},
{ 14,  1}, { 14,  2}, { 15,  1}, { 16,  1}, { 17,  1}, { 18,  1}, { 19,  1}, { 20,  1},
{ 21,  1}, { 22,  1}, { 23,  1}, { 24,  1}, { 25,  1}, { 26,  1}, { 27,  1}, { 28,  1},
{ 29,  1}, { 30,  1}, { 31,  1}, { 32,  1}, { 33,  1}, { 34,  1}, { 35,  1}, { 36,  1}
},
{
{  0,  1}, {  0,  2}, {  0,  3}, {  0,  4}, {  0,  5}, {  0,  6}, {  0,  7}, {  0,  8},
{  0,  9}, {  0, 10}, {  0, 11}, {  0, 12}, {  0, 13}, {  0, 14}, {  0, 15}, {  0, 16},
{  1,  1}, {  1,  2}, {  1,  3}, {  1,  4}, {  1,  5}, {  1,  6}, {  1,  7}, {  1,  8},
{  1,  9}, {  1, 10}, {  1, 11}, {  2,  1}, {  2,  2}, {  2,  3}, {  2,  4}, {  2,  5},
{  2,  6}, {  2,  7}, {  2,  8}, {  3,  1}, {  3,  2}, {  3,  3}, {  3,  4}, {  3,  5},
{  3,  6}, {  3,  7}, {  4,  1}, {  4,  2}, {  4,  3}, {  4,  4}, {  4,  5}, {  5,  1},
{  5,  2}, {  5,  3}, {  5,  4}, {  6,  1}, {  6,  2}, {  6,  3}, {  6,  4}, {  7,  1},
{  7,  2}, {  7,  3}, {  8,  1}, {  8,  2}, {  8,  3}, {  9,  1}, {  9,  2}, {  9,  3},
{ 10,  1}, { 10,  2}, { 10,  3}, { 11,  1}, { 11,  2}, { 11,  3}, { 12,  1}, { 12,  2},
{ 12,  3}, { 13,  1}, { 13,  2}, { 13,  3}, { 14,  1}, { 14,  2}, { 15,  1}, { 15,  2},
{ 16,  1}, { 17,  1}, { 18,  1}, { 19,  1}, { 20,  1}, {  0,  1}, {  0,  2}, {  0,  3},
{  0,  4}, {  1,  1}, {  1,  2}, {  1,  3}, {  1,  4}, {  2,  1}, {  2,  2}, {  2,  3},
{  3,  1}, {  3,  2}, {  3,  3}, {  4,  1}, {  4,  2}, {  5,  1}, {  5,  2}, {  6,  1},
{  6,  2}, {  7,  1}, {  7,  2}, {  8,  1}, {  8,  2}, {  9,  1}, {  9,  2}, { 10,  1},
{ 10,  2}, { 11,  1}, { 11,  2}, { 12,  1}, { 12,  2}, { 13,  1}, { 13,  2}, { 14,  1},
{ 15,  1}, { 16,  1}, { 17,  1}, { 18,  1}, { 19,  1}, { 20,  1}, { 21,  1}, { 22,  1},
{ 23,  1}, { 24,  1}, { 25,  1}, { 26,  1}
},
{
{  0,  1}, {  0,  2}, {  0,  3}, {  0,  4}, {  0,  5}, {  0,  6}, {  0,  7}, {  0,  8},
{  0,  9}, {  0, 10}, {  0, 11}, {  0, 12}, {  0, 13}, {  0, 14}, {  1,  1}, {  1,  2},
{  1,  3}, {  1,  4}, {  1,  5}, {  1,  6}, {  1,  7}, {  1,  8}, {  1,  9}, {  2,  1},
{  2,  2}, {  2,  3}, {  2,  4}, {  2,  5}, {  3,  1}, {  3,  2}, {  3,  3}, {  3,  4},
{  4,  1}, {  4,  2}, {  4,  3}, {  4,  4}, {  5,  1}, {  5,  2}, {  5,  3}, {  5,  4},
{  6,  1}, {  6,  2}, {  6,  3}, {  7,  1}, {  7,  2}, {  7,  3}, {  8,  1}, {  8,  2},
{  8,  3}, {  9,  1}, {  9,  2}, {  9,  3}, { 10,  1}, { 10,  2}, { 10,  3}, { 11,  1},
{ 11,  2}, { 11,  3}, { 12,  1}, { 12,  2}, { 12,  3}, { 13,  1}, { 13,  2}, { 14,  1},
{ 14,  2}, { 15,  1}, { 15,  2}, { 16,  1}, { 17,  1}, { 18,  1}, { 19,  1}, { 20,  1},
{ 21,  1}, { 22,  1}, { 23,  1}, { 24,  1}, { 25,  1}, { 26,  1}, { 27,  1}, { 28,  1},
{ 29,  1}, {  0,  1}, {  0,  2}, {  0,  3}, {  0,  4}, {  0,  5}, {  1,  1}, {  1,  2},
{  1,  3}, {  1,  4}, {  2,  1}, {  2,  2}, {  2,  3}, {  3,  1}, {  3,  2}, {  3,  3},
{  4,  1}, {  4,  2}, {  5,  1}, {  5,  2}, {  6,  1}, {  6,  2}, {  7,  1}, {  7,  2},
{  8,  1}, {  8,  2}, {  9,  1}, {  9,  2}, { 10,  1}, { 10,  2}, { 11,  1}, { 11,  2},
{ 12,  1}, { 12,  2}, { 13,  1}, { 13,  2}, { 14,  1}, { 14,  2}, { 15,  1}, { 15,  2},
{ 16,  1}, { 17,  1}, { 18,  1}, { 19,  1}, { 20,  1}, { 21,  1}, { 22,  1}, { 23,  1},
{ 24,  1}, { 25,  1}, { 26,  1}, { 27,  1}, { 28,  1}, { 29,  1}, { 30,  1}, { 31,  1},
{ 32,  1}, { 33,  1}, { 34,  1}, { 35,  1}, { 36,  1}, { 37,  1}, { 38,  1}, { 39,  1},
{ 40,  1}, { 41,  1}, { 42,  1}, { 43,  1}
},
{
{  0,  1}, {  0,  2}, {  0,  3}, {  0,  4}, {  0,  5}, {  0,  6}, {  0,  7}, {  0,  8},
{  0,  9}, {  0, 10}, {  0, 11}, {  0, 12}, {  0, 13}, {  0, 14}, {  0, 15}, {  0, 16},
{  0, 17}, {  0, 18}, {  0, 19}, {  0, 20}, {  0, 21}, {  0, 22}, {  0, 23}, {  0, 24},
{  0, 25}, {  0, 26}, {  0, 27}, {  1,  1}, {  1,  2}, {  1,  3}, {  1,  4}, {  1,  5},
{  1,  6}, {  1,  7}, {  1,  8}, {  1,  9}, {  1, 10}, {  2,  1}, {  2,  2}, {  2,  3},
{  2,  4}, {  2,  5}, {  3,  1}, {  3,  2}, {  3,  3}, {  3,  4}, {  4,  1}, {  4,  2},
{  4,  3}, {  5,  1}, {  5,  2}, {  5,  3}, {  6,  1}, {  6,  2}, {  6,  3}, {  7,  1},
{  7,  2}, {  7,  3}, {  8,  1}, {  8,  2}, {  9,  1}, {  9,  2}, { 10,  1}, { 11,  1},
{ 12,  1}, { 13,  1}, { 14,  1}, {  0,  1}, {  0,  2}, {  0,  3}, {  0,  4}, {  0,  5},
{  0,  6}, {  0,  7}, {  0,  8}, {  1,  1}, {  1,  2}, {  1,  3}, {  2,  1}, {  2,  2},
{  3,  1}, {  3,  2}, {  4,  1}, {  4,  2}, {  5,  1}, {  5,  2}, {  6,  1}, {  6,  2},
{  7,  1}, {  8,  1}, {  9,  1}, { 10,  1}, { 11,  1}, { 12,  1}, { 13,  1}, { 14,  1},
{ 15,  1}, { 16,  1}, { 17,  1}, { 18,  1}, { 19,  1}, { 20,  1}
},
{
{  0,  1}, {  0,  2}, {  0,  3}, {  0,  4}, {  0,  5}, {  0,  6}, {  0,  7}, {  0,  8},
{  0,  9}, {  0, 10}, {  0, 11}, {  0, 12}, {  1,  1}, {  1,  2}, {  1,  3}, {  1,  4},
{  1,  5}, {  1,  6}, {  2,  1}, {  2,  2}, {  2,  3}, {  2,  4}, {  3,  1}, {  3,  2},
{  3,  3}, {  4,  1}, {  4,  2}, {  4,  3}, {  5,  1}, {  5,  2}, {  5,  3}, {  6,  1},
{  6,  2}, {  6,  3}, {  7,  1}, {  7,  2}, {  8,  1}, {  8,  2}, {  9,  1}, {  9,  2},
{ 10,  1}, { 10,  2}, { 11,  1}, { 12,  1}, { 13,  1}, { 14,  1}, { 15,  1}, { 16,  1},
{ 17,  1}, { 18,  1}, { 19,  1}, { 20,  1}, { 21,  1}, { 22,  1}, { 23,  1}, { 24,  1},
{ 25,  1}, { 26,  1}, {  0,  1}, {  0,  2}, {  0,  3}, {  1,  1}, {  1,  2}, {  2,  1},
{  3,  1}, {  4,  1}, {  5,  1}, {  6,  1}, {  7,  1}, {  8,  1}, {  9,  1}, { 10,  1},
{ 11,  1}, { 12,  1}, { 13,  1}, { 14,  1}, { 15,  1}, { 16,  1}, { 17,  1}, { 18,  1},
{ 19,  1}, { 20,  1}, { 21,  1}, { 22,  1}, { 23,  1}, { 24,  1}, { 25,  1}, { 26,  1},
{ 27,  1}, { 28,  1}, { 29,  1}, { 30,  1}, { 31,  1}, { 32,  1}, { 33,  1}, { 34,  1},
{ 35,  1}, { 36,  1}, { 37,  1}, { 38,  1}, { 39,  1}, { 40,  1}
},
{
{  0,  1}, {  0,  2}, {  0,  3}, {  0,  4}, {  0,  5}, {  0,  6}, {  0,  7}, {  0,  8},
{  0,  9}, {  0, 10}, {  0, 11}, {  0, 12}, {  0, 13}, {  0, 14}, {  0, 15}, {  0, 16},
{  0, 17}, {  0, 18}, {  0, 19}, {  0, 20}, {  0, 21}, {  0, 22}, {  0, 23}, {  0, 24},
{  0, 25}, {  0, 26}, {  0, 27}, {  0, 28}, {  0, 29}, {  0, 30}, {  0, 31}, {  0, 32},
{  0, 33}, {  0, 34}, {  0, 35}, {  0, 36}, {  0, 37}, {  0, 38}, {  0, 39}, {  0, 40},
{  0, 41}, {  0, 42}, {  0, 43}, {  0, 44}, {  0, 45}, {  0, 46}, {  0, 47}, {  0, 48},
{  0, 49}, {  0, 50}, {  0, 51}, {  0, 52}, {  0, 53}, {  0, 54}, {  0, 55}, {  0, 56},
{  1,  1}, {  1,  2}, {  1,  3}, {  1,  4}, {  1,  5}, {  1,  6}, {  1,  7}, {  1,  8},
{  1,  9}, {  1, 10}, {  1, 11}, {  1, 12}, {  1, 13}, {  1, 14}, {  1, 15}, {  1, 16},
{  1, 17}, {  1, 18}, {  1, 19}, {  1, 20}, {  2,  1}, {  2,  2}, {  2,  3}, {  2,  4},
{  2,  5}, {  2,  6}, {  2,  7}, {  2,  8}, {  2,  9}, {  2, 10}, {  3,  1}, {  3,  2},
{  3,  3}, {  3,  4}, {  3,  5}, {  3,  6}, {  3,  7}, {  4,  1}, {  4,  2}, {  4,  3},
{  4,  4}, {  4,  5}, {  4,  6}, {  5,  1}, {  5,  2}, {  5,  3}, {  5,  4}, {  5,  5},
{  6,  1}, {  6,  2}, {  6,  3}, {  6,  4}, {  7,  1}, {  7,  2}, {  7,  3}, {  8,  1},
{  8,  2}, {  8,  3}, {  9,  1}, {  9,  2}, {  9,  3}, { 10,  1}, { 10,  2}, { 11,  1},
{ 11,  2}, { 12,  1}, { 12,  2}, { 13,  1}, { 13,  2}, { 14,  1}, {  0,  1}, {  0,  2},
{  0,  3}, {  0,  4}, {  1,  1}, {  1,  2}, {  1,  3}, {  2,  1}, {  2,  2}, {  2,  3},
{  3,  1}, {  3,  2}, {  4,  1}, {  4,  2}, {  5,  1}, {  5,  2}, {  6,  1}, {  6,  2},
{  7,  1}, {  7,  2}, {  8,  1}, {  8,  2}, {  9,  1}, {  9,  2}, { 10,  1}, { 10,  2},
{ 11,  1}, { 11,  2}, { 12,  1}, { 12,  2}, { 13,  1}, { 13,  2}, { 14,  1}, { 14,  2},
{ 15,  1}, { 16,  1}
},
{
{  0,  1}, {  0,  2}, {  0,  3}, {  0,  4}, {  0,  5}, {  0,  6}, {  0,  7}, {  0,  8},
{  0,  9}, {  0, 10}, {  0, 11}, {  0, 12}, {  0, 13}, {  0, 14}, {  0, 15}, {  0, 16},
{  0, 17}, {  0, 18}, {  0, 19}, {  0, 20}, {  0, 21}, {  0, 22}, {  0, 23}, {  0, 24},
{  0, 25}, {  0, 26}, {  0, 27}, {  0, 28}, {  0, 29}, {  0, 30}, {  0, 31}, {  0, 32},
{  1,  1}, {  1,  2}, {  1,  3}, {  1,  4}, {  1,  5}, {  1,  6}, {  1,  7}, {  1,  8},
{  1,  9}, {  1, 10}, {  1, 11}, {  1, 12}, {  1, 13}, {  2,  1}, {  2,  2}, {  2,  3},
{  2,  4}, {  2,  5}, {  2,  6}, {  2,  7}, {  2,  8}, {  3,  1}, {  3,  2}, {  3,  3},
{  3,  4}, {  3,  5}, {  3,  6}, {  4,  1}, {  4,  2}, {  4,  3}, {  4,  4}, {  4,  5},
{  5,  1}, {  5,  2}, {  5,  3}, {  5,  4}, {  6,  1}, {  6,  2}, {  6,  3}, {  6,  4},
{  7,  1}, {  7,  2}, {  7,  3}, {  8,  1}, {  8,  2}, {  8,  3}, {  9,  1}, {  9,  2},
{  9,  3}, { 10,  1}, { 10,  2}, { 11,  1}, { 11,  2}, { 12,  1}, { 12,  2}, { 13,  1},
{ 13,  2}, { 14,  1}, { 14,  2}, { 15,  1}, { 15,  2}, { 16,  1}, { 16,  2}, { 17,  1},
{ 17,  2}, { 18,  1}, { 18,  2}, { 19,  1}, { 19,  2}, { 20,  1}, { 20,  2}, { 21,  1},
{ 21,  2}, { 22,  1}, { 22,  2}, { 23,  1}, { 24,  1}, {  0,  1}, {  0,  2}, {  0,  3},
{  0,  4}, {  1,  1}, {  1,  2}, {  1,  3}, {  2,  1}, {  2,  2}, {  2,  3}, {  3,  1},
{  3,  2}, {  3,  3}, {  4,  1}, {  4,  2}, {  5,  1}, {  5,  2}, {  6,  1}, {  6,  2},
{  7,  1}, {  7,  2}, {  8,  1}, {  8,  2}, {  9,  1}, {  9,  2}, { 10,  1}, { 10,  2},
{ 11,  1}, { 11,  2}, { 12,  1}, { 12,  2}, { 13,  1}, { 13,  2}, { 14,  1}, { 14,  2},
{ 15,  1}, { 15,  2}, { 16,  1}, { 16,  2}, { 17,  1}, { 17,  2}, { 18,  1}, { 18,  2},
{ 19,  1}, { 19,  2}, { 20,  1}, { 20,  2}, { 21,  1}, { 21,  2}, { 22,  1}, { 22,  2},
{ 23,  1}, { 23,  2}, { 24,  1}, { 24,  2}, { 25,  1}, { 25,  2}, { 26,  1}, { 26,  2},
{ 27,  1}, { 27,  2}, { 28,  1}, { 28,  2}, { 29,  1}, { 30,  1}
}
};

static const uint8_t vc1_delta_level_table[AC_MODES][31] = {
{
      19,    15,    12,    11,     6,     5,     4,     4,     4,     4,
       3,     3,     3,     3,     3,     3,     2,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1
},
{
      23,    11,     8,     7,     5,     5,     4,     4,     3,     3,
       3,     3,     2,     2,     2,     2,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1
},
{
      16,    11,     8,     7,     5,     4,     4,     3,     3,     3,
       3,     3,     3,     3,     2,     2,     1,     1,     1,     1,
       1
},
{
      14,     9,     5,     4,     4,     4,     3,     3,     3,     3,
       3,     3,     3,     2,     2,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,
       1
},
{
      27,    10,     5,     4,     3,     3,     3,     3,     2,     2,
       1,     1,     1,     1,     1
},
{
      12,     6,     4,     3,     3,     3,     3,     2,     2,     2,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1
},
{
      56,    20,    10,     7,     6,     5,     4,     3,     3,     3,
       2,     2,     2,     2,     1
},
{
      32,    13,     8,     6,     5,     4,     4,     3,     3,     3,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     1,     1
}
};

static const uint8_t vc1_last_delta_level_table[AC_MODES][44] = {
{
       6,     5,     4,     4,     3,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1
},
{
       9,     5,     4,     4,     3,     3,     3,     2,     2,     2,
       2,     2,     2,     2,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1
},
{
       4,     4,     3,     3,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1
},
{
       5,     4,     3,     3,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1
},
{
       8,     3,     2,     2,     2,     2,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1
},
{
       3,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1
},
{
       4,     3,     3,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     1,     1
},
{
       4,     3,     3,     3,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     1,
       1
}
};

static const uint8_t vc1_delta_run_table[AC_MODES][57] = {
{
      -1,    30,    17,    15,     9,     5,     4,     3,     3,     3,
       3,     3,     2,     1,     1,     1,     0,     0,     0,
       0
},
{
      -1,    26,    16,    11,     7,     5,     3,     3,     2,     1,
       1,     1,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0
},
{
      -1,    20,    15,    13,     6,     4,     3,     3,     2,     1,
       1,     1,     0,     0,     0,     0,     0
},
{
      -1,    29,    15,    12,     5,     2,     1,     1,     1,     1,
       0,     0,     0,     0,     0
},
{
      -1,    14,     9,     7,     3,     2,     1,     1,     1,     1,
       1,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0
},
{
      -1,    26,    10,     6,     2,     1,     1,     0,     0,     0,
       0,     0,     0
},
{
      -1,    14,    13,     9,     6,     5,     4,     3,     2,     2,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0
},
{
      -1,    24,    22,     9,     6,     4,     3,     2,     2,     1,
       1,     1,     1,     1,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0
}
};

static const uint8_t vc1_last_delta_run_table[AC_MODES][10] = {
{
      -1,    37,    15,     4,     3,     1,     0
},
{
      -1,    36,    14,     6,     3,     1,     0,     0,     0,
       0
},
{
      -1,    26,    13,     3,     1
},
{
      -1,    43,    15,     3,     1,     0
},
{
      -1,    20,     6,     1,     0,     0,     0,     0,     0
},
{
      -1,    40,     1,     0
},
{
      -1,    16,    14,     2,     0
},
{
      -1,    30,    28,     3,     0
}
};

#endif /* AVCODEC_VC1ACDATA_H */
