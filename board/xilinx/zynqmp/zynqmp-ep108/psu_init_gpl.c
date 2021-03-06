/*
 * (c) Copyright 2015 Xilinx, Inc. All rights reserved.
 *
 * SPDX-License-Identifier: GPL-2.0+
 */

#include <asm/arch/psu_init_gpl.h>
#include <xil_io.h>

static unsigned long psu_pll_init_data(void)
{
	psu_mask_write(0xFF5E0034, 0xFE7FEDEFU, 0x7E4B0C62U);
	psu_mask_write(0xFF5E0030, 0x00717F00U, 0x00014E00U);
	psu_mask_write(0xFF5E0030, 0x00000008U, 0x00000008U);
	psu_mask_write(0xFF5E0030, 0x00000001U, 0x00000001U);
	psu_mask_write(0xFF5E0030, 0x00000001U, 0x00000000U);
	mask_poll(0xFF5E0040, 0x00000002U);
	psu_mask_write(0xFF5E0030, 0x00000008U, 0x00000000U);
	psu_mask_write(0xFF5E0048, 0x00003F00U, 0x00000300U);
	psu_mask_write(0xFF5E0024, 0xFE7FEDEFU, 0x7E4E2C62U);
	psu_mask_write(0xFF5E0020, 0x00717F00U, 0x00013C00U);
	psu_mask_write(0xFF5E0020, 0x00000008U, 0x00000008U);
	psu_mask_write(0xFF5E0020, 0x00000001U, 0x00000001U);
	psu_mask_write(0xFF5E0020, 0x00000001U, 0x00000000U);
	mask_poll(0xFF5E0040, 0x00000001U);
	psu_mask_write(0xFF5E0020, 0x00000008U, 0x00000000U);
	psu_mask_write(0xFF5E0044, 0x00003F00U, 0x00000200U);
	psu_mask_write(0xFD1A0024, 0xFE7FEDEFU, 0x7E76CC6CU);
	psu_mask_write(0xFD1A0020, 0x00717F00U, 0x00012700U);
	psu_mask_write(0xFD1A0020, 0x00000008U, 0x00000008U);
	psu_mask_write(0xFD1A0020, 0x00000001U, 0x00000001U);
	psu_mask_write(0xFD1A0020, 0x00000001U, 0x00000000U);
	mask_poll(0xFD1A0044, 0x00000001U);
	psu_mask_write(0xFD1A0020, 0x00000008U, 0x00000000U);
	psu_mask_write(0xFD1A0048, 0x00003F00U, 0x00000200U);
	psu_mask_write(0xFD1A0030, 0xFE7FEDEFU, 0x7E76CC6CU);
	psu_mask_write(0xFD1A002C, 0x00717F00U, 0x00012700U);
	psu_mask_write(0xFD1A002C, 0x00000008U, 0x00000008U);
	psu_mask_write(0xFD1A002C, 0x00000001U, 0x00000001U);
	psu_mask_write(0xFD1A002C, 0x00000001U, 0x00000000U);
	mask_poll(0xFD1A0044, 0x00000002U);
	psu_mask_write(0xFD1A002C, 0x00000008U, 0x00000000U);
	psu_mask_write(0xFD1A004C, 0x00003F00U, 0x00000200U);
	psu_mask_write(0xFD1A003C, 0xFE7FEDEFU, 0x7E4B0C62U);
	psu_mask_write(0xFD1A0038, 0x00717F00U, 0x00015100U);
	psu_mask_write(0xFD1A0038, 0x00000008U, 0x00000008U);
	psu_mask_write(0xFD1A0038, 0x00000001U, 0x00000001U);
	psu_mask_write(0xFD1A0038, 0x00000001U, 0x00000000U);
	mask_poll(0xFD1A0044, 0x00000004U);
	psu_mask_write(0xFD1A0038, 0x00000008U, 0x00000000U);
	psu_mask_write(0xFD1A0050, 0x00003F00U, 0x00000300U);

	return 1;
}

static unsigned long psu_clock_init_data(void)
{
	psu_mask_write(0xFF5E0050, 0x063F3F07U, 0x06012800U);
	psu_mask_write(0xFF5E0054, 0x063F3F07U, 0x06012800U);
	psu_mask_write(0xFF5E0058, 0x063F3F07U, 0x06012800U);
	psu_mask_write(0xFF5E005C, 0x063F3F07U, 0x06012800U);
	psu_mask_write(0xFF5E0100, 0x013F3F07U, 0x01010402U);
	psu_mask_write(0xFF5E0060, 0x023F3F07U, 0x02011900U);
	psu_mask_write(0xFF5E0064, 0x023F3F07U, 0x02011900U);
	psu_mask_write(0xFF5E004C, 0x023F3F07U, 0x02013200U);
	psu_mask_write(0xFF5E0068, 0x013F3F07U, 0x01013200U);
	psu_mask_write(0xFF5E006C, 0x013F3F07U, 0x01050D02U);
	psu_mask_write(0xFF5E0070, 0x013F3F07U, 0x01050D02U);
	psu_mask_write(0xFF18030C, 0x00020003U, 0x00000002U);
	psu_mask_write(0xFF5E0074, 0x013F3F07U, 0x01012800U);
	psu_mask_write(0xFF5E0078, 0x013F3F07U, 0x01012800U);
	psu_mask_write(0xFF5E0120, 0x013F3F07U, 0x01012800U);
	psu_mask_write(0xFF5E0124, 0x013F3F07U, 0x01053200U);
	psu_mask_write(0xFF5E007C, 0x013F3F07U, 0x01013402U);
	psu_mask_write(0xFF5E0080, 0x013F3F07U, 0x010D1902U);
	psu_mask_write(0xFF5E0084, 0x013F3F07U, 0x01012800U);
	psu_mask_write(0xFF5E0088, 0x013F3F07U, 0x01012800U);
	psu_mask_write(0xFF5E0090, 0x01003F07U, 0x01003F02U);
	psu_mask_write(0xFF5E009C, 0x01003F07U, 0x01000500U);
	psu_mask_write(0xFF5E00A0, 0x01003F07U, 0x01000200U);
	psu_mask_write(0xFF5E00A4, 0x01003F07U, 0x01000602U);
	psu_mask_write(0xFF5E00A8, 0x01003F07U, 0x01000202U);
	psu_mask_write(0xFF5E00AC, 0x01003F07U, 0x01000A02U);
	psu_mask_write(0xFF5E00B0, 0x01003F07U, 0x01000600U);
	psu_mask_write(0xFF5E00B4, 0x013F3F07U, 0x01013200U);
	psu_mask_write(0xFF5E00B8, 0x01003F07U, 0x01000202U);
	psu_mask_write(0xFF5E00C0, 0x013F3F07U, 0x01010402U);
	psu_mask_write(0xFF5E00C4, 0x013F3F07U, 0x01010402U);
	psu_mask_write(0xFF5E00C8, 0x013F3F07U, 0x01010402U);
	psu_mask_write(0xFF5E00CC, 0x013F3F07U, 0x01010402U);
	psu_mask_write(0xFF5E0108, 0x013F3F07U, 0x01011402U);
	psu_mask_write(0xFF5E0104, 0x00000007U, 0x00000000U);
	psu_mask_write(0xFF5E0128, 0x01003F07U, 0x01000A00U);
	psu_mask_write(0xFD1A00A0, 0x01003F07U, 0x01000200U);
	psu_mask_write(0xFD1A00B4, 0x01003F07U, 0x01000200U);
	psu_mask_write(0xFD1A0070, 0x013F3F07U, 0x010F2D00U);
	psu_mask_write(0xFD1A0074, 0x013F3F07U, 0x01013600U);
	psu_mask_write(0xFD1A007C, 0x013F3F07U, 0x01013600U);
	psu_mask_write(0xFD1A0060, 0x03003F07U, 0x03003F00U);
	psu_mask_write(0xFD1A0064, 0x01003F07U, 0x01000200U);
	psu_mask_write(0xFD1A0068, 0x01003F07U, 0x01000200U);
	psu_mask_write(0xFD1A0080, 0x00003F07U, 0x00000400U);
	psu_mask_write(0xFD1A0084, 0x07003F07U, 0x07003F03U);
	psu_mask_write(0xFD1A00B8, 0x01003F07U, 0x01000103U);
	psu_mask_write(0xFD1A00BC, 0x01003F07U, 0x01000103U);
	psu_mask_write(0xFD1A00C0, 0x01003F07U, 0x01000103U);
	psu_mask_write(0xFD1A00C4, 0x01003F07U, 0x01000502U);
	psu_mask_write(0xFD1A00C8, 0x01003F07U, 0x01000400U);
	psu_mask_write(0xFD1A00F8, 0x00003F07U, 0x00000302U);
	psu_mask_write(0xFF180380, 0x000000FFU, 0x00000000U);
	psu_mask_write(0xFD610100, 0x00000001U, 0x00000000U);
	psu_mask_write(0xFF180300, 0x00000001U, 0x00000000U);
	psu_mask_write(0xFF410050, 0x00000001U, 0x00000000U);
	psu_mask_write(0xFF180308, 0x00008000U, 0x00008000U);

	return 1;
}

static unsigned long psu_mio_init_data(void)
{
	psu_mask_write(0xFF180000, 0x000000FEU, 0x00000002U);
	psu_mask_write(0xFF180004, 0x000000FEU, 0x00000002U);
	psu_mask_write(0xFF180008, 0x000000FEU, 0x00000000U);
	psu_mask_write(0xFF18000C, 0x000000FEU, 0x00000000U);
	psu_mask_write(0xFF180010, 0x000000FEU, 0x00000002U);
	psu_mask_write(0xFF180014, 0x000000FEU, 0x00000002U);
	psu_mask_write(0xFF180018, 0x000000FEU, 0x00000000U);
	psu_mask_write(0xFF18001C, 0x000000FEU, 0x00000000U);
	psu_mask_write(0xFF180020, 0x000000FEU, 0x00000000U);
	psu_mask_write(0xFF180024, 0x000000FEU, 0x00000000U);
	psu_mask_write(0xFF180028, 0x000000FEU, 0x00000000U);
	psu_mask_write(0xFF18002C, 0x000000FEU, 0x00000000U);
	psu_mask_write(0xFF180030, 0x000000FEU, 0x00000000U);
	psu_mask_write(0xFF180034, 0x000000FEU, 0x00000004U);
	psu_mask_write(0xFF180038, 0x000000FEU, 0x00000004U);
	psu_mask_write(0xFF18003C, 0x000000FEU, 0x00000004U);
	psu_mask_write(0xFF180040, 0x000000FEU, 0x00000004U);
	psu_mask_write(0xFF180044, 0x000000FEU, 0x00000004U);
	psu_mask_write(0xFF180048, 0x000000FEU, 0x00000004U);
	psu_mask_write(0xFF18004C, 0x000000FEU, 0x00000004U);
	psu_mask_write(0xFF180050, 0x000000FEU, 0x00000004U);
	psu_mask_write(0xFF180054, 0x000000FEU, 0x00000004U);
	psu_mask_write(0xFF180058, 0x000000FEU, 0x00000004U);
	psu_mask_write(0xFF18005C, 0x000000FEU, 0x00000004U);
	psu_mask_write(0xFF180060, 0x000000FEU, 0x00000004U);
	psu_mask_write(0xFF180064, 0x000000FEU, 0x00000004U);
	psu_mask_write(0xFF180068, 0x000000FEU, 0x00000000U);
	psu_mask_write(0xFF18006C, 0x000000FEU, 0x00000000U);
	psu_mask_write(0xFF180070, 0x000000FEU, 0x00000000U);
	psu_mask_write(0xFF180074, 0x000000FEU, 0x00000080U);
	psu_mask_write(0xFF180078, 0x000000FEU, 0x00000000U);
	psu_mask_write(0xFF18007C, 0x000000FEU, 0x00000000U);
	psu_mask_write(0xFF180080, 0x000000FEU, 0x00000000U);
	psu_mask_write(0xFF180084, 0x000000FEU, 0x00000000U);
	psu_mask_write(0xFF180088, 0x000000FEU, 0x00000000U);
	psu_mask_write(0xFF18008C, 0x000000FEU, 0x00000080U);
	psu_mask_write(0xFF180090, 0x000000FEU, 0x00000000U);
	psu_mask_write(0xFF180094, 0x000000FEU, 0x00000000U);
	psu_mask_write(0xFF180098, 0x000000FEU, 0x00000000U);
	psu_mask_write(0xFF18009C, 0x000000FEU, 0x00000010U);
	psu_mask_write(0xFF1800A0, 0x000000FEU, 0x00000010U);
	psu_mask_write(0xFF1800A4, 0x000000FEU, 0x00000010U);
	psu_mask_write(0xFF1800A8, 0x000000FEU, 0x00000010U);
	psu_mask_write(0xFF1800AC, 0x000000FEU, 0x00000010U);
	psu_mask_write(0xFF1800B0, 0x000000FEU, 0x00000010U);
	psu_mask_write(0xFF1800B4, 0x000000FEU, 0x00000010U);
	psu_mask_write(0xFF1800B8, 0x000000FEU, 0x00000010U);
	psu_mask_write(0xFF1800BC, 0x000000FEU, 0x00000010U);
	psu_mask_write(0xFF1800C0, 0x000000FEU, 0x00000010U);
	psu_mask_write(0xFF1800C4, 0x000000FEU, 0x00000010U);
	psu_mask_write(0xFF1800C8, 0x000000FEU, 0x00000010U);
	psu_mask_write(0xFF1800CC, 0x000000FEU, 0x00000010U);
	psu_mask_write(0xFF1800D0, 0x000000FEU, 0x00000004U);
	psu_mask_write(0xFF1800D4, 0x000000FEU, 0x00000004U);
	psu_mask_write(0xFF1800D8, 0x000000FEU, 0x00000004U);
	psu_mask_write(0xFF1800DC, 0x000000FEU, 0x00000004U);
	psu_mask_write(0xFF1800E0, 0x000000FEU, 0x00000004U);
	psu_mask_write(0xFF1800E4, 0x000000FEU, 0x00000004U);
	psu_mask_write(0xFF1800E8, 0x000000FEU, 0x00000004U);
	psu_mask_write(0xFF1800EC, 0x000000FEU, 0x00000004U);
	psu_mask_write(0xFF1800F0, 0x000000FEU, 0x00000004U);
	psu_mask_write(0xFF1800F4, 0x000000FEU, 0x00000004U);
	psu_mask_write(0xFF1800F8, 0x000000FEU, 0x00000004U);
	psu_mask_write(0xFF1800FC, 0x000000FEU, 0x00000004U);
	psu_mask_write(0xFF180100, 0x000000FEU, 0x00000008U);
	psu_mask_write(0xFF180104, 0x000000FEU, 0x00000008U);
	psu_mask_write(0xFF180108, 0x000000FEU, 0x00000008U);
	psu_mask_write(0xFF18010C, 0x000000FEU, 0x00000008U);
	psu_mask_write(0xFF180110, 0x000000FEU, 0x00000008U);
	psu_mask_write(0xFF180114, 0x000000FEU, 0x00000008U);
	psu_mask_write(0xFF180118, 0x000000FEU, 0x00000008U);
	psu_mask_write(0xFF18011C, 0x000000FEU, 0x00000008U);
	psu_mask_write(0xFF180120, 0x000000FEU, 0x00000008U);
	psu_mask_write(0xFF180124, 0x000000FEU, 0x00000008U);
	psu_mask_write(0xFF180128, 0x000000FEU, 0x00000008U);
	psu_mask_write(0xFF18012C, 0x000000FEU, 0x00000000U);
	psu_mask_write(0xFF180130, 0x000000FEU, 0x00000000U);
	psu_mask_write(0xFF180134, 0x000000FEU, 0x00000000U);
	psu_mask_write(0xFF180204, 0xFFFFFFFFU, 0x00000002U);
	psu_mask_write(0xFF180208, 0xFFFFFFFFU, 0x00B03000U);
	psu_mask_write(0xFF18020C, 0x00003FFFU, 0x00000002U);
	psu_mask_write(0xFF180138, 0x03FFFFFFU, 0x03FFFFFFU);
	psu_mask_write(0xFF18013C, 0x03FFFFFFU, 0x03FFFFFFU);
	psu_mask_write(0xFF180140, 0x03FFFFFFU, 0x00000000U);
	psu_mask_write(0xFF180144, 0x03FFFFFFU, 0x03FFFFFFU);
	psu_mask_write(0xFF180148, 0x03FFFFFFU, 0x03FFFFFFU);
	psu_mask_write(0xFF18014C, 0x03FFFFFFU, 0x00000000U);
	psu_mask_write(0xFF180154, 0x03FFFFFFU, 0x03FFFFFFU);
	psu_mask_write(0xFF180158, 0x03FFFFFFU, 0x03FFFFFFU);
	psu_mask_write(0xFF18015C, 0x03FFFFFFU, 0x00000000U);
	psu_mask_write(0xFF180160, 0x03FFFFFFU, 0x03FFFFFFU);
	psu_mask_write(0xFF180164, 0x03FFFFFFU, 0x03FFFFFFU);
	psu_mask_write(0xFF180168, 0x03FFFFFFU, 0x00000000U);
	psu_mask_write(0xFF180170, 0x03FFFFFFU, 0x03FFFFFFU);
	psu_mask_write(0xFF180174, 0x03FFFFFFU, 0x03FFFFFFU);
	psu_mask_write(0xFF180178, 0x03FFFFFFU, 0x00000000U);
	psu_mask_write(0xFF18017C, 0x03FFFFFFU, 0x03FFFFFFU);
	psu_mask_write(0xFF180180, 0x03FFFFFFU, 0x03FFFFFFU);
	psu_mask_write(0xFF180184, 0x03FFFFFFU, 0x00000000U);
	psu_mask_write(0xFF180200, 0x0000000FU, 0x00000000U);

	return 1;
}

static unsigned long psu_peripherals_init_data(void)
{
	psu_mask_write(0xFF5E0230, 0x0000000FU, 0x00000000U);
	psu_mask_write(0xFF5E0238, 0x00000001U, 0x00000000U);
	psu_mask_write(0xFF5E0238, 0x00010000U, 0x00000000U);
	psu_mask_write(0xFF5E023C, 0x00000540U, 0x00000000U);
	psu_mask_write(0xFD1A0100, 0x0001803CU, 0x00000000U);
	psu_mask_write(0xFF5E0238, 0x00000060U, 0x00000000U);
	psu_mask_write(0xFF180310, 0x00008001U, 0x00000000U);
	psu_mask_write(0xFF180320, 0x33803380U, 0x02800280U);
	psu_mask_write(0xFF18031C, 0x00007F80U, 0x00000A00U);
	psu_mask_write(0xFF18031C, 0x7F800000U, 0x0A000000U);
	psu_mask_write(0xFF5E0238, 0x00000180U, 0x00000000U);
	psu_mask_write(0xFF5E0238, 0x00000600U, 0x00000000U);
	psu_mask_write(0xFF5E0238, 0x00008000U, 0x00000000U);
	psu_mask_write(0xFF5E0238, 0x00000018U, 0x00000000U);
	psu_mask_write(0xFF5E0238, 0x00007800U, 0x00000000U);
	psu_mask_write(0xFF5E0238, 0x00000006U, 0x00000000U);
	psu_mask_write(0xFF000034, 0x000000FFU, 0x00000006U);
	psu_mask_write(0xFF000018, 0x0000FFFFU, 0x0000001FU);
	psu_mask_write(0xFF000000, 0x000001FFU, 0x00000017U);
	psu_mask_write(0xFF000004, 0x000003FFU, 0x00000020U);
	psu_mask_write(0xFF010034, 0x000000FFU, 0x00000006U);
	psu_mask_write(0xFF010018, 0x0000FFFFU, 0x0000001FU);
	psu_mask_write(0xFF010000, 0x000001FFU, 0x00000017U);
	psu_mask_write(0xFF010004, 0x000003FFU, 0x00000020U);
	psu_mask_write(0xFF4B0024, 0x000000FFU, 0x000000FFU);
	psu_mask_write(0xFFCA5000, 0x00001FFFU, 0x00000000U);
	psu_mask_write(0xFD615000, 0x00000F00U, 0x00000A00U);
	psu_mask_write(0xFD360000, 0x00000003U, 0x00000000U);
	psu_mask_write(0xFD370000, 0x00000003U, 0x00000000U);
	psu_mask_write(0xFD380000, 0x00000003U, 0x00000000U);
	psu_mask_write(0xFD390000, 0x00000003U, 0x00000000U);
	psu_mask_write(0xFD3A0000, 0x00000003U, 0x00000000U);
	psu_mask_write(0xFD3B0000, 0x00000003U, 0x00000000U);
	psu_mask_write(0xFF9B0000, 0x00000003U, 0x00000000U);
	psu_mask_write(0xFF0A002C, 0x0000FFFFU, 0x00008000U);
	psu_mask_write(0xFF0A0344, 0xFFFFFFFFU, 0x80000000U);
	psu_mask_write(0xFF0A0348, 0xFFFFFFFFU, 0x80000000U);
	psu_mask_write(0xFF0A0054, 0xFFFFFFFFU, 0x80000000U);
	psu_mask_write(0xFF0A0054, 0xFFFFFFFFU, 0x00000000U);
	psu_mask_write(0xFF0A0054, 0xFFFFFFFFU, 0x80000000U);
	psu_mask_write(0xFD5C0060, 0x000F000FU, 0x00000000U);

	return 1;
}

int init_ddrc(void)
{
	Xil_Out32(0xFD1A0108, 0x0000000F);
	Xil_Out32(0xFD070000, 0x41040001);
	Xil_Out32(0xFD070034, 0x00404310);
	Xil_Out32(0xFD070064, 0x0040001E);
	Xil_Out32(0xFD070070, 0x00000010);
	Xil_Out32(0xFD070074, 0x00000000);
	Xil_Out32(0xFD0700C4, 0x10000200);
	Xil_Out32(0xFD0700C8, 0x0030051F);
	Xil_Out32(0xFD0700D0, 0x40020004);
	Xil_Out32(0xFD0700D4, 0x00010000);
	Xil_Out32(0xFD0700D8, 0x00001205);
	Xil_Out32(0xFD0700DC, 0x09300000);
	Xil_Out32(0xFD0700E0, 0x02080000);
	Xil_Out32(0xFD0700E4, 0x00110004);
	Xil_Out32(0xFD070100, 0x090E110A);
	Xil_Out32(0xFD070104, 0x0007020E);
	Xil_Out32(0xFD070108, 0x03040407);
	Xil_Out32(0xFD07010C, 0x00502006);
	Xil_Out32(0xFD070110, 0x04020205);
	Xil_Out32(0xFD070114, 0x03030202);
	Xil_Out32(0xFD070118, 0x01010003);
	Xil_Out32(0xFD07011C, 0x00000101);
	Xil_Out32(0xFD070120, 0x03030903);
	Xil_Out32(0xFD070130, 0x00020608);
	Xil_Out32(0xFD070180, 0x00800020);
	Xil_Out32(0xFD070184, 0x0200CB52);
	Xil_Out32(0xFD070190, 0x02838204);
	Xil_Out32(0xFD070194, 0x00020404);
	Xil_Out32(0xFD0701A4, 0x00010087);
	Xil_Out32(0xFD0701B0, 0x00000001);
	Xil_Out32(0xFD0701B4, 0x00000202);
	Xil_Out32(0xFD0701C0, 0x00000000);
	Xil_Out32(0xFD070200, 0x0000001F);
	Xil_Out32(0xFD070204, 0x00080808);
	Xil_Out32(0xFD070208, 0x00000000);
	Xil_Out32(0xFD07020C, 0x00000000);
	Xil_Out32(0xFD070210, 0x00000F0F);
	Xil_Out32(0xFD070214, 0x07070707);
	Xil_Out32(0xFD070218, 0x07070707);
	Xil_Out32(0xFD07021C, 0x00000F0F);
	Xil_Out32(0xFD070220, 0x00000000);
	Xil_Out32(0xFD070240, 0x06000604);
	Xil_Out32(0xFD070244, 0x00000001);
	Xil_Out32(0xFD070250, 0x01002001);
	Xil_Out32(0xFD070264, 0x08000040);
	Xil_Out32(0xFD07026C, 0x08000040);
	Xil_Out32(0xFD070294, 0x00000001);
	Xil_Out32(0xFD07030C, 0x00000000);
	Xil_Out32(0xFD070320, 0x00000000);
	Xil_Out32(0xFD070400, 0x00000001);
	Xil_Out32(0xFD070404, 0x0000600F);
	Xil_Out32(0xFD070408, 0x0000600F);
	Xil_Out32(0xFD070490, 0x00000001);
	Xil_Out32(0xFD070494, 0x0021000B);
	Xil_Out32(0xFD070498, 0x004F004F);
	Xil_Out32(0xFD0704B4, 0x0000600F);
	Xil_Out32(0xFD0704B8, 0x0000600F);
	Xil_Out32(0xFD070540, 0x00000001);
	Xil_Out32(0xFD070544, 0x02000B03);
	Xil_Out32(0xFD070548, 0x00010040);
	Xil_Out32(0xFD070564, 0x0000600F);
	Xil_Out32(0xFD070568, 0x0000600F);
	Xil_Out32(0xFD0705F0, 0x00000001);
	Xil_Out32(0xFD0705F4, 0x02000B03);
	Xil_Out32(0xFD0705F8, 0x00010040);
	Xil_Out32(0xFD070614, 0x0000600F);
	Xil_Out32(0xFD070618, 0x0000600F);
	Xil_Out32(0xFD0706A0, 0x00000001);
	Xil_Out32(0xFD0706A4, 0x00100003);
	Xil_Out32(0xFD0706A8, 0x002F004F);
	Xil_Out32(0xFD0706AC, 0x00100007);
	Xil_Out32(0xFD0706B0, 0x0000004F);
	Xil_Out32(0xFD0706C4, 0x0000600F);
	Xil_Out32(0xFD0706C8, 0x0000600F);
	Xil_Out32(0xFD070750, 0x00000001);
	Xil_Out32(0xFD070754, 0x00100003);
	Xil_Out32(0xFD070758, 0x002F004F);
	Xil_Out32(0xFD07075C, 0x00100007);
	Xil_Out32(0xFD070760, 0x0000004F);
	Xil_Out32(0xFD070774, 0x0000600F);
	Xil_Out32(0xFD070778, 0x0000600F);
	Xil_Out32(0xFD070800, 0x00000001);
	Xil_Out32(0xFD070804, 0x00100003);
	Xil_Out32(0xFD070808, 0x002F004F);
	Xil_Out32(0xFD07080C, 0x00100007);
	Xil_Out32(0xFD070810, 0x0000004F);
	Xil_Out32(0xFD070F04, 0x00000000);
	Xil_Out32(0xFD070F08, 0x00000000);
	Xil_Out32(0xFD070F0C, 0x00000010);
	Xil_Out32(0xFD070F10, 0x0000000F);

	Xil_In32(0xFD1A0108);
	Xil_Out32(0xFD1A0108, 0x00000000);
	Xil_In32(0xFD1A0108);

	Xil_Out32(((0xFD1A0000U) + 0x00000108U), 0x00000000);
	return 1;
}

static void init_peripheral(void)
{
	unsigned int regvalue;
	unsigned int tmp_regval;

	Xil_Out32(((0xFF5E0000U) + 0x00000230U), 0x00000000);
	Xil_Out32(((0xFF5E0000U) + 0x00000234U), 0x00000000);
	Xil_Out32(((0xFF5E0000U) + 0x00000238U), 0x00000000);

	regvalue = Xil_In32(((0xFF5E0000U) + 0x0000023CU));
	regvalue &= 0x7;
	Xil_Out32(((0xFF5E0000U) + 0x0000023CU), regvalue);

	Xil_Out32(((0xFD1A0000U) + 0x00000100U), 0x00000000);

	tmp_regval = Xil_In32(0xFD690040);
	tmp_regval &= ~0x00000001;
	Xil_Out32(0xFD690040, tmp_regval);

	tmp_regval = Xil_In32(0xFD690030);
	tmp_regval &= ~0x00000001;
	Xil_Out32(0xFD690030, tmp_regval);
}

int psu_init(void)
{
	int status = 1;

	status &= psu_mio_init_data();
	status &= psu_pll_init_data();
	status &= psu_clock_init_data();
	status &= psu_peripherals_init_data();
	init_peripheral();

	status &= init_ddrc();

	if (status == 0)
		return 1;
	return 0;
}
