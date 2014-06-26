/*
 * (C) Copyright 2006
 * Texas Instruments, <www.ti.com>
 *
 * See file CREDITS for list of people who contributed to this
 * project.
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License as
 * published by the Free Software Foundation; either version 2 of
 * the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston,
 * MA 02111-1307 USA
 *
 */

#ifndef _OMAP34XX_CPU_H
#define  _OMAP34XX_CPU_H
#if defined (CONFIG_AM3517EVM) || defined (CONFIG_AM3517TEB)
#include <asm/arch/omap3.h>
#elif defined (CONFIG_OMAP3430)
#include <asm/arch/omap3430.h>
#endif

#include <asm/arch/gpmc.h>
#include <asm/arch/prcm.h>
#include <asm/arch/sdrc.h>

/* Register offsets of common modules */
/* Control */
#define CONTROL_STATUS		(OMAP34XX_CTRL_BASE + 0x2F0)
#define OMAP34XX_MCR		(OMAP34XX_CTRL_BASE + 0x8C)
#define CONTROL_SCALABLE_OMAP_STATUS	(OMAP34XX_CTRL_BASE + 0x44C)
#define CONTROL_SCALABLE_OMAP_OCP	(OMAP34XX_CTRL_BASE + 0x534)


/* Tap Information */
#define TAP_IDCODE_REG		(OMAP34XX_TAP_BASE+0x204)
#define PRODUCTION_ID		(OMAP34XX_TAP_BASE+0x208)

/* OMAP 34XX/35XX/36xx/37xx Control ID */
#define OMAP34XX_CONTROL_ID		(OMAP34XX_WAKEUP_L4_IO_BASE + 0xa204)

#define CONTROL_STATUS_DEVICETYPE_MASK			ARM_REG_VAL(8, 0x7)
#define CONTROL_STATUS_DEVICETYPE_ENCODE(v)		(((v) << 8) & CONTROL_STATUS_DEVICETYPE_MASK)
#define CONTROL_STATUS_DEVICETYPE_DECODE(v)		(((v) & CONTROL_STATUS_DEVICETYPE_MASK) >> 8)
#define CONTROL_STATUS_DEVICETYPE_TST				0x0
#define CONTROL_STATUS_DEVICETYPE_EMU				0x1
#define CONTROL_STATUS_DEVICETYPE_HS				0x2
#define CONTROL_STATUS_DEVICETYPE_GP				0x3

/*
 * Legacy mnemonics
 */
#define DEVICE_MASK									CONTROL_STATUS_DEVICETYPE_MASK
#define TST_DEVICE									CONTROL_STATUS_DEVICETYPE_TST
#define EMU_DEVICE									CONTROL_STATUS_DEVICETYPE_EMU
#define HS_DEVICE									CONTROL_STATUS_DEVICETYPE_HS
#define GP_DEVICE									CONTROL_STATUS_DEVICETYPE_GP

#define	CONTROL_STATUS_SYSBOOT_MASK				ARM_REG_VAL(0, 0x3F)
#define CONTROL_STATUS_SYSBOOT_ENCODE(v)		(((v) << 0) & CONTROL_STATUS_SYSBOOT_MASK)
#define CONTROL_STATUS_SYSBOOT_DECODE(v)		(((v) & CONTROL_STATUS_SYSBOOT_MASK) >> 0)

#define	CONTROL_STATUS_SYSBOOT_TYPE_MASK		ARM_REG_VAL(5, 0x1)
#define CONTROL_STATUS_SYSBOOT_TYPE_ENCODE(v)	(((v) << 0) & CONTROL_STATUS_SYSBOOT_TYPE_MASK)
#define CONTROL_STATUS_SYSBOOT_TYPE_DECODE(v)	(((v) & CONTROL_STATUS_SYSBOOT_TYPE_MASK) >> 0)
#define CONTROL_STATUS_SYSBOOT_TYPE_MEMORY			0x0
#define CONTROL_STATUS_SYSBOOT_TYPE_PERIPHERAL		0x1

#define	CONTROL_STATUS_SYSBOOT_ORDER_MASK		ARM_REG_VAL(0, 0x1F)
#define CONTROL_STATUS_SYSBOOT_ORDER_ENCODE(v)	(((v) << 0) & CONTROL_STATUS_SYSBOOT_ORDER_MASK)
#define CONTROL_STATUS_SYSBOOT_ORDER_DECODE(v)	(((v) & CONTROL_STATUS_SYSBOOT_ORDER_MASK) >> 0)

/*
 * Legacy mneomnic
 *
 * We are not concerned with BIT5 as it only determines the prirotiy
 * between memory or perpheral booting
 */
#define SYSBOOT_MASK							CONTROL_STATUS_SYSBOOT_ORDER_MASK

/* GPMC CS3/cs4/cs6 not avaliable */

#define GPMC_BASE						(OMAP34XX_GPMC_BASE)

#define GPMC_REVISION					(GPMC_BASE + 0x0000)
#define GPMC_SYSCONFIG 					(GPMC_BASE + 0x0010)
#define GPMC_SYSSTATUS 					(GPMC_BASE + 0x0014)
#define GPMC_IRQSTATUS 					(GPMC_BASE + 0x0018)
#define GPMC_IRQENABLE 					(GPMC_BASE + 0x001C)
#define GPMC_TIMEOUT_CONTROL 			(GPMC_BASE + 0x0040)
#define GPMC_ERR_ADDRESS				(GPMC_BASE + 0x0044)
#define GPMC_ERR_TYPE 					(GPMC_BASE + 0x0048)
#define GPMC_CONFIG 					(GPMC_BASE + 0x0050)
#define GPMC_STATUS 					(GPMC_BASE + 0x0054)

#define GPMC_CONFIG_BASE				(GPMC_BASE + 0x0060)
#define GPMC_CONFIG_SIZE				0x0030
#define GPMC_CONFIGX_BASE(reg)			(GPMC_CONFIG_BASE + (((reg) - 1) * 4))
#define GPMC_CONFIGX(reg, cs)			(GPMC_CONFIGX_BASE(reg) + ((cs) * GPMC_CONFIG_SIZE))

#define GPMC_CONFIG1(cs)				GPMC_CONFIGX(1, cs)
#define GPMC_CONFIG2(cs)				GPMC_CONFIGX(2, cs)
#define GPMC_CONFIG3(cs)				GPMC_CONFIGX(3, cs)
#define GPMC_CONFIG4(cs)				GPMC_CONFIGX(4, cs)
#define GPMC_CONFIG5(cs)				GPMC_CONFIGX(5, cs)
#define GPMC_CONFIG6(cs)				GPMC_CONFIGX(6, cs)
#define GPMC_CONFIG7(cs)				GPMC_CONFIGX(7, cs)

#define GPMC_CONFIG1_0					GPMC_CONFIG1(0)
#define GPMC_CONFIG2_0					GPMC_CONFIG2(0)
#define GPMC_CONFIG3_0					GPMC_CONFIG3(0)
#define GPMC_CONFIG4_0					GPMC_CONFIG4(0)
#define GPMC_CONFIG5_0					GPMC_CONFIG5(0)
#define GPMC_CONFIG6_0					GPMC_CONFIG6(0)
#define GPMC_CONFIG7_0					GPMC_CONFIG7(0)

#define GPMC_CONFIG1_1					GPMC_CONFIG1(1)
#define GPMC_CONFIG2_1					GPMC_CONFIG2(1)
#define GPMC_CONFIG3_1					GPMC_CONFIG3(1)
#define GPMC_CONFIG4_1					GPMC_CONFIG4(1)
#define GPMC_CONFIG5_1					GPMC_CONFIG5(1)
#define GPMC_CONFIG6_1					GPMC_CONFIG6(1)
#define GPMC_CONFIG7_1					GPMC_CONFIG7(1)

#define GPMC_CONFIG1_2					GPMC_CONFIG1(2)
#define GPMC_CONFIG2_2					GPMC_CONFIG2(2)
#define GPMC_CONFIG3_2					GPMC_CONFIG3(2)
#define GPMC_CONFIG5_2					GPMC_CONFIG5(2)
#define GPMC_CONFIG4_2					GPMC_CONFIG4(2)
#define GPMC_CONFIG6_2					GPMC_CONFIG6(2)
#define GPMC_CONFIG7_2					GPMC_CONFIG7(2)

#define GPMC_CONFIG1_3					GPMC_CONFIG1(3)
#define GPMC_CONFIG2_3					GPMC_CONFIG2(3)
#define GPMC_CONFIG3_3					GPMC_CONFIG3(3)
#define GPMC_CONFIG4_3					GPMC_CONFIG4(3)
#define GPMC_CONFIG5_3					GPMC_CONFIG5(3)
#define GPMC_CONFIG6_3					GPMC_CONFIG6(3)
#define GPMC_CONFIG7_3					GPMC_CONFIG7(3)

#define GPMC_CONFIG1_4					GPMC_CONFIG1(4)
#define GPMC_CONFIG2_4					GPMC_CONFIG2(4)
#define GPMC_CONFIG3_4					GPMC_CONFIG3(4)
#define GPMC_CONFIG4_4					GPMC_CONFIG4(4)
#define GPMC_CONFIG5_4					GPMC_CONFIG5(4)
#define GPMC_CONFIG6_4					GPMC_CONFIG6(4)
#define GPMC_CONFIG7_4					GPMC_CONFIG7(4)

#define GPMC_CONFIG1_5					GPMC_CONFIG1(5)
#define GPMC_CONFIG2_5					GPMC_CONFIG2(5)
#define GPMC_CONFIG3_5					GPMC_CONFIG3(5)
#define GPMC_CONFIG4_5					GPMC_CONFIG4(5)
#define GPMC_CONFIG5_5					GPMC_CONFIG5(5)
#define GPMC_CONFIG6_5					GPMC_CONFIG6(5)
#define GPMC_CONFIG7_5					GPMC_CONFIG7(5)

#define GPMC_CONFIG1_6					GPMC_CONFIG1(6)
#define GPMC_CONFIG2_6					GPMC_CONFIG2(6)
#define GPMC_CONFIG3_6					GPMC_CONFIG3(6)
#define GPMC_CONFIG4_6					GPMC_CONFIG4(6)
#define GPMC_CONFIG5_6					GPMC_CONFIG5(6)
#define GPMC_CONFIG6_6					GPMC_CONFIG6(6)
#define GPMC_CONFIG7_6					GPMC_CONFIG7(6)

#define GPMC_CONFIG1_7					GPMC_CONFIG1(7)
#define GPMC_CONFIG2_7					GPMC_CONFIG2(7)
#define GPMC_CONFIG3_7					GPMC_CONFIG3(7)
#define GPMC_CONFIG4_7					GPMC_CONFIG4(7)
#define GPMC_CONFIG5_7					GPMC_CONFIG5(7)
#define GPMC_CONFIG6_7					GPMC_CONFIG6(7)
#define GPMC_CONFIG7_7					GPMC_CONFIG7(7)

#define GPMC_NAND_COMMAND(i)			(GPMC_BASE + 0x007C + ((i) * 0x0030))
#define GPMC_NAND_COMMAND_0				GPMC_NAND_COMMAND(0)
#define GPMC_NAND_COMMAND_1				GPMC_NAND_COMMAND(1)
#define GPMC_NAND_COMMAND_2				GPMC_NAND_COMMAND(2)
#define GPMC_NAND_COMMAND_3				GPMC_NAND_COMMAND(3)
#define GPMC_NAND_COMMAND_4				GPMC_NAND_COMMAND(4)
#define GPMC_NAND_COMMAND_5				GPMC_NAND_COMMAND(5)
#define GPMC_NAND_COMMAND_6				GPMC_NAND_COMMAND(6)
#define GPMC_NAND_COMMAND_7				GPMC_NAND_COMMAND(7)

#define GPMC_NAND_ADDRESS(i)			(GPMC_BASE + 0x0080 + ((i) * 0x0030))
#define GPMC_NAND_ADDRESS_0				GPMC_NAND_ADDRESS(0)
#define GPMC_NAND_ADDRESS_1				GPMC_NAND_ADDRESS(1)
#define GPMC_NAND_ADDRESS_2				GPMC_NAND_ADDRESS(2)
#define GPMC_NAND_ADDRESS_3				GPMC_NAND_ADDRESS(3)
#define GPMC_NAND_ADDRESS_4				GPMC_NAND_ADDRESS(4)
#define GPMC_NAND_ADDRESS_5				GPMC_NAND_ADDRESS(5)
#define GPMC_NAND_ADDRESS_6				GPMC_NAND_ADDRESS(6)
#define GPMC_NAND_ADDRESS_7				GPMC_NAND_ADDRESS(7)

#define GPMC_NAND_DATA(i)				(GPMC_BASE + 0x0084 + ((i) * 0x0030))
#define GPMC_NAND_DATA_0				GPMC_NAND_DATA(0)
#define GPMC_NAND_DATA_1				GPMC_NAND_DATA(1)
#define GPMC_NAND_DATA_2				GPMC_NAND_DATA(2)
#define GPMC_NAND_DATA_3				GPMC_NAND_DATA(3)
#define GPMC_NAND_DATA_4				GPMC_NAND_DATA(4)
#define GPMC_NAND_DATA_5				GPMC_NAND_DATA(5)
#define GPMC_NAND_DATA_6				GPMC_NAND_DATA(6)
#define GPMC_NAND_DATA_7				GPMC_NAND_DATA(7)

#define GPMC_PREFETCH_CONFIG1			(GPMC_BASE + 0x01E0)
#define GPMC_PREFETCH_CONFIG2			(GPMC_BASE + 0x01E4)
#define GPMC_PREFETCH_CONTROL			(GPMC_BASE + 0x01EC)
#define GPMC_PREFETCH_STATUS			(GPMC_BASE + 0x01F0)

#define GPMC_ECC_CONFIG					(GPMC_BASE + 0x01F4)
#define GPMC_ECC_CONTROL				(GPMC_BASE + 0x01F8)
#define GPMC_ECC_SIZE_CONFIG			(GPMC_BASE + 0x01FC)
#define GPMC_ECC_RESULT(j)				(GPMC_BASE + 0x0200 + \
										 (((j) - 1) * 0x0004))
#define GPMC_ECC1_RESULT				GPMC_ECC_RESULT(1)
#define GPMC_ECC2_RESULT				GPMC_ECC_RESULT(2)
#define GPMC_ECC3_RESULT				GPMC_ECC_RESULT(3)
#define GPMC_ECC4_RESULT				GPMC_ECC_RESULT(4)
#define GPMC_ECC5_RESULT				GPMC_ECC_RESULT(5)
#define GPMC_ECC6_RESULT				GPMC_ECC_RESULT(6)
#define GPMC_ECC7_RESULT				GPMC_ECC_RESULT(7)
#define GPMC_ECC8_RESULT				GPMC_ECC_RESULT(8)
#define GPMC_ECC9_RESULT				GPMC_ECC_RESULT(9)

#define GPMC_BCH_RESULT0(i)				(GPMC_BASE + 0x0240 + ((i) * 0x0010))
#define GPMC_BCH_RESULT0_0				GPMC_BCH_RESULT0(0)
#define GPMC_BCH_RESULT0_1				GPMC_BCH_RESULT0(1)
#define GPMC_BCH_RESULT0_2				GPMC_BCH_RESULT0(2)
#define GPMC_BCH_RESULT0_3				GPMC_BCH_RESULT0(3)
#define GPMC_BCH_RESULT0_4				GPMC_BCH_RESULT0(4)
#define GPMC_BCH_RESULT0_5				GPMC_BCH_RESULT0(5)
#define GPMC_BCH_RESULT0_6				GPMC_BCH_RESULT0(6)
#define GPMC_BCH_RESULT0_7				GPMC_BCH_RESULT0(7)

#define GPMC_BCH_RESULT1(i) 			(GPMC_BASE + 0x0244 + ((i) * 0x0010))
#define GPMC_BCH_RESULT1_0				GPMC_BCH_RESULT1(0)
#define GPMC_BCH_RESULT1_1				GPMC_BCH_RESULT1(1)
#define GPMC_BCH_RESULT1_2				GPMC_BCH_RESULT1(2)
#define GPMC_BCH_RESULT1_3				GPMC_BCH_RESULT1(3)
#define GPMC_BCH_RESULT1_4				GPMC_BCH_RESULT1(4)
#define GPMC_BCH_RESULT1_5				GPMC_BCH_RESULT1(5)
#define GPMC_BCH_RESULT1_6				GPMC_BCH_RESULT1(6)
#define GPMC_BCH_RESULT1_7				GPMC_BCH_RESULT1(7)

#define GPMC_BCH_RESULT2(i) 			(GPMC_BASE + 0x0248 + ((i) * 0x0010))
#define GPMC_BCH_RESULT2_0				GPMC_BCH_RESULT2(0)
#define GPMC_BCH_RESULT2_1				GPMC_BCH_RESULT2(1)
#define GPMC_BCH_RESULT2_2				GPMC_BCH_RESULT2(2)
#define GPMC_BCH_RESULT2_3				GPMC_BCH_RESULT2(3)
#define GPMC_BCH_RESULT2_4				GPMC_BCH_RESULT2(4)
#define GPMC_BCH_RESULT2_5				GPMC_BCH_RESULT2(5)
#define GPMC_BCH_RESULT2_6				GPMC_BCH_RESULT2(6)
#define GPMC_BCH_RESULT2_7				GPMC_BCH_RESULT2(7)

#define GPMC_BCH_RESULT3(i) 			(GPMC_BASE + 0x024C + ((i) * 0x0010))
#define GPMC_BCH_RESULT3_0				GPMC_BCH_RESULT3(0)
#define GPMC_BCH_RESULT3_1				GPMC_BCH_RESULT3(1)
#define GPMC_BCH_RESULT3_2				GPMC_BCH_RESULT3(2)
#define GPMC_BCH_RESULT3_3				GPMC_BCH_RESULT3(3)
#define GPMC_BCH_RESULT3_4				GPMC_BCH_RESULT3(4)
#define GPMC_BCH_RESULT3_5				GPMC_BCH_RESULT3(5)
#define GPMC_BCH_RESULT3_6				GPMC_BCH_RESULT3(6)
#define GPMC_BCH_RESULT3_7				GPMC_BCH_RESULT3(7)

#define GPMC_BCH_SWDATA 				(GPMC_BASE + 0x02D0)

#if defined (CONFIG_OMAP34XX) || defined (CONFIG_AM3517EVM)
#define GPMC_CONFIG_CS0		(OMAP34XX_GPMC_BASE+0x60)
#elif defined (CONFIG_AM3517TEB)
#define GPMC_CONFIG_CS0		(OMAP34XX_GPMC_BASE+0xC0)
#endif

/* GPMC Mapping */
# define FLASH_BASE		0x10000000  /* NOR flash (aligned to 256 Meg) */
# define FLASH_BASE_SDPV1	0x04000000  /* NOR flash (aligned to 64 Meg) */
# define FLASH_BASE_SDPV2	0x10000000  /* NOR flash (aligned to 256 Meg) */
# define DEBUG_BASE		0x08000000  /* debug board */
# define NAND_BASE		0x30000000  /* NAND addr (actual size small port)*/
# define PISMO2_BASE		0x18000000  /* PISMO2 CS1/2 */
# define ONENAND_MAP		0x20000000  /* OneNand addr (actual size small port */

/* SMS */
#define SMS_SYSCONFIG		(OMAP34XX_SMS_BASE+0x10)
#define SMS_RG_ATT0		(OMAP34XX_SMS_BASE+0x48)
#define SMS_CLASS_ARB0		(OMAP34XX_SMS_BASE+0xD0)
#define BURSTCOMPLETE_GROUP7	BIT31

/* SDRC */
#define SDRC_REVISION		(OMAP34XX_SDRC_BASE + 0x00)
#define SDRC_SYSCONFIG		(OMAP34XX_SDRC_BASE + 0x10)
#define SDRC_SYSSTATUS		(OMAP34XX_SDRC_BASE + 0x14)
#define	SDRC_STATUS			SDRC_SYSSTATUS
#define SDRC_CS_CFG			(OMAP34XX_SDRC_BASE + 0x40)
#define SDRC_SHARING		(OMAP34XX_SDRC_BASE + 0x44)
#define SDRC_ERR_ADDR		(OMAP34XX_SDRC_BASE + 0x48)
#define SDRC_ERR_TYPE		(OMAP34XX_SDRC_BASE + 0x4C)
#define SDRC_DLLA_CTRL		(OMAP34XX_SDRC_BASE + 0x60)
#define SDRC_DLLA_STATUS	(OMAP34XX_SDRC_BASE + 0x64)
#define SDRC_DLLB_CTRL		(OMAP34XX_SDRC_BASE + 0x68)
#define SDRC_DLLB_STATUS	(OMAP34XX_SDRC_BASE + 0x6C)
#define DLLPHASE		BIT1
#define LOADDLL			BIT2
#define DLL_DELAY_MASK		0xFF00
#define DLL_NO_FILTER_MASK	(BIT8|BIT9)
#define SDRC_POWER_REG		(OMAP34XX_SDRC_BASE + 0x70)
#define SDRC_POWER			SDRC_POWER_REG
#define WAKEUPPROC		BIT26

#define SDRC_MCFG_0			(OMAP34XX_SDRC_BASE + 0x80)
#define SDRC_MR_0			(OMAP34XX_SDRC_BASE + 0x84)
#define SDRC_EMR2_0			(OMAP34XX_SDRC_BASE + 0x8C)
#define SDRC_ACTIM_CTRLA_0	(OMAP34XX_SDRC_BASE + 0x9C)
#define SDRC_ACTIM_CTRLB_0	(OMAP34XX_SDRC_BASE + 0xA0)
#define SDRC_RFR_CTRL_0		(OMAP34XX_SDRC_BASE + 0xA4)
#define SDRC_MANUAL_0		(OMAP34XX_SDRC_BASE + 0xA8)
#define SDRC_MCFG_1			(OMAP34XX_SDRC_BASE + 0xB0)
#define SDRC_MR_1			(OMAP34XX_SDRC_BASE + 0xB4)
#define SDRC_EMR2_1			(OMAP34XX_SDRC_BASE + 0xBC)
#define SDRC_ACTIM_CTRLA_1	(OMAP34XX_SDRC_BASE + 0xC4)
#define SDRC_ACTIM_CTRLB_1	(OMAP34XX_SDRC_BASE + 0xC8)
#define SDRC_RFR_CTRL_1		(OMAP34XX_SDRC_BASE + 0xD4)
#define SDRC_MANUAL_1		(OMAP34XX_SDRC_BASE + 0xD8)
#define OMAP34XX_SDRC_CS0	0x80000000
#define OMAP34XX_SDRC_CS1	0xA0000000
#define CMD_NOP			0x0
#define CMD_PRECHARGE		0x1
#define CMD_AUTOREFRESH		0x2
#define CMD_ENTR_PWRDOWN	0x3
#define CMD_EXIT_PWRDOWN	0x4
#define CMD_ENTR_SRFRSH		0x5
#define CMD_CKE_HIGH		0x6
#define CMD_CKE_LOW		0x7
#define SOFTRESET		BIT1
#define SMART_IDLE		(0x2 << 3)
#define REF_ON_IDLE		(0x1 << 6)

/* EMIF4 register */
#define	EMIF4_BASE		OMAP34XX_SDRC_BASE
#define	EMIF4_MOD_ID		(EMIF4_BASE + 0x00)
#define	EMIF4_SDRAM_STS		(EMIF4_BASE + 0x04)
#define	EMIF4_SDRAM_CFG		(EMIF4_BASE + 0x08)
#define	EMIF4_SDRAM_RFCR	(EMIF4_BASE + 0x10)
#define	EMIF4_SDRAM_RFCR_SHDW	(EMIF4_BASE + 0x14)
#define	EMIF4_SDRAM_TIM1	(EMIF4_BASE + 0x18)
#define	EMIF4_SDRAM_TIM1_SHDW	(EMIF4_BASE + 0x1C)
#define	EMIF4_SDRAM_TIM2	(EMIF4_BASE + 0x20)
#define	EMIF4_SDRAM_TIM2_SHDW	(EMIF4_BASE + 0x24)
#define	EMIF4_SDRAM_TIM3	(EMIF4_BASE + 0x28)
#define	EMIF4_SDRAM_TIM3_SHDW	(EMIF4_BASE + 0x2c)
#define	EMIF4_PWR_MGT_CTRL	(EMIF4_BASE + 0x38)
#define	EMIF4_PWR_MGT_CTRL_SHDW	(EMIF4_BASE + 0x3C)
#define	EMIF4_IODFT_TLGC	(EMIF4_BASE + 0x60)
#define	EMIF4_DDR_PHYCTL1	(EMIF4_BASE + 0xE4)
#define	EMIF4_DDR_PHYCTL1_SHDW	(EMIF4_BASE + 0xE8)
#define	EMIF4_DDR_PHYCTL2	(EMIF4_BASE + 0xEC)


/* timer regs offsets (32 bit regs) */
#define TIDR			0x0      /* r */
#define TIOCP_CFG		0x10     /* rw */
#define TISTAT			0x14     /* r */
#define TISR			0x18     /* rw */
#define TIER			0x1C     /* rw */
#define TWER			0x20     /* rw */
#define TCLR			0x24     /* rw */
#define TCRR			0x28     /* rw */
#define TLDR			0x2C     /* rw */
#define TTGR			0x30     /* rw */
#define TWPS			0x34     /* r */
#define TMAR			0x38     /* rw */
#define TCAR1			0x3c     /* r */
#define TSICR			0x40     /* rw */
#define TCAR2			0x44     /* r */
#define GPT_EN			((0<<2)|BIT1|BIT0) /* enable sys_clk NO-prescale /1 */

/* Watchdog */
#define WWPS			0x34     /* r */
#define WSPR			0x48     /* rw */
#define WD_UNLOCK1		0xAAAA
#define WD_UNLOCK2		0x5555

/* PRCM */
#define CM_FCLKEN_IVA2      0x48004000
#define CM_CLKEN_PLL_IVA2   0x48004004
#define CM_IDLEST_PLL_IVA2  0x48004024
#define CM_CLKSEL1_PLL_IVA2 0x48004040
#define CM_CLKSEL2_PLL_IVA2 0x48004044
#define CM_CLKEN_PLL_MPU    0x48004904
#define CM_IDLEST_PLL_MPU   0x48004924
#define CM_CLKSEL1_PLL_MPU  0x48004940
#define CM_CLKSEL2_PLL_MPU  0x48004944
#define CM_FCLKEN1_CORE     0x48004a00
#define CM_ICLKEN1_CORE     0x48004a10
#define CM_ICLKEN2_CORE     0x48004a14
#define CM_CLKSEL_CORE      0x48004a40
#define CM_FCLKEN_GFX       0x48004b00
#define CM_ICLKEN_GFX       0x48004b10
#define CM_CLKSEL_GFX       0x48004b40
#define CM_FCLKEN_WKUP      0x48004c00
#define CM_ICLKEN_WKUP      0x48004c10
#define CM_CLKSEL_WKUP      0x48004c40
#define CM_IDLEST_WKUP      0x48004c20
#define CM_CLKEN_PLL        0x48004d00
#define CM_IDLEST_CKGEN     0x48004d20
#define CM_CLKSEL1_PLL      0x48004d40
#define CM_CLKSEL2_PLL      0x48004d44
#define CM_CLKSEL3_PLL      0x48004d48
#define CM_FCLKEN_DSS       0x48004e00
#define CM_ICLKEN_DSS       0x48004e10
#define CM_CLKSEL_DSS       0x48004e40
#define CM_FCLKEN_CAM       0x48004f00
#define CM_ICLKEN_CAM       0x48004f10
#define CM_CLKSEL_CAM       0x48004F40
#define CM_FCLKEN_PER       0x48005000
#define CM_ICLKEN_PER       0x48005010
#define CM_CLKSEL_PER       0x48005040
#define CM_CLKSEL1_EMU      0x48005140

/* SMX-APE */
#define PM_RT_APE_BASE_ADDR_ARM		(SMX_APE_BASE + 0x10000)
#define PM_GPMC_BASE_ADDR_ARM		(SMX_APE_BASE + 0x12400)
#define PM_OCM_RAM_BASE_ADDR_ARM	(SMX_APE_BASE + 0x12800)
#define PM_OCM_ROM_BASE_ADDR_ARM	(SMX_APE_BASE + 0x12C00)
#define PM_IVA2_BASE_ADDR_ARM		(SMX_APE_BASE + 0x14000)

#define RT_REQ_INFO_PERMISSION_1	(PM_RT_APE_BASE_ADDR_ARM + 0x68)
#define RT_READ_PERMISSION_0	(PM_RT_APE_BASE_ADDR_ARM + 0x50)
#define RT_WRITE_PERMISSION_0	(PM_RT_APE_BASE_ADDR_ARM + 0x58)
#define RT_ADDR_MATCH_1	(PM_RT_APE_BASE_ADDR_ARM + 0x60)

#define GPMC_REQ_INFO_PERMISSION_0	(PM_GPMC_BASE_ADDR_ARM + 0x48)
#define GPMC_READ_PERMISSION_0	(PM_GPMC_BASE_ADDR_ARM + 0x50)
#define GPMC_WRITE_PERMISSION_0	(PM_GPMC_BASE_ADDR_ARM + 0x58)

#define OCM_REQ_INFO_PERMISSION_0	(PM_OCM_RAM_BASE_ADDR_ARM + 0x48)
#define OCM_READ_PERMISSION_0	(PM_OCM_RAM_BASE_ADDR_ARM + 0x50)
#define OCM_WRITE_PERMISSION_0	(PM_OCM_RAM_BASE_ADDR_ARM + 0x58)
#define OCM_ADDR_MATCH_2	(PM_OCM_RAM_BASE_ADDR_ARM + 0x80)

#define IVA2_REQ_INFO_PERMISSION_0	(PM_IVA2_BASE_ADDR_ARM + 0x48)
#define IVA2_READ_PERMISSION_0	(PM_IVA2_BASE_ADDR_ARM + 0x50)
#define IVA2_WRITE_PERMISSION_0	(PM_IVA2_BASE_ADDR_ARM + 0x58)

#define IVA2_REQ_INFO_PERMISSION_1	(PM_IVA2_BASE_ADDR_ARM + 0x68)
#define IVA2_READ_PERMISSION_1		(PM_IVA2_BASE_ADDR_ARM + 0x70)
#define IVA2_WRITE_PERMISSION_1		(PM_IVA2_BASE_ADDR_ARM + 0x78)

#define IVA2_REQ_INFO_PERMISSION_2	(PM_IVA2_BASE_ADDR_ARM + 0x88)
#define IVA2_READ_PERMISSION_2		(PM_IVA2_BASE_ADDR_ARM + 0x90)
#define IVA2_WRITE_PERMISSION_2		(PM_IVA2_BASE_ADDR_ARM + 0x98)

#define IVA2_REQ_INFO_PERMISSION_3	(PM_IVA2_BASE_ADDR_ARM + 0xA8)
#define IVA2_READ_PERMISSION_3		(PM_IVA2_BASE_ADDR_ARM + 0xB0)
#define IVA2_WRITE_PERMISSION_3		(PM_IVA2_BASE_ADDR_ARM + 0xB8)

/* I2C base */
#define I2C_BASE1		(OMAP34XX_CORE_L4_IO_BASE + 0x70000)
#define I2C_BASE2		(OMAP34XX_CORE_L4_IO_BASE + 0x72000)
#define I2C_BASE3		(OMAP34XX_CORE_L4_IO_BASE + 0x60000)

#endif
