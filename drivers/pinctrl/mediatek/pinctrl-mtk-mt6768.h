// SPDX-License-Identifier: GPL-2.0
/*
 * Copyright (C) 2018 MediaTek Inc.
 * Copyright (C) 2022 Jami Kettunen
 *
 * Author: Light Hsieh <light.hsieh@mediatek.com>
 *
 */

#ifndef __PINCTRL_MTK_MT6768_H
#define __PINCTRL_MTK_MT6768_H

#include "pinctrl-paris.h"

static const struct mtk_pin_desc mtk_pins_mt6768[] = {
	MTK_PIN(
		0, "GPIO0",
		MTK_EINT_FUNCTION(0, 0),
		DRV_GRP4,
		MTK_FUNCTION(0, "GPIO0"),
		MTK_FUNCTION(3, "I2S0_MCK"),
		MTK_FUNCTION(4, "I2S2_MCK"),
		MTK_FUNCTION(6, "TP_GPIO0_AO")
	),

	MTK_PIN(
		1, "GPIO1",
		MTK_EINT_FUNCTION(0, 1),
		DRV_GRP4,
		MTK_FUNCTION(0, "GPIO1"),
		MTK_FUNCTION(3, "I2S0_BCK"),
		MTK_FUNCTION(4, "I2S2_BCK"),
		MTK_FUNCTION(6, "TP_GPIO1_AO")
	),

	MTK_PIN(
		2, "GPIO2",
		MTK_EINT_FUNCTION(0, 2),
		DRV_GRP4,
		MTK_FUNCTION(0, "GPIO2"),
		MTK_FUNCTION(3, "I2S0_LRCK"),
		MTK_FUNCTION(4, "I2S2_LRCK"),
		MTK_FUNCTION(6, "TP_GPIO2_AO"),
		MTK_FUNCTION(7, "DBG_MON_A18")
	),

	MTK_PIN(
		3, "GPIO3",
		MTK_EINT_FUNCTION(0, 3),
		DRV_GRP4,
		MTK_FUNCTION(0, "GPIO3"),
		MTK_FUNCTION(3, "I2S0_DI"),
		MTK_FUNCTION(4, "I2S2_DI"),
		MTK_FUNCTION(6, "TP_GPIO3_AO"),
		MTK_FUNCTION(7, "DBG_MON_A19")
	),

	MTK_PIN(
		4, "GPIO4",
		MTK_EINT_FUNCTION(0, 4),
		DRV_GRP4,
		MTK_FUNCTION(0, "GPIO4"),
		MTK_FUNCTION(3, "I2S3_MCK"),
		MTK_FUNCTION(4, "I2S1_MCK"),
		MTK_FUNCTION(5, "SCL8"),
		MTK_FUNCTION(6, "TP_GPIO4_AO")
	),

	MTK_PIN(
		5, "GPIO5",
		MTK_EINT_FUNCTION(0, 5),
		DRV_GRP4,
		MTK_FUNCTION(0, "GPIO5"),
		MTK_FUNCTION(3, "I2S3_BCK"),
		MTK_FUNCTION(4, "I2S1_BCK"),
		MTK_FUNCTION(5, "SDA8"),
		MTK_FUNCTION(6, "TP_GPIO5_AO")
	),

	MTK_PIN(
		6, "GPIO6",
		MTK_EINT_FUNCTION(0, 6),
		DRV_GRP4,
		MTK_FUNCTION(0, "GPIO6"),
		MTK_FUNCTION(3, "I2S3_LRCK"),
		MTK_FUNCTION(4, "I2S1_LRCK"),
		MTK_FUNCTION(5, "IDDIG"),
		MTK_FUNCTION(6, "TP_GPIO6_AO")
	),

	MTK_PIN(
		7, "GPIO7",
		MTK_EINT_FUNCTION(0, 7),
		DRV_GRP4,
		MTK_FUNCTION(0, "GPIO7"),
		MTK_FUNCTION(3, "I2S3_DO"),
		MTK_FUNCTION(4, "I2S1_DO"),
		MTK_FUNCTION(5, "USB_DRVVBUS"),
		MTK_FUNCTION(6, "TP_GPIO7_AO")
	),

	MTK_PIN(
		8, "GPIO8",
		MTK_EINT_FUNCTION(0, 8),
		DRV_GRP4,
		MTK_FUNCTION(0, "GPIO8"),
		MTK_FUNCTION(2, "PWM0"),
		MTK_FUNCTION(6, "MD_INT0"),
		MTK_FUNCTION(7, "JTRSTN_SEL1")
	),

	MTK_PIN(
		9, "GPIO9",
		MTK_EINT_FUNCTION(0, 9),
		DRV_GRP4,
		MTK_FUNCTION(0, "GPIO9"),
		MTK_FUNCTION(2, "PWM1"),
		MTK_FUNCTION(4, "CONN_MCU_DBGACK_N"),
		MTK_FUNCTION(6, "AGPS_SYNC"),
		MTK_FUNCTION(7, "DBG_MON_A28")
	),

	MTK_PIN(
		10, "GPIO10",
		MTK_EINT_FUNCTION(0, 10),
		DRV_GRP4,
		MTK_FUNCTION(0, "GPIO10"),
		MTK_FUNCTION(2, "PWM2"),
		MTK_FUNCTION(4, "CONN_MCU_DBGI_N"),
		MTK_FUNCTION(5, "SCP_VREQ_VAO"),
		MTK_FUNCTION(6, "EXT_FRAME_SYNC"),
		MTK_FUNCTION(7, "DBG_MON_A29")
	),

	MTK_PIN(
		11, "GPIO11",
		MTK_EINT_FUNCTION(0, 11),
		DRV_GRP4,
		MTK_FUNCTION(0, "GPIO11"),
		MTK_FUNCTION(1, "SRCLKENAI0"),
		MTK_FUNCTION(3, "SDA_6306"),
		MTK_FUNCTION(4, "SPI1_B_MI"),
		MTK_FUNCTION(5, "MD_INT0"),
		MTK_FUNCTION(6, "CMVREF0"),
		MTK_FUNCTION(7, "DBG_MON_A27")
	),

	MTK_PIN(
		12, "GPIO12",
		MTK_EINT_FUNCTION(0, 12),
		DRV_GRP4,
		MTK_FUNCTION(0, "GPIO12"),
		MTK_FUNCTION(1, "PWM0"),
		MTK_FUNCTION(2, "CMVREF1"),
		MTK_FUNCTION(3, "SCL_6306"),
		MTK_FUNCTION(4, "SPI1_B_MO"),
		MTK_FUNCTION(5, "MD_INT0"),
		MTK_FUNCTION(6, "EXT_FRAME_SYNC"),
		MTK_FUNCTION(7, "DBG_MON_A12")
	),

	MTK_PIN(
		13, "GPIO13",
		MTK_EINT_FUNCTION(0, 13),
		DRV_GRP4,
		MTK_FUNCTION(0, "GPIO13"),
		MTK_FUNCTION(2, "SPI5_MI"),
		MTK_FUNCTION(3, "SCP_SPI0_MI"),
		MTK_FUNCTION(6, "I2S0_MCK"),
		MTK_FUNCTION(7, "DBG_MON_B15")
	),

	MTK_PIN(
		14, "GPIO14",
		MTK_EINT_FUNCTION(0, 14),
		DRV_GRP4,
		MTK_FUNCTION(0, "GPIO14"),
		MTK_FUNCTION(2, "SPI5_CSB"),
		MTK_FUNCTION(3, "SCP_SPI0_CS"),
		MTK_FUNCTION(6, "I2S0_BCK"),
		MTK_FUNCTION(7, "DBG_MON_B20")
	),

	MTK_PIN(
		15, "GPIO15",
		MTK_EINT_FUNCTION(0, 15),
		DRV_GRP4,
		MTK_FUNCTION(0, "GPIO15"),
		MTK_FUNCTION(2, "SPI5_MO"),
		MTK_FUNCTION(3, "SCP_SPI0_MO"),
		MTK_FUNCTION(4, "SCP_SDA0"),
		MTK_FUNCTION(6, "I2S0_LRCK"),
		MTK_FUNCTION(7, "DBG_MON_B13")
	),

	MTK_PIN(
		16, "GPIO16",
		MTK_EINT_FUNCTION(0, 16),
		DRV_GRP4,
		MTK_FUNCTION(0, "GPIO16"),
		MTK_FUNCTION(2, "SPI5_CLK"),
		MTK_FUNCTION(3, "SCP_SPI0_CK"),
		MTK_FUNCTION(4, "SCP_SCL0"),
		MTK_FUNCTION(6, "I2S3_MCK"),
		MTK_FUNCTION(7, "DBG_MON_B11")
	),

	MTK_PIN(
		17, "GPIO17",
		MTK_EINT_FUNCTION(0, 17),
		DRV_GRP4,
		MTK_FUNCTION(0, "GPIO17"),
		MTK_FUNCTION(2, "SPI4_MI"),
		MTK_FUNCTION(6, "I2S0_DI"),
		MTK_FUNCTION(7, "DBG_MON_B27")
	),

	MTK_PIN(
		18, "GPIO18",
		MTK_EINT_FUNCTION(0, 18),
		DRV_GRP4,
		MTK_FUNCTION(0, "GPIO18"),
		MTK_FUNCTION(2, "SPI4_CSB"),
		MTK_FUNCTION(5, "MD_INT2_C2K_UIM1_HOT_PLUG"),
		MTK_FUNCTION(6, "I2S3_BCK"),
		MTK_FUNCTION(7, "DBG_MON_B31")
	),

	MTK_PIN(
		19, "GPIO19",
		MTK_EINT_FUNCTION(0, 19),
		DRV_GRP4,
		MTK_FUNCTION(0, "GPIO19"),
		MTK_FUNCTION(2, "SPI4_MO"),
		MTK_FUNCTION(5, "MD_INT1_C2K_UIM0_HOT_PLUG"),
		MTK_FUNCTION(6, "I2S3_LRCK"),
		MTK_FUNCTION(7, "DBG_MON_B14")
	),

	MTK_PIN(
		20, "GPIO20",
		MTK_EINT_FUNCTION(0, 20),
		DRV_GRP4,
		MTK_FUNCTION(0, "GPIO20"),
		MTK_FUNCTION(2, "SPI4_CLK"),
		MTK_FUNCTION(5, "MD_INT0"),
		MTK_FUNCTION(6, "I2S3_DO"),
		MTK_FUNCTION(7, "DBG_MON_B19")
	),

	MTK_PIN(
		21, "GPIO21",
		MTK_EINT_FUNCTION(0, 21),
		DRV_GRP4,
		MTK_FUNCTION(0, "GPIO21"),
		MTK_FUNCTION(2, "SPI3_MI"),
		MTK_FUNCTION(4, "URXD1"),
		MTK_FUNCTION(5, "DAP_MD32_SWD"),
		MTK_FUNCTION(6, "I2S2_MCK"),
		MTK_FUNCTION(7, "DBG_MON_B25")
	),

	MTK_PIN(
		22, "GPIO22",
		MTK_EINT_FUNCTION(0, 22),
		DRV_GRP4,
		MTK_FUNCTION(0, "GPIO22"),
		MTK_FUNCTION(2, "SPI3_CSB"),
		MTK_FUNCTION(3, "SDA8"),
		MTK_FUNCTION(4, "UCTS1"),
		MTK_FUNCTION(5, "DAP_MD32_SWCK"),
		MTK_FUNCTION(6, "I2S2_BCK"),
		MTK_FUNCTION(7, "DBG_MON_B17")
	),

	MTK_PIN(
		23, "GPIO23",
		MTK_EINT_FUNCTION(0, 23),
		DRV_GRP4,
		MTK_FUNCTION(0, "GPIO23"),
		MTK_FUNCTION(2, "SPI3_MO"),
		MTK_FUNCTION(4, "UTXD1"),
		MTK_FUNCTION(5, "EXT_FRAME_SYNC"),
		MTK_FUNCTION(6, "I2S2_LRCK"),
		MTK_FUNCTION(7, "DBG_MON_B21")
	),

	MTK_PIN(
		24, "GPIO24",
		MTK_EINT_FUNCTION(0, 24),
		DRV_GRP4,
		MTK_FUNCTION(0, "GPIO24"),
		MTK_FUNCTION(1, "UDI_TCK"),
		MTK_FUNCTION(2, "SPI3_CLK"),
		MTK_FUNCTION(3, "SCL8"),
		MTK_FUNCTION(4, "URTS1"),
		MTK_FUNCTION(5, "IO_JTAG_TCK"),
		MTK_FUNCTION(6, "I2S1_MCK"),
		MTK_FUNCTION(7, "DBG_MON_B28")
	),

	MTK_PIN(
		25, "GPIO25",
		MTK_EINT_FUNCTION(0, 25),
		DRV_GRP4,
		MTK_FUNCTION(0, "GPIO25"),
		MTK_FUNCTION(1, "UDI_TMS"),
		MTK_FUNCTION(2, "SPI2_CSB"),
		MTK_FUNCTION(4, "KPCOL6"),
		MTK_FUNCTION(5, "IO_JTAG_TMS"),
		MTK_FUNCTION(6, "I2S2_DI"),
		MTK_FUNCTION(7, "DBG_MON_B22")
	),

	MTK_PIN(
		26, "GPIO26",
		MTK_EINT_FUNCTION(0, 26),
		DRV_GRP4,
		MTK_FUNCTION(0, "GPIO26"),
		MTK_FUNCTION(1, "UDI_TDI"),
		MTK_FUNCTION(2, "SPI2_MO"),
		MTK_FUNCTION(4, "KPCOL7"),
		MTK_FUNCTION(5, "IO_JTAG_TDI"),
		MTK_FUNCTION(6, "I2S1_BCK"),
		MTK_FUNCTION(7, "DBG_MON_B23")
	),

	MTK_PIN(
		27, "GPIO27",
		MTK_EINT_FUNCTION(0, 27),
		DRV_GRP4,
		MTK_FUNCTION(0, "GPIO27"),
		MTK_FUNCTION(1, "UDI_TDO"),
		MTK_FUNCTION(2, "SPI2_CLK"),
		MTK_FUNCTION(4, "KPROW6"),
		MTK_FUNCTION(5, "IO_JTAG_TDO"),
		MTK_FUNCTION(6, "I2S1_LRCK"),
		MTK_FUNCTION(7, "DBG_MON_B30")
	),

	MTK_PIN(
		28, "GPIO28",
		MTK_EINT_FUNCTION(0, 28),
		DRV_GRP4,
		MTK_FUNCTION(0, "GPIO28"),
		MTK_FUNCTION(1, "UDI_NTRST"),
		MTK_FUNCTION(2, "SPI2_MI"),
		MTK_FUNCTION(4, "KPROW7"),
		MTK_FUNCTION(5, "IO_JTAG_TRSTN"),
		MTK_FUNCTION(6, "I2S1_DO"),
		MTK_FUNCTION(7, "DBG_MON_B24")
	),

	MTK_PIN(
		29, "GPIO29",
		MTK_EINT_FUNCTION(0, 29),
		DRV_GRP4,
		MTK_FUNCTION(0, "GPIO29"),
		MTK_FUNCTION(1, "ANT_SEL0"),
		MTK_FUNCTION(2, "DVFSRC_EXT_REQ"),
		MTK_FUNCTION(3, "CMFLASH"),
		MTK_FUNCTION(7, "DBG_MON_B8")
	),

	MTK_PIN(
		30, "GPIO30",
		MTK_EINT_FUNCTION(0, 30),
		DRV_GRP4,
		MTK_FUNCTION(0, "GPIO30"),
		MTK_FUNCTION(1, "ANT_SEL1"),
		MTK_FUNCTION(2, "SRCLKENAI0"),
		MTK_FUNCTION(3, "CMVREF0"),
		MTK_FUNCTION(5, "IDDIG"),
		MTK_FUNCTION(6, "MD_URXD0"),
		MTK_FUNCTION(7, "DBG_MON_B10")
	),

	MTK_PIN(
		31, "GPIO31",
		MTK_EINT_FUNCTION(0, 31),
		DRV_GRP4,
		MTK_FUNCTION(0, "GPIO31"),
		MTK_FUNCTION(1, "ANT_SEL2"),
		MTK_FUNCTION(2, "SRCLKENAI1"),
		MTK_FUNCTION(3, "CMVREF1"),
		MTK_FUNCTION(5, "USB_DRVVBUS"),
		MTK_FUNCTION(6, "MD_UTXD0")
	),

	MTK_PIN(
		32, "GPIO32",
		MTK_EINT_FUNCTION(0, 32),
		DRV_GRP4,
		MTK_FUNCTION(0, "GPIO32"),
		MTK_FUNCTION(1, "SPI0_MI"),
		MTK_FUNCTION(3, "I2S3_BCK"),
		MTK_FUNCTION(4, "I2S1_BCK"),
		MTK_FUNCTION(6, "DFD_TDO"),
		MTK_FUNCTION(7, "JTDO_SEL1")
	),

	MTK_PIN(
		33, "GPIO33",
		MTK_EINT_FUNCTION(0, 33),
		DRV_GRP4,
		MTK_FUNCTION(0, "GPIO33"),
		MTK_FUNCTION(1, "SPI0_CSB"),
		MTK_FUNCTION(2, "SDA8"),
		MTK_FUNCTION(3, "I2S3_LRCK"),
		MTK_FUNCTION(4, "I2S1_LRCK"),
		MTK_FUNCTION(6, "DFD_TMS"),
		MTK_FUNCTION(7, "JTMS_SEL1")
	),

	MTK_PIN(
		34, "GPIO34",
		MTK_EINT_FUNCTION(0, 34),
		DRV_GRP4,
		MTK_FUNCTION(0, "GPIO34"),
		MTK_FUNCTION(1, "SPI0_MO"),
		MTK_FUNCTION(3, "I2S3_DO"),
		MTK_FUNCTION(4, "I2S1_DO"),
		MTK_FUNCTION(6, "DFD_TDI"),
		MTK_FUNCTION(7, "JTDI_SEL1")
	),

	MTK_PIN(
		35, "GPIO35",
		MTK_EINT_FUNCTION(0, 35),
		DRV_GRP4,
		MTK_FUNCTION(0, "GPIO35"),
		MTK_FUNCTION(1, "SPI0_CLK"),
		MTK_FUNCTION(2, "SCL8"),
		MTK_FUNCTION(3, "I2S3_MCK"),
		MTK_FUNCTION(4, "I2S1_MCK"),
		MTK_FUNCTION(6, "DFD_TCK_XI"),
		MTK_FUNCTION(7, "JTCK_SEL1")
	),

	MTK_PIN(
		36, "GPIO36",
		MTK_EINT_FUNCTION(0, 36),
		DRV_GRP4,
		MTK_FUNCTION(0, "GPIO36"),
		MTK_FUNCTION(1, "I2S1_BCK"),
		MTK_FUNCTION(2, "I2S3_BCK"),
		MTK_FUNCTION(6, "ANT_SEL3")
	),

	MTK_PIN(
		37, "GPIO37",
		MTK_EINT_FUNCTION(0, 37),
		DRV_GRP4,
		MTK_FUNCTION(0, "GPIO37"),
		MTK_FUNCTION(1, "I2S1_LRCK"),
		MTK_FUNCTION(2, "I2S3_LRCK"),
		MTK_FUNCTION(6, "ANT_SEL4")
	),

	MTK_PIN(
		38, "GPIO38",
		MTK_EINT_FUNCTION(0, 38),
		DRV_GRP4,
		MTK_FUNCTION(0, "GPIO38"),
		MTK_FUNCTION(1, "I2S1_DO"),
		MTK_FUNCTION(2, "I2S3_DO"),
		MTK_FUNCTION(3, "SCL8"),
		MTK_FUNCTION(6, "ANT_SEL5")
	),

	MTK_PIN(
		39, "GPIO39",
		MTK_EINT_FUNCTION(0, 39),
		DRV_GRP4,
		MTK_FUNCTION(0, "GPIO39"),
		MTK_FUNCTION(1, "I2S1_MCK"),
		MTK_FUNCTION(2, "I2S3_MCK"),
		MTK_FUNCTION(3, "SDA8"),
		MTK_FUNCTION(6, "ANT_SEL6")
	),

	MTK_PIN(
		40, "GPIO40",
		MTK_EINT_FUNCTION(0, 40),
		DRV_GRP4,
		MTK_FUNCTION(0, "GPIO40"),
		MTK_FUNCTION(1, "I2S2_DI"),
		MTK_FUNCTION(2, "I2S0_DI"),
		MTK_FUNCTION(6, "ANT_SEL7")
	),

	MTK_PIN(
		41, "GPIO41",
		MTK_EINT_FUNCTION(0, 41),
		DRV_GRP4,
		MTK_FUNCTION(0, "GPIO41"),
		MTK_FUNCTION(1, "IDDIG"),
		MTK_FUNCTION(3, "UCTS0")
	),

	MTK_PIN(
		42, "GPIO42",
		MTK_EINT_FUNCTION(0, 42),
		DRV_GRP4,
		MTK_FUNCTION(0, "GPIO42"),
		MTK_FUNCTION(1, "USB_DRVVBUS"),
		MTK_FUNCTION(3, "URTS0")
	),

	MTK_PIN(
		43, "GPIO43",
		MTK_EINT_FUNCTION(0, 43),
		DRV_GRP4,
		MTK_FUNCTION(0, "GPIO43"),
		MTK_FUNCTION(1, "DISP_PWM")
	),

	MTK_PIN(
		44, "GPIO44",
		MTK_EINT_FUNCTION(0, 44),
		DRV_GRP4,
		MTK_FUNCTION(0, "GPIO44"),
		MTK_FUNCTION(1, "DSI_TE")
	),

	MTK_PIN(
		45, "GPIO45",
		MTK_EINT_FUNCTION(0, 45),
		DRV_GRP4,
		MTK_FUNCTION(0, "GPIO45"),
		MTK_FUNCTION(1, "LCM_RST")
	),

	MTK_PIN(
		46, "GPIO46",
		MTK_EINT_FUNCTION(0, 46),
		DRV_GRP4,
		MTK_FUNCTION(0, "GPIO46"),
		MTK_FUNCTION(1, "MD_INT2_C2K_UIM1_HOT_PLUG"),
		MTK_FUNCTION(3, "SDA_6306"),
		MTK_FUNCTION(5, "TP_UCTS1_AO"),
		MTK_FUNCTION(6, "IDDIG")
	),

	MTK_PIN(
		47, "GPIO47",
		MTK_EINT_FUNCTION(0, 47),
		DRV_GRP4,
		MTK_FUNCTION(0, "GPIO47"),
		MTK_FUNCTION(1, "MD_INT1_C2K_UIM0_HOT_PLUG"),
		MTK_FUNCTION(3, "SCL_6306"),
		MTK_FUNCTION(5, "TP_URTS1_AO"),
		MTK_FUNCTION(6, "USB_DRVVBUS")
	),

	MTK_PIN(
		48, "GPIO48",
		MTK_EINT_FUNCTION(0, 48),
		DRV_GRP4,
		MTK_FUNCTION(0, "GPIO48"),
		MTK_FUNCTION(1, "SCL5")
	),

	MTK_PIN(
		49, "GPIO49",
		MTK_EINT_FUNCTION(0, 49),
		DRV_GRP4,
		MTK_FUNCTION(0, "GPIO49"),
		MTK_FUNCTION(1, "SDA5")
	),

	MTK_PIN(
		50, "GPIO50",
		MTK_EINT_FUNCTION(0, 50),
		DRV_GRP4,
		MTK_FUNCTION(0, "GPIO50"),
		MTK_FUNCTION(1, "SCL3"),
		MTK_FUNCTION(2, "SCP_SCL0"),
		MTK_FUNCTION(3, "SCP_SCL1"),
		MTK_FUNCTION(4, "SCL_6306"),
		MTK_FUNCTION(6, "PTA_TXD")
	),

	MTK_PIN(
		51, "GPIO51",
		MTK_EINT_FUNCTION(0, 51),
		DRV_GRP4,
		MTK_FUNCTION(0, "GPIO51"),
		MTK_FUNCTION(1, "SDA3"),
		MTK_FUNCTION(2, "SCP_SDA0"),
		MTK_FUNCTION(3, "SCP_SDA1"),
		MTK_FUNCTION(4, "SDA_6306"),
		MTK_FUNCTION(6, "PTA_RXD")
	),

	MTK_PIN(
		52, "GPIO52",
		MTK_EINT_FUNCTION(0, 52),
		DRV_GRP4,
		MTK_FUNCTION(0, "GPIO52"),
		MTK_FUNCTION(1, "BPI_BUS15")
	),

	MTK_PIN(
		53, "GPIO53",
		MTK_EINT_FUNCTION(0, 53),
		DRV_GRP4,
		MTK_FUNCTION(0, "GPIO53"),
		MTK_FUNCTION(1, "BPI_BUS13")
	),

	MTK_PIN(
		54, "GPIO54",
		MTK_EINT_FUNCTION(0, 54),
		DRV_GRP4,
		MTK_FUNCTION(0, "GPIO54"),
		MTK_FUNCTION(1, "BPI_BUS12")
	),

	MTK_PIN(
		55, "GPIO55",
		MTK_EINT_FUNCTION(0, 55),
		DRV_GRP4,
		MTK_FUNCTION(0, "GPIO55"),
		MTK_FUNCTION(1, "BPI_BUS8")
	),

	MTK_PIN(
		56, "GPIO56",
		MTK_EINT_FUNCTION(0, 56),
		DRV_GRP4,
		MTK_FUNCTION(0, "GPIO56"),
		MTK_FUNCTION(1, "BPI_BUS9"),
		MTK_FUNCTION(2, "SCL_6306")
	),

	MTK_PIN(
		57, "GPIO57",
		MTK_EINT_FUNCTION(0, 57),
		DRV_GRP4,
		MTK_FUNCTION(0, "GPIO57"),
		MTK_FUNCTION(1, "BPI_BUS10"),
		MTK_FUNCTION(2, "SDA_6306")
	),

	MTK_PIN(
		58, "GPIO58",
		MTK_EINT_FUNCTION(0, 58),
		DRV_GRP4,
		MTK_FUNCTION(0, "GPIO58"),
		MTK_FUNCTION(1, "RFIC0_BSI_D2"),
		MTK_FUNCTION(3, "PWM1"),
		MTK_FUNCTION(4, "CONN_MCU_TRST_B"),
		MTK_FUNCTION(5, "UCTS0")
	),

	MTK_PIN(
		59, "GPIO59",
		MTK_EINT_FUNCTION(0, 59),
		DRV_GRP4,
		MTK_FUNCTION(0, "GPIO59"),
		MTK_FUNCTION(1, "RFIC0_BSI_D1")
	),

	MTK_PIN(
		60, "GPIO60",
		MTK_EINT_FUNCTION(0, 60),
		DRV_GRP4,
		MTK_FUNCTION(0, "GPIO60"),
		MTK_FUNCTION(1, "RFIC0_BSI_D0")
	),

	MTK_PIN(
		61, "GPIO61",
		MTK_EINT_FUNCTION(0, 61),
		DRV_GRP4,
		MTK_FUNCTION(0, "GPIO61"),
		MTK_FUNCTION(1, "MIPI1_SDATA"),
		MTK_FUNCTION(7, "DBG_MON_A7")
	),

	MTK_PIN(
		62, "GPIO62",
		MTK_EINT_FUNCTION(0, 62),
		DRV_GRP4,
		MTK_FUNCTION(0, "GPIO62"),
		MTK_FUNCTION(1, "MIPI1_SCLK"),
		MTK_FUNCTION(7, "DBG_MON_A8")
	),

	MTK_PIN(
		63, "GPIO63",
		MTK_EINT_FUNCTION(0, 63),
		DRV_GRP4,
		MTK_FUNCTION(0, "GPIO63"),
		MTK_FUNCTION(1, "MIPI0_SDATA"),
		MTK_FUNCTION(7, "DBG_MON_A9")
	),

	MTK_PIN(
		64, "GPIO64",
		MTK_EINT_FUNCTION(0, 64),
		DRV_GRP4,
		MTK_FUNCTION(0, "GPIO64"),
		MTK_FUNCTION(1, "MIPI0_SCLK"),
		MTK_FUNCTION(7, "DBG_MON_A10")
	),

	MTK_PIN(
		65, "GPIO65",
		MTK_EINT_FUNCTION(0, 65),
		DRV_GRP4,
		MTK_FUNCTION(0, "GPIO65"),
		MTK_FUNCTION(1, "MIPI3_SDATA"),
		MTK_FUNCTION(2, "BPI_BUS16"),
		MTK_FUNCTION(7, "DBG_MON_A11")
	),

	MTK_PIN(
		66, "GPIO66",
		MTK_EINT_FUNCTION(0, 66),
		DRV_GRP4,
		MTK_FUNCTION(0, "GPIO66"),
		MTK_FUNCTION(1, "MIPI3_SCLK"),
		MTK_FUNCTION(2, "BPI_BUS17")
	),

	MTK_PIN(
		67, "GPIO67",
		MTK_EINT_FUNCTION(0, 67),
		DRV_GRP4,
		MTK_FUNCTION(0, "GPIO67"),
		MTK_FUNCTION(1, "MIPI2_SDATA")
	),

	MTK_PIN(
		68, "GPIO68",
		MTK_EINT_FUNCTION(0, 68),
		DRV_GRP4,
		MTK_FUNCTION(0, "GPIO68"),
		MTK_FUNCTION(1, "MIPI2_SCLK")
	),

	MTK_PIN(
		69, "GPIO69",
		MTK_EINT_FUNCTION(0, 69),
		DRV_GRP4,
		MTK_FUNCTION(0, "GPIO69"),
		MTK_FUNCTION(1, "BPI_BUS7")
	),

	MTK_PIN(
		70, "GPIO70",
		MTK_EINT_FUNCTION(0, 70),
		DRV_GRP4,
		MTK_FUNCTION(0, "GPIO70"),
		MTK_FUNCTION(1, "BPI_BUS6")
	),

	MTK_PIN(
		71, "GPIO71",
		MTK_EINT_FUNCTION(0, 71),
		DRV_GRP4,
		MTK_FUNCTION(0, "GPIO71"),
		MTK_FUNCTION(1, "BPI_BUS5")
	),

	MTK_PIN(
		72, "GPIO72",
		MTK_EINT_FUNCTION(0, 72),
		DRV_GRP4,
		MTK_FUNCTION(0, "GPIO72"),
		MTK_FUNCTION(1, "BPI_BUS4")
	),

	MTK_PIN(
		73, "GPIO73",
		MTK_EINT_FUNCTION(0, 73),
		DRV_GRP4,
		MTK_FUNCTION(0, "GPIO73"),
		MTK_FUNCTION(1, "BPI_BUS3")
	),

	MTK_PIN(
		74, "GPIO74",
		MTK_EINT_FUNCTION(0, 74),
		DRV_GRP4,
		MTK_FUNCTION(0, "GPIO74"),
		MTK_FUNCTION(1, "BPI_BUS2")
	),

	MTK_PIN(
		75, "GPIO75",
		MTK_EINT_FUNCTION(0, 75),
		DRV_GRP4,
		MTK_FUNCTION(0, "GPIO75"),
		MTK_FUNCTION(1, "BPI_BUS1")
	),

	MTK_PIN(
		76, "GPIO76",
		MTK_EINT_FUNCTION(0, 76),
		DRV_GRP4,
		MTK_FUNCTION(0, "GPIO76"),
		MTK_FUNCTION(1, "BPI_BUS0")
	),

	MTK_PIN(
		77, "GPIO77",
		MTK_EINT_FUNCTION(0, 77),
		DRV_GRP4,
		MTK_FUNCTION(0, "GPIO77"),
		MTK_FUNCTION(1, "BPI_BUS14")
	),

	MTK_PIN(
		78, "GPIO78",
		MTK_EINT_FUNCTION(0, 78),
		DRV_GRP4,
		MTK_FUNCTION(0, "GPIO78"),
		MTK_FUNCTION(1, "BPI_BUS11")
	),

	MTK_PIN(
		79, "GPIO79",
		MTK_EINT_FUNCTION(0, 79),
		DRV_GRP4,
		MTK_FUNCTION(0, "GPIO79"),
		MTK_FUNCTION(1, "BPI_PA_VM1"),
		MTK_FUNCTION(2, "MIPI4_SDATA")
	),

	MTK_PIN(
		80, "GPIO80",
		MTK_EINT_FUNCTION(0, 80),
		DRV_GRP4,
		MTK_FUNCTION(0, "GPIO80"),
		MTK_FUNCTION(1, "BPI_PA_VM0"),
		MTK_FUNCTION(2, "MIPI4_SCLK")
	),

	MTK_PIN(
		81, "GPIO81",
		MTK_EINT_FUNCTION(0, 81),
		DRV_GRP4,
		MTK_FUNCTION(0, "GPIO81"),
		MTK_FUNCTION(1, "SDA1"),
		MTK_FUNCTION(2, "SCP_SDA0"),
		MTK_FUNCTION(3, "SCP_SDA1")
	),

	MTK_PIN(
		82, "GPIO82",
		MTK_EINT_FUNCTION(0, 82),
		DRV_GRP4,
		MTK_FUNCTION(0, "GPIO82"),
		MTK_FUNCTION(1, "SDA0"),
		MTK_FUNCTION(4, "SPI1_B_CSB")
	),

	MTK_PIN(
		83, "GPIO83",
		MTK_EINT_FUNCTION(0, 83),
		DRV_GRP4,
		MTK_FUNCTION(0, "GPIO83"),
		MTK_FUNCTION(1, "SCL0"),
		MTK_FUNCTION(4, "SPI1_B_CLK")
	),

	MTK_PIN(
		84, "GPIO84",
		MTK_EINT_FUNCTION(0, 84),
		DRV_GRP4,
		MTK_FUNCTION(0, "GPIO84"),
		MTK_FUNCTION(1, "SCL1"),
		MTK_FUNCTION(2, "SCP_SCL0"),
		MTK_FUNCTION(3, "SCP_SCL1")
	),

	MTK_PIN(
		85, "GPIO85",
		MTK_EINT_FUNCTION(0, 85),
		DRV_GRP4,
		MTK_FUNCTION(0, "GPIO85"),
		MTK_FUNCTION(1, "SPI1_A_MI"),
		MTK_FUNCTION(2, "SCP_SPI1_MI"),
		MTK_FUNCTION(3, "IDDIG"),
		MTK_FUNCTION(7, "DBG_MON_B18")
	),

	MTK_PIN(
		86, "GPIO86",
		MTK_EINT_FUNCTION(0, 86),
		DRV_GRP4,
		MTK_FUNCTION(0, "GPIO86"),
		MTK_FUNCTION(1, "SPI1_A_CSB"),
		MTK_FUNCTION(2, "SCP_SPI1_CS"),
		MTK_FUNCTION(3, "USB_DRVVBUS"),
		MTK_FUNCTION(6, "PTA_TXD"),
		MTK_FUNCTION(7, "DBG_MON_B26")
	),

	MTK_PIN(
		87, "GPIO87",
		MTK_EINT_FUNCTION(0, 87),
		DRV_GRP4,
		MTK_FUNCTION(0, "GPIO87"),
		MTK_FUNCTION(1, "SPI1_A_MO"),
		MTK_FUNCTION(2, "SCP_SPI1_MO"),
		MTK_FUNCTION(3, "SCP_SDA0"),
		MTK_FUNCTION(7, "DBG_MON_B29")
	),

	MTK_PIN(
		88, "GPIO88",
		MTK_EINT_FUNCTION(0, 88),
		DRV_GRP4,
		MTK_FUNCTION(0, "GPIO88"),
		MTK_FUNCTION(1, "SPI1_A_CLK"),
		MTK_FUNCTION(2, "SCP_SPI1_CK"),
		MTK_FUNCTION(3, "SCP_SCL0"),
		MTK_FUNCTION(6, "PTA_RXD"),
		MTK_FUNCTION(7, "DBG_MON_A0")
	),

	MTK_PIN(
		89, "GPIO89",
		MTK_EINT_FUNCTION(0, 89),
		DRV_GRP4,
		MTK_FUNCTION(0, "GPIO89"),
		MTK_FUNCTION(1, "SCL6"),
		MTK_FUNCTION(4, "SCL_6306"),
		MTK_FUNCTION(6, "TP_UTXD1_AO")
	),

	MTK_PIN(
		90, "GPIO90",
		MTK_EINT_FUNCTION(0, 90),
		DRV_GRP4,
		MTK_FUNCTION(0, "GPIO90"),
		MTK_FUNCTION(1, "SDA6"),
		MTK_FUNCTION(4, "SDA_6306"),
		MTK_FUNCTION(6, "TP_URXD1_AO")
	),

	MTK_PIN(
		91, "GPIO91",
		MTK_EINT_FUNCTION(0, 91),
		DRV_GRP4,
		MTK_FUNCTION(0, "GPIO91"),
		MTK_FUNCTION(1, "KPROW1"),
		MTK_FUNCTION(2, "PWM1"),
		MTK_FUNCTION(7, "DBG_MON_A13")
	),

	MTK_PIN(
		92, "GPIO92",
		MTK_EINT_FUNCTION(0, 92),
		DRV_GRP4,
		MTK_FUNCTION(0, "GPIO92"),
		MTK_FUNCTION(1, "KPROW0"),
		MTK_FUNCTION(7, "DBG_MON_A14")
	),

	MTK_PIN(
		93, "GPIO93",
		MTK_EINT_FUNCTION(0, 93),
		DRV_GRP4,
		MTK_FUNCTION(0, "GPIO93"),
		MTK_FUNCTION(1, "KPCOL0"),
		MTK_FUNCTION(7, "DBG_MON_A15")
	),

	MTK_PIN(
		94, "GPIO94",
		MTK_EINT_FUNCTION(0, 94),
		DRV_GRP4,
		MTK_FUNCTION(0, "GPIO94"),
		MTK_FUNCTION(1, "KPCOL1"),
		MTK_FUNCTION(7, "DBG_MON_A16")
	),

	MTK_PIN(
		95, "GPIO95",
		MTK_EINT_FUNCTION(0, 95),
		DRV_GRP4,
		MTK_FUNCTION(0, "GPIO95"),
		MTK_FUNCTION(1, "URXD0"),
		MTK_FUNCTION(2, "UTXD0")
	),

	MTK_PIN(
		96, "GPIO96",
		MTK_EINT_FUNCTION(0, 96),
		DRV_GRP4,
		MTK_FUNCTION(0, "GPIO96"),
		MTK_FUNCTION(1, "UTXD0"),
		MTK_FUNCTION(2, "URXD0")
	),

	MTK_PIN(
		97, "GPIO97",
		MTK_EINT_FUNCTION(0, 97),
		DRV_GRP4,
		MTK_FUNCTION(0, "GPIO97"),
		MTK_FUNCTION(1, "UCTS0"),
		MTK_FUNCTION(2, "I2S2_MCK"),
		MTK_FUNCTION(3, "IDDIG"),
		MTK_FUNCTION(4, "CONN_MCU_TDO"),
		MTK_FUNCTION(5, "KPCOL5"),
		MTK_FUNCTION(6, "I2S0_MCK"),
		MTK_FUNCTION(7, "DBG_MON_A21")
	),

	MTK_PIN(
		98, "GPIO98",
		MTK_EINT_FUNCTION(0, 98),
		DRV_GRP4,
		MTK_FUNCTION(0, "GPIO98"),
		MTK_FUNCTION(1, "URTS0"),
		MTK_FUNCTION(2, "I2S2_BCK"),
		MTK_FUNCTION(3, "USB_DRVVBUS"),
		MTK_FUNCTION(4, "CONN_MCU_TMS"),
		MTK_FUNCTION(5, "KPCOL4"),
		MTK_FUNCTION(6, "I2S0_BCK"),
		MTK_FUNCTION(7, "DBG_MON_A22")
	),

	MTK_PIN(
		99, "GPIO99",
		MTK_EINT_FUNCTION(0, 99),
		DRV_GRP4,
		MTK_FUNCTION(0, "GPIO99"),
		MTK_FUNCTION(1, "CMMCLK0"),
		MTK_FUNCTION(7, "DBG_MON_A23")
	),

	MTK_PIN(
		100, "GPIO100",
		MTK_EINT_FUNCTION(0, 100),
		DRV_GRP4,
		MTK_FUNCTION(0, "GPIO100"),
		MTK_FUNCTION(1, "CMMCLK1"),
		MTK_FUNCTION(7, "DBG_MON_A24")
	),

	MTK_PIN(
		101, "GPIO101",
		MTK_EINT_FUNCTION(0, 101),
		DRV_GRP4,
		MTK_FUNCTION(0, "GPIO101"),
		MTK_FUNCTION(1, "CLKM2"),
		MTK_FUNCTION(2, "I2S2_LRCK"),
		MTK_FUNCTION(3, "CMVREF1"),
		MTK_FUNCTION(4, "CONN_MCU_TCK"),
		MTK_FUNCTION(5, "KPROW5"),
		MTK_FUNCTION(6, "I2S0_LRCK"),
		MTK_FUNCTION(7, "DBG_MON_A25")
	),

	MTK_PIN(
		102, "GPIO102",
		MTK_EINT_FUNCTION(0, 102),
		DRV_GRP4,
		MTK_FUNCTION(0, "GPIO102"),
		MTK_FUNCTION(1, "CLKM1"),
		MTK_FUNCTION(2, "I2S2_DI"),
		MTK_FUNCTION(3, "DVFSRC_EXT_REQ"),
		MTK_FUNCTION(4, "CONN_MCU_TDI"),
		MTK_FUNCTION(5, "KPROW4"),
		MTK_FUNCTION(6, "I2S0_DI"),
		MTK_FUNCTION(7, "DBG_MON_A26")
	),

	MTK_PIN(
		103, "GPIO103",
		MTK_EINT_FUNCTION(0, 103),
		DRV_GRP4,
		MTK_FUNCTION(0, "GPIO103"),
		MTK_FUNCTION(1, "SCL2"),
		MTK_FUNCTION(2, "TP_UTXD2_AO"),
		MTK_FUNCTION(3, "UTXD1"),
		MTK_FUNCTION(4, "MD_UTXD0"),
		MTK_FUNCTION(5, "AUXIF_CLK"),
		MTK_FUNCTION(6, "WIFI_TXD")
	),

	MTK_PIN(
		104, "GPIO104",
		MTK_EINT_FUNCTION(0, 104),
		DRV_GRP4,
		MTK_FUNCTION(0, "GPIO104"),
		MTK_FUNCTION(1, "SDA2"),
		MTK_FUNCTION(2, "TP_URXD2_AO"),
		MTK_FUNCTION(3, "URXD1"),
		MTK_FUNCTION(4, "MD_URXD0"),
		MTK_FUNCTION(5, "AUXIF_ST"),
		MTK_FUNCTION(6, "WIFI_RXD")
	),

	MTK_PIN(
		105, "GPIO105",
		MTK_EINT_FUNCTION(0, 105),
		DRV_GRP4,
		MTK_FUNCTION(0, "GPIO105"),
		MTK_FUNCTION(1, "SCL4"),
		MTK_FUNCTION(2, "TP_UTXD1_AO"),
		MTK_FUNCTION(3, "SSPM_UTXD_AO"),
		MTK_FUNCTION(4, "MD_UTXD1"),
		MTK_FUNCTION(5, "PTA_TXD"),
		MTK_FUNCTION(6, "CONN_UART0_TXD")
	),

	MTK_PIN(
		106, "GPIO106",
		MTK_EINT_FUNCTION(0, 106),
		DRV_GRP4,
		MTK_FUNCTION(0, "GPIO106"),
		MTK_FUNCTION(1, "SDA4"),
		MTK_FUNCTION(2, "TP_URXD1_AO"),
		MTK_FUNCTION(3, "SSPM_URXD_AO"),
		MTK_FUNCTION(4, "MD_URXD1"),
		MTK_FUNCTION(5, "PTA_RXD"),
		MTK_FUNCTION(6, "CONN_UART0_RXD")
	),

	MTK_PIN(
		107, "GPIO107",
		MTK_EINT_FUNCTION(0, 107),
		DRV_GRP4,
		MTK_FUNCTION(0, "GPIO107"),
		MTK_FUNCTION(2, "UCTS1"),
		MTK_FUNCTION(3, "CLKM0"),
		MTK_FUNCTION(4, "SRCLKENAI1"),
		MTK_FUNCTION(5, "KPCOL3"),
		MTK_FUNCTION(6, "PWM0"),
		MTK_FUNCTION(7, "DBG_MON_A30")
	),

	MTK_PIN(
		108, "GPIO108",
		MTK_EINT_FUNCTION(0, 108),
		DRV_GRP4,
		MTK_FUNCTION(0, "GPIO108"),
		MTK_FUNCTION(1, "CMMCLK2"),
		MTK_FUNCTION(3, "CLKM1"),
		MTK_FUNCTION(6, "PWM1"),
		MTK_FUNCTION(7, "DBG_MON_A31")
	),

	MTK_PIN(
		109, "GPIO109",
		MTK_EINT_FUNCTION(0, 109),
		DRV_GRP4,
		MTK_FUNCTION(0, "GPIO109"),
		MTK_FUNCTION(2, "URTS1"),
		MTK_FUNCTION(3, "CLKM2"),
		MTK_FUNCTION(4, "MD_INT0"),
		MTK_FUNCTION(5, "KPROW3"),
		MTK_FUNCTION(6, "PWM2"),
		MTK_FUNCTION(7, "DBG_MON_A32")
	),

	MTK_PIN(
		110, "GPIO110",
		MTK_EINT_FUNCTION(0, 110),
		DRV_GRP4,
		MTK_FUNCTION(0, "GPIO110"),
		MTK_FUNCTION(2, "URXD1"),
		MTK_FUNCTION(4, "USB_DRVVBUS"),
		MTK_FUNCTION(5, "KPCOL2"),
		MTK_FUNCTION(6, "SCL8")
	),

	MTK_PIN(
		111, "GPIO111",
		MTK_EINT_FUNCTION(0, 111),
		DRV_GRP4,
		MTK_FUNCTION(0, "GPIO111"),
		MTK_FUNCTION(1, "CMMCLK3"),
		MTK_FUNCTION(5, "MD_INT2_C2K_UIM1_HOT_PLUG"),
		MTK_FUNCTION(6, "SCP_VREQ_VAO")
	),

	MTK_PIN(
		112, "GPIO112",
		MTK_EINT_FUNCTION(0, 112),
		DRV_GRP4,
		MTK_FUNCTION(0, "GPIO112"),
		MTK_FUNCTION(2, "UTXD1"),
		MTK_FUNCTION(4, "IDDIG"),
		MTK_FUNCTION(5, "KPROW2"),
		MTK_FUNCTION(6, "SDA8")
	),

	MTK_PIN(
		113, "GPIO113",
		MTK_EINT_FUNCTION(NO_EINT_SUPPORT, NO_EINT_SUPPORT),
		DRV_GRP4,
		MTK_FUNCTION(0, "GPIO113"),
		MTK_FUNCTION(1, "CONN_TOP_CLK")
	),

	MTK_PIN(
		114, "GPIO114",
		MTK_EINT_FUNCTION(NO_EINT_SUPPORT, NO_EINT_SUPPORT),
		DRV_GRP4,
		MTK_FUNCTION(0, "GPIO114"),
		MTK_FUNCTION(1, "CONN_TOP_DATA")
	),

	MTK_PIN(
		115, "GPIO115",
		MTK_EINT_FUNCTION(NO_EINT_SUPPORT, NO_EINT_SUPPORT),
		DRV_GRP4,
		MTK_FUNCTION(0, "GPIO115"),
		MTK_FUNCTION(1, "CONN_BT_CLK")
	),

	MTK_PIN(
		116, "GPIO116",
		MTK_EINT_FUNCTION(NO_EINT_SUPPORT, NO_EINT_SUPPORT),
		DRV_GRP4,
		MTK_FUNCTION(0, "GPIO116"),
		MTK_FUNCTION(1, "CONN_BT_DATA")
	),

	MTK_PIN(
		117, "GPIO117",
		MTK_EINT_FUNCTION(NO_EINT_SUPPORT, NO_EINT_SUPPORT),
		DRV_GRP4,
		MTK_FUNCTION(0, "GPIO117"),
		MTK_FUNCTION(1, "CONN_WF_CTRL0")
	),

	MTK_PIN(
		118, "GPIO118",
		MTK_EINT_FUNCTION(NO_EINT_SUPPORT, NO_EINT_SUPPORT),
		DRV_GRP4,
		MTK_FUNCTION(0, "GPIO118"),
		MTK_FUNCTION(1, "CONN_WF_CTRL1")
	),

	MTK_PIN(
		119, "GPIO119",
		MTK_EINT_FUNCTION(NO_EINT_SUPPORT, NO_EINT_SUPPORT),
		DRV_GRP4,
		MTK_FUNCTION(0, "GPIO119"),
		MTK_FUNCTION(1, "CONN_WF_CTRL2")
	),

	MTK_PIN(
		120, "GPIO120",
		MTK_EINT_FUNCTION(NO_EINT_SUPPORT, NO_EINT_SUPPORT),
		DRV_GRP4,
		MTK_FUNCTION(0, "GPIO120"),
		MTK_FUNCTION(1, "CONN_WB_PTA")
	),

	MTK_PIN(
		121, "GPIO121",
		MTK_EINT_FUNCTION(NO_EINT_SUPPORT, NO_EINT_SUPPORT),
		DRV_GRP4,
		MTK_FUNCTION(0, "GPIO121"),
		MTK_FUNCTION(1, "CONN_HRST_B")
	),

	MTK_PIN(
		122, "GPIO122",
		MTK_EINT_FUNCTION(NO_EINT_SUPPORT, NO_EINT_SUPPORT),
		DRV_GRP4,
		MTK_FUNCTION(0, "GPIO122"),
		MTK_FUNCTION(1, "MSDC0_CMD")
	),

	MTK_PIN(
		123, "GPIO123",
		MTK_EINT_FUNCTION(NO_EINT_SUPPORT, NO_EINT_SUPPORT),
		DRV_GRP4,
		MTK_FUNCTION(0, "GPIO123"),
		MTK_FUNCTION(1, "MSDC0_DAT0")
	),

	MTK_PIN(
		124, "GPIO124",
		MTK_EINT_FUNCTION(NO_EINT_SUPPORT, NO_EINT_SUPPORT),
		DRV_GRP4,
		MTK_FUNCTION(0, "GPIO124"),
		MTK_FUNCTION(1, "MSDC0_CLK")
	),

	MTK_PIN(
		125, "GPIO125",
		MTK_EINT_FUNCTION(NO_EINT_SUPPORT, NO_EINT_SUPPORT),
		DRV_GRP4,
		MTK_FUNCTION(0, "GPIO125"),
		MTK_FUNCTION(1, "MSDC0_DAT2")
	),

	MTK_PIN(
		126, "GPIO126",
		MTK_EINT_FUNCTION(NO_EINT_SUPPORT, NO_EINT_SUPPORT),
		DRV_GRP4,
		MTK_FUNCTION(0, "GPIO126"),
		MTK_FUNCTION(1, "MSDC0_DAT4")
	),

	MTK_PIN(
		127, "GPIO127",
		MTK_EINT_FUNCTION(NO_EINT_SUPPORT, NO_EINT_SUPPORT),
		DRV_GRP4,
		MTK_FUNCTION(0, "GPIO127"),
		MTK_FUNCTION(1, "MSDC0_DAT6")
	),

	MTK_PIN(
		128, "GPIO128",
		MTK_EINT_FUNCTION(NO_EINT_SUPPORT, NO_EINT_SUPPORT),
		DRV_GRP4,
		MTK_FUNCTION(0, "GPIO128"),
		MTK_FUNCTION(1, "MSDC0_DAT1")
	),

	MTK_PIN(
		129, "GPIO129",
		MTK_EINT_FUNCTION(NO_EINT_SUPPORT, NO_EINT_SUPPORT),
		DRV_GRP4,
		MTK_FUNCTION(0, "GPIO129"),
		MTK_FUNCTION(1, "MSDC0_DAT5")
	),

	MTK_PIN(
		130, "GPIO130",
		MTK_EINT_FUNCTION(NO_EINT_SUPPORT, NO_EINT_SUPPORT),
		DRV_GRP4,
		MTK_FUNCTION(0, "GPIO130"),
		MTK_FUNCTION(1, "MSDC0_DAT7")
	),

	MTK_PIN(
		131, "GPIO131",
		MTK_EINT_FUNCTION(NO_EINT_SUPPORT, NO_EINT_SUPPORT),
		DRV_GRP4,
		MTK_FUNCTION(0, "GPIO131"),
		MTK_FUNCTION(1, "MSDC0_DSL")
	),

	MTK_PIN(
		132, "GPIO132",
		MTK_EINT_FUNCTION(NO_EINT_SUPPORT, NO_EINT_SUPPORT),
		DRV_GRP4,
		MTK_FUNCTION(0, "GPIO132"),
		MTK_FUNCTION(1, "MSDC0_DAT3")
	),

	MTK_PIN(
		133, "GPIO133",
		MTK_EINT_FUNCTION(NO_EINT_SUPPORT, NO_EINT_SUPPORT),
		DRV_GRP4,
		MTK_FUNCTION(0, "GPIO133"),
		MTK_FUNCTION(1, "MSDC0_RSTB")
	),

	MTK_PIN(
		134, "GPIO134",
		MTK_EINT_FUNCTION(NO_EINT_SUPPORT, NO_EINT_SUPPORT),
		DRV_GRP4,
		MTK_FUNCTION(0, "GPIO134"),
		MTK_FUNCTION(1, "RTC32K_CK")
	),

	MTK_PIN(
		135, "GPIO135",
		MTK_EINT_FUNCTION(NO_EINT_SUPPORT, NO_EINT_SUPPORT),
		DRV_GRP4,
		MTK_FUNCTION(0, "GPIO135"),
		MTK_FUNCTION(1, "WATCHDOG")
	),

	MTK_PIN(
		136, "GPIO136",
		MTK_EINT_FUNCTION(NO_EINT_SUPPORT, NO_EINT_SUPPORT),
		DRV_GRP4,
		MTK_FUNCTION(0, "GPIO136"),
		MTK_FUNCTION(1, "AUD_CLK_MOSI"),
		MTK_FUNCTION(2, "AUD_CLK_MISO"),
		MTK_FUNCTION(3, "I2S1_MCK")
	),

	MTK_PIN(
		137, "GPIO137",
		MTK_EINT_FUNCTION(NO_EINT_SUPPORT, NO_EINT_SUPPORT),
		DRV_GRP4,
		MTK_FUNCTION(0, "GPIO137"),
		MTK_FUNCTION(1, "AUD_SYNC_MOSI"),
		MTK_FUNCTION(2, "AUD_SYNC_MISO"),
		MTK_FUNCTION(3, "I2S1_BCK"),
		MTK_FUNCTION(7, "DBG_MON_B5")
	),

	MTK_PIN(
		138, "GPIO138",
		MTK_EINT_FUNCTION(NO_EINT_SUPPORT, NO_EINT_SUPPORT),
		DRV_GRP4,
		MTK_FUNCTION(0, "GPIO138"),
		MTK_FUNCTION(1, "AUD_DAT_MOSI0"),
		MTK_FUNCTION(2, "AUD_DAT_MISO0"),
		MTK_FUNCTION(3, "I2S1_LRCK")
	),

	MTK_PIN(
		139, "GPIO139",
		MTK_EINT_FUNCTION(NO_EINT_SUPPORT, NO_EINT_SUPPORT),
		DRV_GRP4,
		MTK_FUNCTION(0, "GPIO139"),
		MTK_FUNCTION(1, "AUD_DAT_MOSI1"),
		MTK_FUNCTION(2, "AUD_DAT_MISO1"),
		MTK_FUNCTION(3, "I2S1_DO"),
		MTK_FUNCTION(7, "DBG_MON_B6")
	),

	MTK_PIN(
		140, "GPIO140",
		MTK_EINT_FUNCTION(NO_EINT_SUPPORT, NO_EINT_SUPPORT),
		DRV_GRP4,
		MTK_FUNCTION(0, "GPIO140"),
		MTK_FUNCTION(1, "AUD_CLK_MISO"),
		MTK_FUNCTION(2, "AUD_CLK_MOSI"),
		MTK_FUNCTION(3, "I2S2_MCK")
	),

	MTK_PIN(
		141, "GPIO141",
		MTK_EINT_FUNCTION(NO_EINT_SUPPORT, NO_EINT_SUPPORT),
		DRV_GRP4,
		MTK_FUNCTION(0, "GPIO141"),
		MTK_FUNCTION(1, "AUD_SYNC_MISO"),
		MTK_FUNCTION(2, "AUD_SYNC_MOSI"),
		MTK_FUNCTION(3, "I2S2_BCK")
	),

	MTK_PIN(
		142, "GPIO142",
		MTK_EINT_FUNCTION(NO_EINT_SUPPORT, NO_EINT_SUPPORT),
		DRV_GRP4,
		MTK_FUNCTION(0, "GPIO142"),
		MTK_FUNCTION(1, "AUD_DAT_MISO0"),
		MTK_FUNCTION(2, "AUD_DAT_MOSI0"),
		MTK_FUNCTION(3, "I2S2_LRCK"),
		MTK_FUNCTION(4, "VOW_DAT_MISO")
	),

	MTK_PIN(
		143, "GPIO143",
		MTK_EINT_FUNCTION(NO_EINT_SUPPORT, NO_EINT_SUPPORT),
		DRV_GRP4,
		MTK_FUNCTION(0, "GPIO143"),
		MTK_FUNCTION(1, "AUD_DAT_MISO1"),
		MTK_FUNCTION(2, "AUD_DAT_MOSI1"),
		MTK_FUNCTION(3, "I2S2_DI"),
		MTK_FUNCTION(4, "VOW_CLK_MISO"),
		MTK_FUNCTION(7, "DBG_MON_B2")
	),

	MTK_PIN(
		144, "GPIO144",
		MTK_EINT_FUNCTION(NO_EINT_SUPPORT, NO_EINT_SUPPORT),
		DRV_GRP4,
		MTK_FUNCTION(0, "GPIO144"),
		MTK_FUNCTION(1, "PWRAP_SPI0_MI"),
		MTK_FUNCTION(2, "PWRAP_SPI0_MO")
	),

	MTK_PIN(
		145, "GPIO145",
		MTK_EINT_FUNCTION(NO_EINT_SUPPORT, NO_EINT_SUPPORT),
		DRV_GRP4,
		MTK_FUNCTION(0, "GPIO145"),
		MTK_FUNCTION(1, "PWRAP_SPI0_CSN")
	),

	MTK_PIN(
		146, "GPIO146",
		MTK_EINT_FUNCTION(NO_EINT_SUPPORT, NO_EINT_SUPPORT),
		DRV_GRP4,
		MTK_FUNCTION(0, "GPIO146"),
		MTK_FUNCTION(1, "PWRAP_SPI0_MO"),
		MTK_FUNCTION(2, "PWRAP_SPI0_MI")
	),

	MTK_PIN(
		147, "GPIO147",
		MTK_EINT_FUNCTION(NO_EINT_SUPPORT, NO_EINT_SUPPORT),
		DRV_GRP4,
		MTK_FUNCTION(0, "GPIO147"),
		MTK_FUNCTION(1, "PWRAP_SPI0_CK")
	),

	MTK_PIN(
		148, "GPIO148",
		MTK_EINT_FUNCTION(NO_EINT_SUPPORT, NO_EINT_SUPPORT),
		DRV_GRP4,
		MTK_FUNCTION(0, "GPIO148"),
		MTK_FUNCTION(1, "SRCLKENA0")
	),

	MTK_PIN(
		149, "GPIO149",
		MTK_EINT_FUNCTION(NO_EINT_SUPPORT, NO_EINT_SUPPORT),
		DRV_GRP4,
		MTK_FUNCTION(0, "GPIO149"),
		MTK_FUNCTION(1, "SRCLKENA1")
	),

	MTK_PIN(
		150, "GPIO150",
		MTK_EINT_FUNCTION(NO_EINT_SUPPORT, NO_EINT_SUPPORT),
		DRV_GRP4,
		MTK_FUNCTION(0, "GPIO150"),
		MTK_FUNCTION(1, "PWM0"),
		MTK_FUNCTION(2, "CMFLASH"),
		MTK_FUNCTION(3, "CLKM0"),
		MTK_FUNCTION(4, "URXD1"),
		MTK_FUNCTION(5, "MD_URXD1"),
		MTK_FUNCTION(6, "TP_URXD2_AO"),
		MTK_FUNCTION(7, "DBG_MON_B9")
	),

	MTK_PIN(
		151, "GPIO151",
		MTK_EINT_FUNCTION(NO_EINT_SUPPORT, NO_EINT_SUPPORT),
		DRV_GRP4,
		MTK_FUNCTION(0, "GPIO151"),
		MTK_FUNCTION(1, "PWM1"),
		MTK_FUNCTION(2, "CMVREF0"),
		MTK_FUNCTION(3, "CLKM1"),
		MTK_FUNCTION(4, "UTXD1"),
		MTK_FUNCTION(5, "MD_UTXD1"),
		MTK_FUNCTION(6, "TP_UTXD2_AO"),
		MTK_FUNCTION(7, "DBG_MON_B4")
	),

	MTK_PIN(
		152, "GPIO152",
		MTK_EINT_FUNCTION(NO_EINT_SUPPORT, NO_EINT_SUPPORT),
		DRV_GRP4,
		MTK_FUNCTION(0, "GPIO152"),
		MTK_FUNCTION(1, "PWM2"),
		MTK_FUNCTION(2, "CMVREF1"),
		MTK_FUNCTION(3, "CLKM2"),
		MTK_FUNCTION(4, "SSPM_URXD_AO"),
		MTK_FUNCTION(5, "MD_URXD0"),
		MTK_FUNCTION(6, "TP_URXD1_AO"),
		MTK_FUNCTION(7, "DBG_MON_B3")
	),

	MTK_PIN(
		153, "GPIO153",
		MTK_EINT_FUNCTION(NO_EINT_SUPPORT, NO_EINT_SUPPORT),
		DRV_GRP4,
		MTK_FUNCTION(0, "GPIO153"),
		MTK_FUNCTION(1, "PWM0"),
		MTK_FUNCTION(2, "CMVREF0"),
		MTK_FUNCTION(3, "CLKM3"),
		MTK_FUNCTION(4, "SSPM_UTXD_AO"),
		MTK_FUNCTION(5, "MD_UTXD0"),
		MTK_FUNCTION(6, "TP_UTXD1_AO"),
		MTK_FUNCTION(7, "DBG_MON_B0")
	),

	MTK_PIN(
		154, "GPIO154",
		MTK_EINT_FUNCTION(NO_EINT_SUPPORT, NO_EINT_SUPPORT),
		DRV_GRP4,
		MTK_FUNCTION(0, "GPIO154"),
		MTK_FUNCTION(1, "SCP_VREQ_VAO"),
		MTK_FUNCTION(2, "DVFSRC_EXT_REQ")
	),

	MTK_PIN(
		155, "GPIO155",
		MTK_EINT_FUNCTION(NO_EINT_SUPPORT, NO_EINT_SUPPORT),
		DRV_GRP4,
		MTK_FUNCTION(0, "GPIO155"),
		MTK_FUNCTION(1, "MD1_SIM2_SIO"),
		MTK_FUNCTION(2, "CCU_JTAG_TDO"),
		MTK_FUNCTION(3, "MD1_SIM1_SIO"),
		MTK_FUNCTION(5, "SCP_JTAG_TDO"),
		MTK_FUNCTION(6, "CONN_DSP_JDO"),
		MTK_FUNCTION(7, "DBG_MON_A1")
	),

	MTK_PIN(
		156, "GPIO156",
		MTK_EINT_FUNCTION(NO_EINT_SUPPORT, NO_EINT_SUPPORT),
		DRV_GRP4,
		MTK_FUNCTION(0, "GPIO156"),
		MTK_FUNCTION(1, "MD1_SIM2_SRST"),
		MTK_FUNCTION(2, "CCU_JTAG_TMS"),
		MTK_FUNCTION(3, "MD1_SIM1_SRST"),
		MTK_FUNCTION(4, "CONN_MCU_AICE_TMSC"),
		MTK_FUNCTION(5, "SCP_JTAG_TMS"),
		MTK_FUNCTION(6, "CONN_DSP_JMS"),
		MTK_FUNCTION(7, "DBG_MON_A2")
	),

	MTK_PIN(
		157, "GPIO157",
		MTK_EINT_FUNCTION(NO_EINT_SUPPORT, NO_EINT_SUPPORT),
		DRV_GRP4,
		MTK_FUNCTION(0, "GPIO157"),
		MTK_FUNCTION(1, "MD1_SIM2_SCLK"),
		MTK_FUNCTION(2, "CCU_JTAG_TDI"),
		MTK_FUNCTION(3, "MD1_SIM1_SCLK"),
		MTK_FUNCTION(5, "SCP_JTAG_TDI"),
		MTK_FUNCTION(6, "CONN_DSP_JDI"),
		MTK_FUNCTION(7, "DBG_MON_A3")
	),

	MTK_PIN(
		158, "GPIO158",
		MTK_EINT_FUNCTION(NO_EINT_SUPPORT, NO_EINT_SUPPORT),
		DRV_GRP4,
		MTK_FUNCTION(0, "GPIO158"),
		MTK_FUNCTION(1, "ANT_SEL3"),
		MTK_FUNCTION(3, "CLKM0"),
		MTK_FUNCTION(7, "DBG_MON_B7")
	),

	MTK_PIN(
		159, "GPIO159",
		MTK_EINT_FUNCTION(NO_EINT_SUPPORT, NO_EINT_SUPPORT),
		DRV_GRP4,
		MTK_FUNCTION(0, "GPIO159"),
		MTK_FUNCTION(1, "ANT_SEL4"),
		MTK_FUNCTION(3, "CLKM1")
	),

	MTK_PIN(
		160, "GPIO160",
		MTK_EINT_FUNCTION(NO_EINT_SUPPORT, NO_EINT_SUPPORT),
		DRV_GRP4,
		MTK_FUNCTION(0, "GPIO160"),
		MTK_FUNCTION(1, "ANT_SEL5"),
		MTK_FUNCTION(3, "CLKM2"),
		MTK_FUNCTION(5, "WIFI_RXD"),
		MTK_FUNCTION(7, "DBG_MON_B1")
	),

	MTK_PIN(
		161, "GPIO161",
		MTK_EINT_FUNCTION(NO_EINT_SUPPORT, NO_EINT_SUPPORT),
		DRV_GRP4,
		MTK_FUNCTION(0, "GPIO161"),
		MTK_FUNCTION(1, "MSDC1_DAT3"),
		MTK_FUNCTION(3, "CONN_MCU_AICE_TMSC"),
		MTK_FUNCTION(4, "CONN_DSP_JINTP"),
		MTK_FUNCTION(5, "SSPM_JTAG_TRSTN")
	),

	MTK_PIN(
		162, "GPIO162",
		MTK_EINT_FUNCTION(NO_EINT_SUPPORT, NO_EINT_SUPPORT),
		DRV_GRP4,
		MTK_FUNCTION(0, "GPIO162"),
		MTK_FUNCTION(1, "MSDC1_DAT2"),
		MTK_FUNCTION(2, "IO_JTAG_TRSTN"),
		MTK_FUNCTION(3, "UDI_NTRST"),
		MTK_FUNCTION(5, "CONN_MCU_AICE_TCKC")
	),

	MTK_PIN(
		163, "GPIO163",
		MTK_EINT_FUNCTION(NO_EINT_SUPPORT, NO_EINT_SUPPORT),
		DRV_GRP4,
		MTK_FUNCTION(0, "GPIO163"),
		MTK_FUNCTION(1, "MSDC1_DAT1"),
		MTK_FUNCTION(2, "IO_JTAG_TDO"),
		MTK_FUNCTION(3, "UDI_TDO"),
		MTK_FUNCTION(4, "CONN_DSP_JDO"),
		MTK_FUNCTION(5, "SSPM_JTAG_TDO")
	),

	MTK_PIN(
		164, "GPIO164",
		MTK_EINT_FUNCTION(NO_EINT_SUPPORT, NO_EINT_SUPPORT),
		DRV_GRP4,
		MTK_FUNCTION(0, "GPIO164"),
		MTK_FUNCTION(1, "MSDC1_DAT0"),
		MTK_FUNCTION(2, "IO_JTAG_TDI"),
		MTK_FUNCTION(3, "UDI_TDI"),
		MTK_FUNCTION(4, "CONN_DSP_JDI"),
		MTK_FUNCTION(5, "SSPM_JTAG_TDI")
	),

	MTK_PIN(
		165, "GPIO165",
		MTK_EINT_FUNCTION(NO_EINT_SUPPORT, NO_EINT_SUPPORT),
		DRV_GRP4,
		MTK_FUNCTION(0, "GPIO165"),
		MTK_FUNCTION(1, "PWM1"),
		MTK_FUNCTION(4, "SSPM_URXD_AO"),
		MTK_FUNCTION(5, "MD_URXD1"),
		MTK_FUNCTION(6, "TP_URXD1_AO"),
		MTK_FUNCTION(7, "DBG_MON_B16")
	),

	MTK_PIN(
		166, "GPIO166",
		MTK_EINT_FUNCTION(NO_EINT_SUPPORT, NO_EINT_SUPPORT),
		DRV_GRP4,
		MTK_FUNCTION(0, "GPIO166"),
		MTK_FUNCTION(1, "ANT_SEL6"),
		MTK_FUNCTION(3, "CLKM3"),
		MTK_FUNCTION(5, "WIFI_TXD"),
		MTK_FUNCTION(7, "DBG_MON_B12")
	),

	MTK_PIN(
		167, "GPIO167",
		MTK_EINT_FUNCTION(NO_EINT_SUPPORT, NO_EINT_SUPPORT),
		DRV_GRP4,
		MTK_FUNCTION(0, "GPIO167"),
		MTK_FUNCTION(1, "RFIC0_BSI_EN")
	),

	MTK_PIN(
		168, "GPIO168",
		MTK_EINT_FUNCTION(NO_EINT_SUPPORT, NO_EINT_SUPPORT),
		DRV_GRP4,
		MTK_FUNCTION(0, "GPIO168"),
		MTK_FUNCTION(1, "RFIC0_BSI_CK")
	),

	MTK_PIN(
		169, "GPIO169",
		MTK_EINT_FUNCTION(NO_EINT_SUPPORT, NO_EINT_SUPPORT),
		DRV_GRP4,
		MTK_FUNCTION(0, "GPIO169"),
		MTK_FUNCTION(1, "PWM2"),
		MTK_FUNCTION(4, "SSPM_UTXD_AO"),
		MTK_FUNCTION(5, "MD_UTXD1"),
		MTK_FUNCTION(6, "TP_UTXD1_AO")
	),

	MTK_PIN(
		170, "GPIO170",
		MTK_EINT_FUNCTION(NO_EINT_SUPPORT, NO_EINT_SUPPORT),
		DRV_GRP4,
		MTK_FUNCTION(0, "GPIO170"),
		MTK_FUNCTION(1, "MSDC1_CMD"),
		MTK_FUNCTION(2, "IO_JTAG_TMS"),
		MTK_FUNCTION(3, "UDI_TMS"),
		MTK_FUNCTION(4, "CONN_DSP_JMS"),
		MTK_FUNCTION(5, "SSPM_JTAG_TMS")
	),

	MTK_PIN(
		171, "GPIO171",
		MTK_EINT_FUNCTION(NO_EINT_SUPPORT, NO_EINT_SUPPORT),
		DRV_GRP4,
		MTK_FUNCTION(0, "GPIO171"),
		MTK_FUNCTION(1, "MSDC1_CLK"),
		MTK_FUNCTION(2, "IO_JTAG_TCK"),
		MTK_FUNCTION(3, "UDI_TCK"),
		MTK_FUNCTION(4, "CONN_DSP_JCK"),
		MTK_FUNCTION(5, "SSPM_JTAG_TCK")
	),

	MTK_PIN(
		172, "GPIO172",
		MTK_EINT_FUNCTION(NO_EINT_SUPPORT, NO_EINT_SUPPORT),
		DRV_GRP4,
		MTK_FUNCTION(0, "GPIO172"),
		MTK_FUNCTION(1, "MD1_SIM1_SCLK"),
		MTK_FUNCTION(3, "MD1_SIM2_SCLK"),
		MTK_FUNCTION(7, "DBG_MON_A4")
	),

	MTK_PIN(
		173, "GPIO173",
		MTK_EINT_FUNCTION(NO_EINT_SUPPORT, NO_EINT_SUPPORT),
		DRV_GRP4,
		MTK_FUNCTION(0, "GPIO173"),
		MTK_FUNCTION(1, "MD1_SIM1_SRST"),
		MTK_FUNCTION(2, "CCU_JTAG_TCK"),
		MTK_FUNCTION(3, "MD1_SIM2_SRST"),
		MTK_FUNCTION(4, "CONN_MCU_AICE_TCKC"),
		MTK_FUNCTION(5, "SCP_JTAG_TCK"),
		MTK_FUNCTION(6, "CONN_DSP_JCK"),
		MTK_FUNCTION(7, "DBG_MON_A5")
	),

	MTK_PIN(
		174, "GPIO174",
		MTK_EINT_FUNCTION(NO_EINT_SUPPORT, NO_EINT_SUPPORT),
		DRV_GRP4,
		MTK_FUNCTION(0, "GPIO174"),
		MTK_FUNCTION(1, "MD1_SIM1_SIO"),
		MTK_FUNCTION(2, "CCU_JTAG_TRST"),
		MTK_FUNCTION(3, "MD1_SIM2_SIO"),
		MTK_FUNCTION(5, "SCP_JTAG_TRSTN"),
		MTK_FUNCTION(6, "CONN_DSP_JINTP"),
		MTK_FUNCTION(7, "DBG_MON_A6")
	),

	MTK_PIN(
		175, "GPIO175",
		MTK_EINT_FUNCTION(NO_EINT_SUPPORT, NO_EINT_SUPPORT),
		DRV_GRP4,
		MTK_FUNCTION(0, "GPIO175"),
		MTK_FUNCTION(1, "SCL7"),
		MTK_FUNCTION(2, "SCP_SCL0"),
		MTK_FUNCTION(3, "SCP_SCL1"),
		MTK_FUNCTION(4, "SCL_6306")
	),

	MTK_PIN(
		176, "GPIO176",
		MTK_EINT_FUNCTION(NO_EINT_SUPPORT, NO_EINT_SUPPORT),
		DRV_GRP4,
		MTK_FUNCTION(0, "GPIO176"),
		MTK_FUNCTION(1, "SDA7"),
		MTK_FUNCTION(2, "SCP_SDA0"),
		MTK_FUNCTION(3, "SCP_SDA1"),
		MTK_FUNCTION(4, "SDA_6306")
	),

	MTK_PIN(
		177, "GPIO177",
		MTK_EINT_FUNCTION(NO_EINT_SUPPORT, NO_EINT_SUPPORT),
		DRV_GRP4,
		MTK_FUNCTION(0, "GPIO177"),
		MTK_FUNCTION(1, "AP_GOOD"),
		MTK_FUNCTION(5, "URTS0")
	),

	MTK_PIN(
		178, "GPIO178",
		MTK_EINT_FUNCTION(NO_EINT_SUPPORT, NO_EINT_SUPPORT),
		DRV_GRP4,
		MTK_FUNCTION(0, "GPIO178"),
		MTK_FUNCTION(1, "ANT_SEL7"),
		MTK_FUNCTION(3, "CMVREF0"),
		MTK_FUNCTION(5, "CONN_UART0_RXD"),
		MTK_FUNCTION(6, "TP_UCTS2_AO"),
		MTK_FUNCTION(7, "DBG_MON_A17")
	),

	MTK_PIN(
		179, "GPIO179",
		MTK_EINT_FUNCTION(NO_EINT_SUPPORT, NO_EINT_SUPPORT),
		DRV_GRP4,
		MTK_FUNCTION(0, "GPIO179"),
		MTK_FUNCTION(2, "AGPS_SYNC"),
		MTK_FUNCTION(3, "CMVREF1"),
		MTK_FUNCTION(5, "CONN_UART0_TXD"),
		MTK_FUNCTION(6, "TP_URTS2_AO"),
		MTK_FUNCTION(7, "DBG_MON_A20")
	),

	MTK_PIN(
		180, "GPIO180",
		MTK_EINT_FUNCTION(0, 144),
		DRV_GRP4,
		MTK_FUNCTION(0, NULL)
	),

	MTK_PIN(
		181, "GPIO181",
		MTK_EINT_FUNCTION(0, 145),
		DRV_GRP4,
		MTK_FUNCTION(0, NULL)
	),

	MTK_PIN(
		182, "GPIO182",
		MTK_EINT_FUNCTION(0, 147),
		DRV_GRP4,
		MTK_FUNCTION(0, NULL)
	),

	MTK_PIN(
		183, "GPIO183",
		MTK_EINT_FUNCTION(0, 148),
		DRV_GRP4,
		MTK_FUNCTION(0, NULL)
	),

	MTK_PIN(
		184, "GPIO184",
		MTK_EINT_FUNCTION(0, 149),
		DRV_GRP4,
		MTK_FUNCTION(0, NULL)
	),

	MTK_PIN(
		185, "GPIO185",
		MTK_EINT_FUNCTION(0, 150),
		DRV_GRP4,
		MTK_FUNCTION(0, NULL)
	),

	MTK_PIN(
		186, "GPIO186",
		MTK_EINT_FUNCTION(0, 151),
		DRV_GRP4,
		MTK_FUNCTION(0, NULL)
	)
};

#endif /* __PINCTRL_MTK_MT6768_H */
