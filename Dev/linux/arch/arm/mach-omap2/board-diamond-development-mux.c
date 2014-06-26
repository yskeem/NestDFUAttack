/*
 *    Copyright (c) 2010-2011 Nest, Inc.
 *
 *      Author: Grant Erickson <grant@nestlabs.com>
 *
 *    This program is free software; you can redistribute it and/or
 *    modify it under the terms of the GNU General Public License
 *    version 2 as published by the Free Software Foundation.
 *
 *    Description:
 *      This file implements the pin multiplexer settings for the Nest
 *      Diamond development boards.
 *
 */

static struct omap_board_mux diamond_development_mux[] __initdata = {
	OMAP3_MUX(SYS_NIRQ,			OMAP_MUX_MODE0 | OMAP_PIN_INPUT_PULLUP   | OMAP_PIN_OFF_INPUT_PULLUP | OMAP_PIN_OFF_WAKEUPENABLE),

	// SDRC
	OMAP3_MUX(SDRC_A13,			OMAP_MUX_MODE7 | OMAP_PIN_INPUT_PULLDOWN | OMAP_PIN_OFF_INPUT_PULLDOWN ), // Unused
	OMAP3_MUX(SDRC_A14,			OMAP_MUX_MODE7 | OMAP_PIN_INPUT_PULLDOWN | OMAP_PIN_OFF_INPUT_PULLDOWN ), // Unused
	OMAP3_MUX(SDRC_D31,			OMAP_MUX_MODE7 | OMAP_PIN_INPUT_PULLDOWN | OMAP_PIN_OFF_INPUT_PULLDOWN ), // Unused
	OMAP3_MUX(SDRC_D31,			OMAP_MUX_MODE7 | OMAP_PIN_INPUT_PULLDOWN | OMAP_PIN_OFF_INPUT_PULLDOWN ), // Unused
	OMAP3_MUX(SDRC_D30,			OMAP_MUX_MODE7 | OMAP_PIN_INPUT_PULLDOWN | OMAP_PIN_OFF_INPUT_PULLDOWN ), // Unused
	OMAP3_MUX(SDRC_D29,			OMAP_MUX_MODE7 | OMAP_PIN_INPUT_PULLDOWN | OMAP_PIN_OFF_INPUT_PULLDOWN ), // Unused
	OMAP3_MUX(SDRC_D28,			OMAP_MUX_MODE7 | OMAP_PIN_INPUT_PULLDOWN | OMAP_PIN_OFF_INPUT_PULLDOWN ), // Unused
	OMAP3_MUX(SDRC_D27,			OMAP_MUX_MODE7 | OMAP_PIN_INPUT_PULLDOWN | OMAP_PIN_OFF_INPUT_PULLDOWN ), // Unused
	OMAP3_MUX(SDRC_D26,			OMAP_MUX_MODE7 | OMAP_PIN_INPUT_PULLDOWN | OMAP_PIN_OFF_INPUT_PULLDOWN ), // Unused
	OMAP3_MUX(SDRC_D25,			OMAP_MUX_MODE7 | OMAP_PIN_INPUT_PULLDOWN | OMAP_PIN_OFF_INPUT_PULLDOWN ), // Unused
	OMAP3_MUX(SDRC_D24,			OMAP_MUX_MODE7 | OMAP_PIN_INPUT_PULLDOWN | OMAP_PIN_OFF_INPUT_PULLDOWN ), // Unused
	OMAP3_MUX(SDRC_D23,			OMAP_MUX_MODE7 | OMAP_PIN_INPUT_PULLDOWN | OMAP_PIN_OFF_INPUT_PULLDOWN ), // Unused
	OMAP3_MUX(SDRC_D22,			OMAP_MUX_MODE7 | OMAP_PIN_INPUT_PULLDOWN | OMAP_PIN_OFF_INPUT_PULLDOWN ), // Unused
	OMAP3_MUX(SDRC_D21,			OMAP_MUX_MODE7 | OMAP_PIN_INPUT_PULLDOWN | OMAP_PIN_OFF_INPUT_PULLDOWN ), // Unused
	OMAP3_MUX(SDRC_D20,			OMAP_MUX_MODE7 | OMAP_PIN_INPUT_PULLDOWN | OMAP_PIN_OFF_INPUT_PULLDOWN ), // Unused
	OMAP3_MUX(SDRC_D19,			OMAP_MUX_MODE7 | OMAP_PIN_INPUT_PULLDOWN | OMAP_PIN_OFF_INPUT_PULLDOWN ), // Unused
	OMAP3_MUX(SDRC_D18,			OMAP_MUX_MODE7 | OMAP_PIN_INPUT_PULLDOWN | OMAP_PIN_OFF_INPUT_PULLDOWN ), // Unused
	OMAP3_MUX(SDRC_D17,			OMAP_MUX_MODE7 | OMAP_PIN_INPUT_PULLDOWN | OMAP_PIN_OFF_INPUT_PULLDOWN ), // Unused
	OMAP3_MUX(SDRC_D16,			OMAP_MUX_MODE7 | OMAP_PIN_INPUT_PULLDOWN | OMAP_PIN_OFF_INPUT_PULLDOWN ), // Unused
	OMAP3_MUX(SDRC_CKE1,		OMAP_MUX_MODE7 | OMAP_PIN_INPUT_PULLDOWN | OMAP_PIN_OFF_INPUT_PULLDOWN ), // Unused
	OMAP3_MUX(SDRC_NCS1,		OMAP_MUX_MODE7 | OMAP_PIN_INPUT_PULLDOWN | OMAP_PIN_OFF_INPUT_PULLDOWN ), // Unused
	OMAP3_MUX(SDRC_DM2,			OMAP_MUX_MODE7 | OMAP_PIN_INPUT_PULLDOWN | OMAP_PIN_OFF_INPUT_PULLDOWN ), // Unused
	OMAP3_MUX(SDRC_DM3,			OMAP_MUX_MODE7 | OMAP_PIN_INPUT_PULLDOWN | OMAP_PIN_OFF_INPUT_PULLDOWN ), // Unused
	OMAP3_MUX(SDRC_DQS2,		OMAP_MUX_MODE7 | OMAP_PIN_INPUT_PULLDOWN | OMAP_PIN_OFF_INPUT_PULLDOWN ), // Unused
	OMAP3_MUX(SDRC_DQS3,		OMAP_MUX_MODE7 | OMAP_PIN_INPUT_PULLDOWN | OMAP_PIN_OFF_INPUT_PULLDOWN ), // Unused

	// DSS
	OMAP3_MUX(DSS_ACBIAS,		OMAP_MUX_MODE0							 | OMAP_PIN_OFF_INPUT_PULLDOWN ), // DSS_ACBIAS
	OMAP3_MUX(DSS_PCLK,			OMAP_MUX_MODE0 							 | OMAP_PIN_OFF_INPUT_PULLDOWN ), // DSS_PCLK
	OMAP3_MUX(DSS_HSYNC,		OMAP_MUX_MODE0 							 | OMAP_PIN_OFF_INPUT_PULLDOWN ), // DSS_HSYNC
	OMAP3_MUX(DSS_VSYNC,		OMAP_MUX_MODE0 							 | OMAP_PIN_OFF_INPUT_PULLDOWN ), // DSS_VSYNC
	OMAP3_MUX(DSS_DATA0,		OMAP_MUX_MODE0 							 | OMAP_PIN_OFF_INPUT_PULLDOWN ), // DSS_DATA0
	OMAP3_MUX(DSS_DATA1,		OMAP_MUX_MODE0 							 | OMAP_PIN_OFF_INPUT_PULLDOWN ), // DSS_DATA1
	OMAP3_MUX(DSS_DATA2,		OMAP_MUX_MODE0 							 | OMAP_PIN_OFF_INPUT_PULLDOWN ), // DSS_DATA2
	OMAP3_MUX(DSS_DATA3,		OMAP_MUX_MODE0 							 | OMAP_PIN_OFF_INPUT_PULLDOWN ), // DSS_DATA3
	OMAP3_MUX(DSS_DATA4,		OMAP_MUX_MODE0 							 | OMAP_PIN_OFF_INPUT_PULLDOWN ), // DSS_DATA4
	OMAP3_MUX(DSS_DATA5,		OMAP_MUX_MODE0 							 | OMAP_PIN_OFF_INPUT_PULLDOWN ), // DSS_DATA5
	OMAP3_MUX(DSS_DATA6,		OMAP_MUX_MODE0 							 | OMAP_PIN_OFF_INPUT_PULLDOWN ), // DSS_DATA6
	OMAP3_MUX(DSS_DATA7,		OMAP_MUX_MODE0 							 | OMAP_PIN_OFF_INPUT_PULLDOWN ), // DSS_DATA7
	OMAP3_MUX(DSS_DATA8,		OMAP_MUX_MODE0							 | OMAP_PIN_OFF_INPUT_PULLDOWN ), // DSS_DATA8
	OMAP3_MUX(DSS_DATA9,		OMAP_MUX_MODE0 							 | OMAP_PIN_OFF_INPUT_PULLDOWN ), // DSS_DATA9
	OMAP3_MUX(DSS_DATA10,		OMAP_MUX_MODE0 							 | OMAP_PIN_OFF_INPUT_PULLDOWN ), // DSS_DATA10
	OMAP3_MUX(DSS_DATA11,		OMAP_MUX_MODE0 							 | OMAP_PIN_OFF_INPUT_PULLDOWN ), // DSS_DATA11
	OMAP3_MUX(DSS_DATA12,		OMAP_MUX_MODE0 							 | OMAP_PIN_OFF_INPUT_PULLDOWN ), // DSS_DATA12
	OMAP3_MUX(DSS_DATA13,		OMAP_MUX_MODE0 							 | OMAP_PIN_OFF_INPUT_PULLDOWN ), // DSS_DATA13
	OMAP3_MUX(DSS_DATA14,		OMAP_MUX_MODE0 							 | OMAP_PIN_OFF_INPUT_PULLDOWN ), // DSS_DATA14
	OMAP3_MUX(DSS_DATA15,		OMAP_MUX_MODE0 							 | OMAP_PIN_OFF_INPUT_PULLDOWN ), // DSS_DATA15
	OMAP3_MUX(DSS_DATA16,		OMAP_MUX_MODE0 							 | OMAP_PIN_OFF_INPUT_PULLDOWN ), // DSS_DATA16
	OMAP3_MUX(DSS_DATA17,		OMAP_MUX_MODE0 							 | OMAP_PIN_OFF_INPUT_PULLDOWN ), // DSS_DATA17
	OMAP3_MUX(DSS_DATA18,		OMAP_MUX_MODE0 							 | OMAP_PIN_OFF_INPUT_PULLDOWN ), // DSS_DATA18
	OMAP3_MUX(DSS_DATA19,		OMAP_MUX_MODE0 							 | OMAP_PIN_OFF_INPUT_PULLDOWN ), // DSS_DATA19
	OMAP3_MUX(DSS_DATA20,		OMAP_MUX_MODE0 							 | OMAP_PIN_OFF_INPUT_PULLDOWN ), // DSS_DATA20
	OMAP3_MUX(DSS_DATA21,		OMAP_MUX_MODE0 							 | OMAP_PIN_OFF_INPUT_PULLDOWN ), // DSS_DATA21
	OMAP3_MUX(DSS_DATA22,		OMAP_MUX_MODE0 							 | OMAP_PIN_OFF_INPUT_PULLDOWN ), // DSS_DATA22
	OMAP3_MUX(DSS_DATA23,		OMAP_MUX_MODE0 							 | OMAP_PIN_OFF_INPUT_PULLDOWN ), // DSS_DATA23

	// MMC1
	OMAP3_MUX(SDMMC1_CLK,		OMAP_MUX_MODE7  						 | OMAP_PIN_OFF_INPUT_PULLUP   ), // Unused
	OMAP3_MUX(SDMMC1_CMD,		OMAP_MUX_MODE7  						 | OMAP_PIN_OFF_INPUT_PULLUP   ), // Unused
	OMAP3_MUX(SDMMC1_DAT0,		OMAP_MUX_MODE7  						 | OMAP_PIN_OFF_INPUT_PULLUP   ), // Unused
	OMAP3_MUX(SDMMC1_DAT1,		OMAP_MUX_MODE7  						 | OMAP_PIN_OFF_INPUT_PULLUP   ), // Unused
	OMAP3_MUX(SDMMC1_DAT2,		OMAP_MUX_MODE7  						 | OMAP_PIN_OFF_INPUT_PULLUP   ), // Unused
	OMAP3_MUX(SDMMC1_DAT3,		OMAP_MUX_MODE7  						 | OMAP_PIN_OFF_INPUT_PULLUP   ), // Unused

	OMAP3_MUX(GPIO_126,			OMAP_MUX_MODE7 | OMAP_PIN_INPUT_PULLDOWN | OMAP_PIN_OFF_INPUT_PULLDOWN ), // Unused 
	OMAP3_MUX(GPIO_129,			OMAP_MUX_MODE7 | OMAP_PIN_INPUT_PULLDOWN | OMAP_PIN_OFF_INPUT_PULLDOWN ), // Unused

	// MMC2
	OMAP3_MUX(SDMMC2_CLK,		OMAP_MUX_MODE0  						 | OMAP_PIN_OFF_INPUT_PULLUP   ), // 
	OMAP3_MUX(SDMMC2_CMD,		OMAP_MUX_MODE0  						 | OMAP_PIN_OFF_INPUT_PULLUP   ), // 
	OMAP3_MUX(SDMMC2_DAT0,		OMAP_MUX_MODE0  						 | OMAP_PIN_OFF_INPUT_PULLUP   ), // 
	OMAP3_MUX(SDMMC2_DAT1,		OMAP_MUX_MODE0  						 | OMAP_PIN_OFF_INPUT_PULLUP   ), // 
	OMAP3_MUX(SDMMC2_DAT2,		OMAP_MUX_MODE0  						 | OMAP_PIN_OFF_INPUT_PULLUP   ), // 
	OMAP3_MUX(SDMMC2_DAT3,		OMAP_MUX_MODE0  						 | OMAP_PIN_OFF_INPUT_PULLUP   ), // 
	OMAP3_MUX(SDMMC2_DAT4,		OMAP_MUX_MODE7 | OMAP_PIN_INPUT_PULLDOWN | OMAP_PIN_OFF_INPUT_PULLDOWN ), // Unused
	OMAP3_MUX(SDMMC2_DAT5,		OMAP_MUX_MODE7 | OMAP_PIN_INPUT_PULLDOWN | OMAP_PIN_OFF_INPUT_PULLDOWN ), // Unused
	OMAP3_MUX(SDMMC2_DAT6,		OMAP_MUX_MODE7 | OMAP_PIN_INPUT_PULLDOWN | OMAP_PIN_OFF_INPUT_PULLDOWN ), // Unused
	OMAP3_MUX(SDMMC2_DAT7,		OMAP_MUX_MODE7 | OMAP_PIN_INPUT_PULLDOWN | OMAP_PIN_OFF_INPUT_PULLDOWN ), // Unused

	// GPMC
	OMAP3_MUX(GPMC_A8,     		OMAP_MUX_MODE7 | OMAP_PIN_INPUT_PULLDOWN | OMAP_PIN_OFF_INPUT_PULLDOWN ), // Unused

	// Assign GPMC_A9 to GPIO_42 used as a push-pull, active-high
	// output to INTUSB_SUSPEND to the TUSB2551 USB PHY SUSPEND
	// internal circuit deactivation signal.

	OMAP3_MUX(GPMC_A9,			OMAP_MUX_MODE4 | OMAP_PIN_OUTPUT		 | OMAP_PIN_OFF_OUTPUT_HIGH    ), // GPIO_42

	// Assign GPMC_A10 to GPIO_43 used as push-pull, active low output
	// LCD_nENBUFFER for the 1.8V to 3.3V LCD buffer enable.

	OMAP3_MUX(GPMC_A10,			OMAP_MUX_MODE4 | OMAP_PIN_OUTPUT		 | OMAP_PIN_OFF_OUTPUT_HIGH	   ), // GPIO_43

	// Assign to GPMC_NCS3 for Samsung K9F4G08U0C 512 MiB SLC NAND
	// Flash

	OMAP3_MUX(GPMC_NCS3,		OMAP_MUX_MODE0 | OMAP_PIN_OUTPUT         | OMAP_PIN_OFF_OUTPUT_HIGH    ), // GPMC_nCS3

	OMAP3_MUX(GPMC_NCS4,		OMAP_MUX_MODE7 | OMAP_PIN_INPUT_PULLDOWN | OMAP_PIN_OFF_INPUT_PULLDOWN ), // Unused

	// Assign to GPMC_NCS5 for SMSC LAN9220 10/100 Mbit Ethernet MAC
	// and PHY

	OMAP3_MUX(GPMC_NCS5,		OMAP_MUX_MODE0 | OMAP_PIN_OUTPUT         | OMAP_PIN_OFF_OUTPUT_HIGH    ), // GPMC_nCS5

	OMAP3_MUX(GPMC_CLK,			OMAP_MUX_MODE7 | OMAP_PIN_INPUT_PULLDOWN | OMAP_PIN_OFF_INPUT_PULLDOWN ), // Unused

	// Assign GPMC_NBE1 to GPIO_61 used as a push-pull output to the
	// ZigBee active-low reset.

	OMAP3_MUX(GPMC_NBE1,		OMAP_MUX_MODE4 | OMAP_PIN_OUTPUT		 | OMAP_PIN_OFF_OUTPUT_LOW     ), // GPIO_61

	// Assign UART3_CTS_RCTX to GPIO_163 used as a push-pull input
	// from the ZigBee CPU.

	OMAP3_MUX(UART3_CTS_RCTX,	OMAP_MUX_MODE4 | OMAP_PIN_INPUT          | OMAP_PIN_OFF_INPUT_PULLDOWN ), // GPIO_163

	OMAP3_MUX(UART3_RTS_SD,		OMAP_MUX_MODE7 | OMAP_PIN_INPUT_PULLDOWN | OMAP_PIN_OFF_INPUT_PULLDOWN ), // Unused
	OMAP3_MUX(UART3_RX_IRRX,	OMAP_MUX_MODE0 | OMAP_PIN_INPUT          | OMAP_PIN_OFF_INPUT_PULLDOWN ), // UART3_RX_IRRX
	OMAP3_MUX(UART3_TX_IRTX,	OMAP_MUX_MODE0 | OMAP_PIN_OUTPUT         | OMAP_PIN_OFF_INPUT_PULLUP   ), // UART3_TX_IRTX

	// Debug console UART
	OMAP3_MUX(UART1_RTS,      	OMAP_MUX_MODE7 | OMAP_PIN_INPUT_PULLDOWN | OMAP_PIN_OFF_INPUT_PULLDOWN ), // UART1_RTS
	OMAP3_MUX(UART1_CTS,      	OMAP_MUX_MODE7 | OMAP_PIN_INPUT_PULLDOWN | OMAP_PIN_OFF_INPUT_PULLDOWN ), // UART1_CTS

	// Camera
	OMAP3_MUX(CAM_XCLKA,      	OMAP_MUX_MODE7 | OMAP_PIN_INPUT_PULLDOWN | OMAP_PIN_OFF_INPUT_PULLDOWN ), // Unused
	OMAP3_MUX(CAM_XCLKB,      	OMAP_MUX_MODE7 | OMAP_PIN_INPUT_PULLDOWN | OMAP_PIN_OFF_INPUT_PULLDOWN ), // Unused

	// Assign CAM_PCLK to GPIO_97 used as a push-pull, input from the
	// PMU charger suspend signal.

	OMAP3_MUX(CAM_PCLK,			OMAP_MUX_MODE4 | OMAP_PIN_INPUT          | OMAP_PIN_OFF_INPUT_PULLDOWN ), // GPIO_97

	OMAP3_MUX(CAM_VS,         	OMAP_MUX_MODE7 | OMAP_PIN_INPUT_PULLDOWN | OMAP_PIN_OFF_INPUT_PULLDOWN ), // Unused
	OMAP3_MUX(CAM_HS,         	OMAP_MUX_MODE7 | OMAP_PIN_INPUT_PULLDOWN | OMAP_PIN_OFF_INPUT_PULLDOWN ), // Unused
	OMAP3_MUX(CAM_FLD,        	OMAP_MUX_MODE7 | OMAP_PIN_INPUT_PULLDOWN | OMAP_PIN_OFF_INPUT_PULLDOWN ), // Unused
	OMAP3_MUX(CAM_WEN,        	OMAP_MUX_MODE7 | OMAP_PIN_INPUT_PULLDOWN | OMAP_PIN_OFF_INPUT_PULLDOWN ), // Unused

	// Assign CAM_STROBE to GPIO used as a push-pull input from the
	// PMU double-current signal.

	OMAP3_MUX(CAM_STROBE,		OMAP_MUX_MODE4 | OMAP_PIN_INPUT          | OMAP_PIN_OFF_INPUT_PULLDOWN ), // GPIO_126

	// Assign CAM_D0 to GPIO_99 used as a push-pull input from the
	// active-low PMU charger charge signal.

	OMAP3_MUX(CAM_D0,			OMAP_MUX_MODE4 | OMAP_PIN_INPUT          | OMAP_PIN_OFF_INPUT_PULLDOWN ), // GPIO_99

	OMAP3_MUX(CAM_D1,         	OMAP_MUX_MODE7 | OMAP_PIN_INPUT_PULLDOWN | OMAP_PIN_OFF_INPUT_PULLDOWN ), // Unused

	// Assign CAM_D2 to GPIO_101 used as a push-pull, active high
	// ouput LCD_ENVDD LCD Vdd enable.

	OMAP3_MUX(CAM_D2,			OMAP_MUX_MODE4 | OMAP_PIN_OUTPUT		 | OMAP_PIN_OFF_INPUT_PULLDOWN ), // GPIO_101

	// Wi-Fi
	//
	// Assign CAM_D3 to GPIO_102 used as a push-pull, active high
	// WL_IRQ interrupt input from the TI WL1270 wireless Ethernet.

	OMAP3_MUX(CAM_D3,			OMAP_MUX_MODE4 | OMAP_PIN_INPUT_PULLUP   | OMAP_PIN_OFF_INPUT_PULLUP | OMAP_PIN_OFF_WAKEUPENABLE  ), // GPIO_102

	// Assign CAM_D4 to GPIO_103 used as a push-pull, active high
	// WL_EN enable output to the TI WL1270 wireless Ethernet.

	OMAP3_MUX(CAM_D4,			OMAP_MUX_MODE4 | OMAP_PIN_OUTPUT         | OMAP_PIN_OFF_INPUT_PULLUP   ), // GPIO_103

	// Assign CAM_D{6,7,8,9} to GPIO_{105,106,107,108} used as
	// push-pull, active-high inputs ROTARY_{DIR,VALID,LAST_DIR,LAST_VALID}
	// from the rotary input state storage.

	OMAP3_MUX(CAM_D6,			OMAP_MUX_MODE4 | OMAP_PIN_INPUT          | OMAP_PIN_OFF_INPUT_PULLDOWN ), // GPIO_105
	OMAP3_MUX(CAM_D7,			OMAP_MUX_MODE4 | OMAP_PIN_INPUT          | OMAP_PIN_OFF_INPUT_PULLDOWN ), // GPIO_106
	OMAP3_MUX(CAM_D8,			OMAP_MUX_MODE4 | OMAP_PIN_INPUT          | OMAP_PIN_OFF_INPUT_PULLDOWN ), // GPIO_107
	OMAP3_MUX(CAM_D9,			OMAP_MUX_MODE4 | OMAP_PIN_INPUT          | OMAP_PIN_OFF_INPUT_PULLDOWN ), // GPIO_108

	// Assign CAM_D10 to GPIO_109 used as a push-pull, active low
	// output LCD_nRESET for the Samsung LMS350DF03 LCD reset.

	OMAP3_MUX(CAM_D10,			OMAP_MUX_MODE4 | OMAP_PIN_OUTPUT		 | OMAP_PIN_OFF_OUTPUT_LOW     ), // GPIO_109

	// Assign CAM_D11 to GPIO_110 used as a push-pull, active-low
	// output ROTARY_CLEAR to the rotary input state storage.

	OMAP3_MUX(CAM_D11,			OMAP_MUX_MODE4 | OMAP_PIN_OUTPUT		 | OMAP_PIN_OFF_OUTPUT_LOW     ), // GPIO_110

	OMAP3_MUX(SYS_CLKOUT2,    	OMAP_MUX_MODE7 | OMAP_PIN_INPUT_PULLDOWN | OMAP_PIN_OFF_INPUT_PULLDOWN ), // Unused
	OMAP3_MUX(HDQ_SIO,        	OMAP_MUX_MODE7 | OMAP_PIN_INPUT_PULLDOWN | OMAP_PIN_OFF_INPUT_PULLDOWN ), // Unused

	// McSPI1

	// Surprisingly, per http://e2e.ti.com/support/dsp/
	// omap_applications_processors/f/447/p/54130/193260.aspx#193260,
	// the SPI clock MUST be configured as an input for the SPI
	// interface to work correctly.

	OMAP3_MUX(MCSPI1_CLK,     	OMAP_MUX_MODE7 | OMAP_PIN_INPUT_PULLDOWN | OMAP_PIN_OFF_INPUT_PULLDOWN ), // Unused
	OMAP3_MUX(MCSPI1_SIMO,    	OMAP_MUX_MODE7 | OMAP_PIN_INPUT_PULLDOWN | OMAP_PIN_OFF_INPUT_PULLDOWN ), // Unused
	OMAP3_MUX(MCSPI1_SOMI,    	OMAP_MUX_MODE7 | OMAP_PIN_INPUT_PULLDOWN | OMAP_PIN_OFF_INPUT_PULLDOWN ), // Unused
	OMAP3_MUX(MCSPI1_CS0,     	OMAP_MUX_MODE7 | OMAP_PIN_INPUT_PULLDOWN | OMAP_PIN_OFF_INPUT_PULLDOWN ), // Unused

	// Assign MCSPI1_CS3 to MM2_TXDAT used as a push-pull,
	// input/output for the TUSB2551 USB PHY VP/D+ data signal.

	OMAP3_MUX(MCSPI1_CS3,		OMAP_MUX_MODE5 | OMAP_PIN_INPUT_PULLDOWN | OMAP_PIN_OFF_INPUT_PULLDOWN ), // MM2_TXDAT

	// McSPI2
	OMAP3_MUX(MCSPI2_CLK,       OMAP_MUX_MODE0 | OMAP_PIN_INPUT                                        ), // MCSPI2_CLK
	OMAP3_MUX(MCSPI2_SIMO,      OMAP_MUX_MODE0 | OMAP_PIN_INPUT                                        ), // MCSPI2_SIMO

	// Assign MCSPI2_SOMI to GPT10_PWM_EVT used as a push-pull pulse
	// width modulated (PWM) signal for the Samsung LMS350DF0[13] /
	// Tianma TM025ZDZ01 backlight control.

	OMAP3_MUX(MCSPI2_SOMI,		OMAP_MUX_MODE1 | OMAP_PIN_OUTPUT                                       ), // GPT10_PWM_EVT

	OMAP3_MUX(MCSPI2_CS0,       OMAP_MUX_MODE0 | OMAP_PIN_INPUT_PULLDOWN                               ), // MCSPI2_CS0

	// Assign MCSPI2_CS1 to MM2_TXEN_N used as a push-pull, active-low
	// output to the TUSB2551 USB PHY OE# output (transmit) enable.

	OMAP3_MUX(MCSPI2_CS1,		OMAP_MUX_MODE5 | OMAP_PIN_OUTPUT		 | OMAP_PIN_OFF_INPUT_PULLDOWN ), // MM2_TXEN_N

	// McBSP2
	OMAP3_MUX(MCBSP2_FSX,     	OMAP_MUX_MODE7 | OMAP_PIN_INPUT_PULLDOWN | OMAP_PIN_OFF_INPUT_PULLDOWN ), // Unused
	OMAP3_MUX(MCBSP2_CLKX,    	OMAP_MUX_MODE7 | OMAP_PIN_INPUT_PULLDOWN | OMAP_PIN_OFF_INPUT_PULLDOWN ), // Unused
	OMAP3_MUX(MCBSP2_DR,      	OMAP_MUX_MODE7 | OMAP_PIN_INPUT_PULLDOWN | OMAP_PIN_OFF_INPUT_PULLDOWN ), // Unused
	OMAP3_MUX(MCBSP2_DX,      	OMAP_MUX_MODE7 | OMAP_PIN_INPUT_PULLDOWN | OMAP_PIN_OFF_INPUT_PULLDOWN ), // Unused

	// Assign MCBSP3 as UART2 (Mode 1) for communication with the
	// ZigBee module.

	OMAP3_MUX(MCBSP3_DX,		OMAP_MUX_MODE1 | OMAP_PIN_INPUT			 | OMAP_PIN_OFF_INPUT_PULLDOWN ), // UART2_CTS
	OMAP3_MUX(MCBSP3_DR,		OMAP_MUX_MODE1 | OMAP_PIN_OUTPUT		 | OMAP_PIN_OFF_INPUT_PULLDOWN ), // UART2_RTS
	OMAP3_MUX(MCBSP3_CLKX,		OMAP_MUX_MODE1 | OMAP_PIN_OUTPUT		 | OMAP_PIN_OFF_INPUT_PULLDOWN ), // UART2_TX
	OMAP3_MUX(MCBSP3_FSX,		OMAP_MUX_MODE1 | OMAP_PIN_INPUT			 | OMAP_PIN_OFF_INPUT_PULLDOWN ), // UART2_RX

	// JTAG_RTCK ??

	// 32 and 187 are not bonded out in any of the AM3703 packages
	// 52, 53, 
	// 63, 64, 
	// 112, 113, 114, 115, 
	// 127, 128, 
	// 144, 145, 146, 147, 
	// 152, 153, 154, 155, 
	// 175, and 176
	// are non-bonded on the AM3703 CUS
	OMAP3_MUX(CHASSIS_ARMIRQ,	OMAP_MUX_MODE7 | OMAP_PIN_INPUT_PULLDOWN | OMAP_PIN_OFF_INPUT_PULLDOWN ), // 32
	OMAP3_MUX(CHASSIS_IVAIRQ,	OMAP_MUX_MODE7 | OMAP_PIN_INPUT_PULLDOWN | OMAP_PIN_OFF_INPUT_PULLDOWN ), // 187
	OMAP3_MUX(GPMC_NCS1,      	OMAP_MUX_MODE7 | OMAP_PIN_INPUT_PULLDOWN | OMAP_PIN_OFF_INPUT_PULLDOWN ), // 52
	OMAP3_MUX(GPMC_NCS2,      	OMAP_MUX_MODE7 | OMAP_PIN_INPUT_PULLDOWN | OMAP_PIN_OFF_INPUT_PULLDOWN ), // 53
	OMAP3_MUX(GPMC_WAIT1,     	OMAP_MUX_MODE7 | OMAP_PIN_INPUT_PULLDOWN | OMAP_PIN_OFF_INPUT_PULLDOWN ), // 63
	OMAP3_MUX(GPMC_WAIT2,     	OMAP_MUX_MODE7 | OMAP_PIN_INPUT_PULLDOWN | OMAP_PIN_OFF_INPUT_PULLDOWN ), // 64
	OMAP3_MUX(CSI2_DX0,       	OMAP_MUX_MODE7 | OMAP_PIN_INPUT_PULLDOWN | OMAP_PIN_OFF_INPUT_PULLDOWN ), // 112
	OMAP3_MUX(CSI2_DY0,       	OMAP_MUX_MODE7 | OMAP_PIN_INPUT_PULLDOWN | OMAP_PIN_OFF_INPUT_PULLDOWN ), // 113
	OMAP3_MUX(CSI2_DX1,       	OMAP_MUX_MODE7 | OMAP_PIN_INPUT_PULLDOWN | OMAP_PIN_OFF_INPUT_PULLDOWN ), // 114
	OMAP3_MUX(CSI2_DY1,       	OMAP_MUX_MODE7 | OMAP_PIN_INPUT_PULLDOWN | OMAP_PIN_OFF_INPUT_PULLDOWN ), // 115
	OMAP3_MUX(GPIO_127,       	OMAP_MUX_MODE7 | OMAP_PIN_INPUT_PULLDOWN | OMAP_PIN_OFF_INPUT_PULLDOWN ), // 127
	OMAP3_MUX(GPIO_128,       	OMAP_MUX_MODE7 | OMAP_PIN_INPUT_PULLDOWN | OMAP_PIN_OFF_INPUT_PULLDOWN ), // 128
	OMAP3_MUX(UART2_CTS,      	OMAP_MUX_MODE7 | OMAP_PIN_INPUT_PULLDOWN | OMAP_PIN_OFF_INPUT_PULLDOWN ), // 144
	OMAP3_MUX(UART2_RTS,      	OMAP_MUX_MODE7 | OMAP_PIN_INPUT_PULLDOWN | OMAP_PIN_OFF_INPUT_PULLDOWN ), // 145
	OMAP3_MUX(UART2_TX,       	OMAP_MUX_MODE7 | OMAP_PIN_INPUT_PULLDOWN | OMAP_PIN_OFF_INPUT_PULLDOWN ), // 146
	OMAP3_MUX(UART2_RX,       	OMAP_MUX_MODE7 | OMAP_PIN_INPUT_PULLDOWN | OMAP_PIN_OFF_INPUT_PULLDOWN ), // 147
	OMAP3_MUX(MCBSP4_CLKX,    	OMAP_MUX_MODE7 | OMAP_PIN_INPUT_PULLDOWN | OMAP_PIN_OFF_INPUT_PULLDOWN ), // 152
	OMAP3_MUX(MCBSP4_DR,      	OMAP_MUX_MODE7 | OMAP_PIN_INPUT_PULLDOWN | OMAP_PIN_OFF_INPUT_PULLDOWN ), // 153
	OMAP3_MUX(MCBSP4_DX,      	OMAP_MUX_MODE7 | OMAP_PIN_INPUT_PULLDOWN | OMAP_PIN_OFF_INPUT_PULLDOWN ), // 154
	OMAP3_MUX(MCBSP4_FSX,     	OMAP_MUX_MODE7 | OMAP_PIN_INPUT_PULLDOWN | OMAP_PIN_OFF_INPUT_PULLDOWN ), // 155
	OMAP3_MUX(MCSPI1_CS1,     	OMAP_MUX_MODE7 | OMAP_PIN_INPUT_PULLDOWN | OMAP_PIN_OFF_INPUT_PULLDOWN ), // 175
	OMAP3_MUX(MCSPI1_CS2,     	OMAP_MUX_MODE7 | OMAP_PIN_INPUT_PULLDOWN | OMAP_PIN_OFF_INPUT_PULLDOWN ), // 176

	// AM37x Device-only High-speed USB (HSUSB) ULPI to the TPS65921 USB 2.0 PHY
	OMAP3_MUX(HSUSB0_DATA0,		OMAP_MUX_MODE0 | OMAP_PIN_INPUT			 | OMAP_PIN_OFF_INPUT_PULLDOWN ), // USB
	OMAP3_MUX(HSUSB0_DATA1,		OMAP_MUX_MODE0 | OMAP_PIN_INPUT			 | OMAP_PIN_OFF_INPUT_PULLDOWN ), // USB
	OMAP3_MUX(HSUSB0_DATA2,		OMAP_MUX_MODE0 | OMAP_PIN_INPUT			 | OMAP_PIN_OFF_INPUT_PULLDOWN ), // USB
	OMAP3_MUX(HSUSB0_DATA3,		OMAP_MUX_MODE0 | OMAP_PIN_INPUT			 | OMAP_PIN_OFF_INPUT_PULLDOWN ), // USB
	OMAP3_MUX(HSUSB0_DATA4,		OMAP_MUX_MODE0 | OMAP_PIN_INPUT			 | OMAP_PIN_OFF_INPUT_PULLDOWN ), // USB
	OMAP3_MUX(HSUSB0_DATA5,		OMAP_MUX_MODE0 | OMAP_PIN_INPUT			 | OMAP_PIN_OFF_INPUT_PULLDOWN ), // USB
	OMAP3_MUX(HSUSB0_DATA6,		OMAP_MUX_MODE0 | OMAP_PIN_INPUT			 | OMAP_PIN_OFF_INPUT_PULLDOWN ), // USB
	OMAP3_MUX(HSUSB0_DATA7,		OMAP_MUX_MODE0 | OMAP_PIN_INPUT			 | OMAP_PIN_OFF_INPUT_PULLDOWN ), // USB
	OMAP3_MUX(HSUSB0_CLK,  		OMAP_MUX_MODE0 | OMAP_PIN_INPUT			 | OMAP_PIN_OFF_INPUT_PULLDOWN ), // USB
	OMAP3_MUX(HSUSB0_STP,  		OMAP_MUX_MODE0 | OMAP_PIN_OUTPUT		 | OMAP_PIN_OFF_INPUT_PULLDOWN ), // USB
	OMAP3_MUX(HSUSB0_DIR,  		OMAP_MUX_MODE0 | OMAP_PIN_INPUT			 | OMAP_PIN_OFF_INPUT_PULLDOWN ), // USB
	OMAP3_MUX(HSUSB0_NXT,  		OMAP_MUX_MODE0 | OMAP_PIN_INPUT			 | OMAP_PIN_OFF_INPUT_PULLDOWN ), // USB

	// McBSP1
	OMAP3_MUX(MCBSP1_CLKR,    	OMAP_MUX_MODE7 | OMAP_PIN_INPUT_PULLDOWN | OMAP_PIN_OFF_INPUT_PULLDOWN ), // Unused

	// Assign MCBSP1_FSR to GPIO_157 used as a push-pull, active-low
	// reset output to the SMSC9220 Ethernet.

	OMAP3_MUX(MCBSP1_FSR,		OMAP_MUX_MODE4 | OMAP_PIN_OUTPUT		 | OMAP_PIN_OFF_OUTPUT_LOW     ), // GPIO_157

	// Assign MCBSP1_DX to GPIO_158 used as a push-pull, active-high
	// output to the ZigBee power supply.

	OMAP3_MUX(MCBSP1_DX,		OMAP_MUX_MODE4 | OMAP_PIN_OUTPUT		 | OMAP_PIN_OFF_OUTPUT_LOW     ), // GPIO_158

	OMAP3_MUX(MCBSP1_DR,      	OMAP_MUX_MODE7 | OMAP_PIN_INPUT_PULLDOWN | OMAP_PIN_OFF_INPUT_PULLDOWN ), // Unused
	OMAP3_MUX(MCBSP_CLKS,     	OMAP_MUX_MODE7 | OMAP_PIN_INPUT_PULLDOWN | OMAP_PIN_OFF_INPUT_PULLDOWN ), // Unused

	// Assign MCBSP1_FSX to GPIO_161 used as a push-pull, active
	// interrupt input from the Silicon Labs 143 Proximity / Ambient
	// Light Sensor

	OMAP3_MUX(MCBSP1_FSX,		OMAP_MUX_MODE4 | OMAP_PIN_INPUT          | OMAP_PIN_OFF_INPUT_PULLDOWN ), // GPIO_161

	// Assign MCBSP1_CLKX to GPIO_162 used as an externally pulled-up
	// interrupt input from the SMSC9220 Ethernet.

	OMAP3_MUX(MCBSP1_CLKX,		OMAP_MUX_MODE4 | OMAP_PIN_INPUT          | OMAP_PIN_OFF_INPUT_PULLDOWN ), // GPIO_162

	// ETK
	OMAP3_MUX(ETK_CLK,        	OMAP_MUX_MODE4 | OMAP_PIN_INPUT_PULLDOWN | OMAP_PIN_OFF_INPUT_PULLDOWN ), // Unused
	OMAP3_MUX(ETK_CTL,        	OMAP_MUX_MODE4 | OMAP_PIN_INPUT_PULLDOWN | OMAP_PIN_OFF_INPUT_PULLDOWN ), // Unused
	OMAP3_MUX(ETK_D0,         	OMAP_MUX_MODE4 | OMAP_PIN_INPUT_PULLDOWN | OMAP_PIN_OFF_INPUT_PULLDOWN ), // Unused
	OMAP3_MUX(ETK_D1,         	OMAP_MUX_MODE4 | OMAP_PIN_INPUT_PULLDOWN | OMAP_PIN_OFF_INPUT_PULLDOWN ), // Unused
	OMAP3_MUX(ETK_D2,         	OMAP_MUX_MODE4 | OMAP_PIN_INPUT_PULLDOWN | OMAP_PIN_OFF_INPUT_PULLDOWN ), // Unused
	OMAP3_MUX(ETK_D3,         	OMAP_MUX_MODE4 | OMAP_PIN_INPUT_PULLDOWN | OMAP_PIN_OFF_INPUT_PULLDOWN ), // Unused
	OMAP3_MUX(ETK_D4,         	OMAP_MUX_MODE4 | OMAP_PIN_INPUT_PULLDOWN | OMAP_PIN_OFF_INPUT_PULLDOWN ), // Unused
	OMAP3_MUX(ETK_D5,         	OMAP_MUX_MODE4 | OMAP_PIN_INPUT_PULLDOWN | OMAP_PIN_OFF_INPUT_PULLDOWN ), // Unused
	OMAP3_MUX(ETK_D6,         	OMAP_MUX_MODE4 | OMAP_PIN_INPUT_PULLDOWN | OMAP_PIN_OFF_INPUT_PULLDOWN ), // Unused
	OMAP3_MUX(ETK_D7,         	OMAP_MUX_MODE4 | OMAP_PIN_INPUT_PULLDOWN | OMAP_PIN_OFF_INPUT_PULLDOWN ), // Unused
	OMAP3_MUX(ETK_D8,         	OMAP_MUX_MODE4 | OMAP_PIN_INPUT_PULLDOWN | OMAP_PIN_OFF_INPUT_PULLDOWN ), // Unused
	OMAP3_MUX(ETK_D9,         	OMAP_MUX_MODE4 | OMAP_PIN_INPUT_PULLDOWN | OMAP_PIN_OFF_INPUT_PULLDOWN ), // Unused
	OMAP3_MUX(ETK_D10,        	OMAP_MUX_MODE4 | OMAP_PIN_INPUT_PULLDOWN | OMAP_PIN_OFF_INPUT_PULLDOWN ), // Unused
	OMAP3_MUX(ETK_D11,        	OMAP_MUX_MODE4 | OMAP_PIN_INPUT_PULLDOWN | OMAP_PIN_OFF_INPUT_PULLDOWN ), // Unused
	OMAP3_MUX(ETK_D12,        	OMAP_MUX_MODE4 | OMAP_PIN_INPUT_PULLDOWN | OMAP_PIN_OFF_INPUT_PULLDOWN ), // Unused
	OMAP3_MUX(ETK_D13,        	OMAP_MUX_MODE4 | OMAP_PIN_INPUT_PULLDOWN | OMAP_PIN_OFF_INPUT_PULLDOWN ), // Unused

	// Assign ETK_D15 to MM2_RCV used as a push-pull input from the
	// TUSB2551 USB PHY RCV signal.

	OMAP3_MUX(ETK_D14,			OMAP_MUX_MODE5 | OMAP_PIN_INPUT_PULLDOWN | OMAP_PIN_OFF_INPUT_PULLDOWN ), // MM2_RCV

	// Assign ETK_D15 to MM2_TXSE0 used as a push-pull input/output
	// for the TUSB2551 USB PHY VM/D- data signal.

	OMAP3_MUX(ETK_D15,			OMAP_MUX_MODE5 | OMAP_PIN_INPUT_PULLDOWN | OMAP_PIN_OFF_INPUT_PULLDOWN ), // MM2_TXSE0

	{ .reg_offset = OMAP_MUX_TERMINATOR }
};
