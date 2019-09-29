/* Copyright (c) 2018 The Linux Foundation. All rights reserved.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 and
 * only version 2 as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 */

#ifndef _SWRM_PORT_CONFIG
#define _SWRM_PORT_CONFIG

#define WSA_MSTR_PORT_MASK 0xFF


/*
 * Add port configuration in the format
 *{ si, off1, off2, hstart, hstop, wd_len, bp_mode, bgp_ctrl, lane_ctrl}
 */

struct port_params wsa_frame_superset[SWR_MSTR_PORT_LEN] = {
	{7,  1,  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF},
	{31, 2,  0,    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF},
	{63, 12, 31,   0xFF, 0xFF, 0xFF, 0x1, 0xFF, 0xFF},
	{7,  6,  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF},
	{31, 18, 0,    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF},
	{63, 13, 31,   0xFF, 0xFF, 0xFF, 0x1, 0xFF, 0xFF},
	{15, 7,  0,    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF},
	{15, 10, 0,    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF},
};

struct port_params rx_frame_params[SWR_MSTR_PORT_LEN] = {
	{3,  0,  0,  0xFF, 0xFF, 1,    0xFF, 0xFF, 1},
	{31, 0,  0,  3,    6,    7,    0,    0xFF, 0},
	{31, 11, 11, 0xFF, 0xFF, 4,    1,    0xFF, 0},
	{3,  1,  0,  0xFF, 0xFF, 0xFF, 0xFF, 1,    0},
	{0,  0,  0,  0xFF, 0xFF, 0xFF, 0xFF, 0,    0},
};

struct port_params rx_frame_params_dsd[SWR_MSTR_PORT_LEN] = {
	{3,  0,  0,  0xFF, 0xFF, 1,    0xFF, 0xFF, 1},
	{31, 0,  0,  3,    6,    7,    0,    0xFF, 0},
	{31, 11, 11, 0xFF, 0xFF, 4,    1,    0xFF, 0},
	{7,  9,  0,  0xFF, 0xFF, 0xFF, 0xFF, 1,    0},
	{3,  1,  0,  0xFF, 0xFF, 0xFF, 0xFF, 3,    0},
};

struct port_params tx_frame_params_superset[SWR_MSTR_PORT_LEN] = {
	{1,  1,  0,  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0},
	{1,  0,  0,  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 1},
	{3,  1,  0,  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0},
	{3,  0,  0,  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 1},
};

#endif /* _SWRM_REGISTERS_H */
