/******************************************************************************
 *
 * Copyright(c) 2007 - 2011 Realtek Corporation. All rights reserved.
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of version 2 of the GNU General Public License as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for
 * more details.
 *
 ******************************************************************************/

#ifndef	__ODMDYNAMICBBPOWERSAVING_H__
#define    __ODMDYNAMICBBPOWERSAVING_H__

typedef struct _Dynamic_Power_Saving_
{
	u8 PreCCAState;
	u8 CurCCAState;

	u8 PreRFState;
	u8 CurRFState;

	int		    Rssi_val_min;

	u8 initialize;
	u32 	Reg874, RegC70, Reg85C, RegA74;

}PS_T,*pPS_T;

#define dm_RF_Saving	ODM_RF_Saving

void ODM_RF_Saving(
	void *				pDM_VOID,
u8 bForceInNormal
	);

void
odm_DynamicBBPowerSavingInit(
	void *				pDM_VOID
	);

#endif
