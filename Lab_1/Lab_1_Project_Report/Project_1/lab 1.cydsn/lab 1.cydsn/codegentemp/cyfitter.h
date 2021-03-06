#ifndef INCLUDED_CYFITTER_H
#define INCLUDED_CYFITTER_H
#include <cydevice_trm.h>

/* PWM_1_PWMUDB */
#define PWM_1_PWMUDB_genblk1_ctrlreg__7__MASK 0x80u
#define PWM_1_PWMUDB_genblk1_ctrlreg__7__POS 7
#define PWM_1_PWMUDB_genblk1_ctrlreg__CONTROL_AUX_CTL_REG CYREG_UDB_W8_ACTL_03
#define PWM_1_PWMUDB_genblk1_ctrlreg__CONTROL_REG CYREG_UDB_W8_CTL_03
#define PWM_1_PWMUDB_genblk1_ctrlreg__CONTROL_ST_REG CYREG_UDB_CAT16_CTL_ST_03
#define PWM_1_PWMUDB_genblk1_ctrlreg__COUNT_REG CYREG_UDB_W8_CTL_03
#define PWM_1_PWMUDB_genblk1_ctrlreg__COUNT_ST_REG CYREG_UDB_CAT16_CTL_ST_03
#define PWM_1_PWMUDB_genblk1_ctrlreg__MASK 0x80u
#define PWM_1_PWMUDB_genblk1_ctrlreg__MASK_CTL_AUX_CTL_REG CYREG_UDB_CAT16_ACTL_MSK_03
#define PWM_1_PWMUDB_genblk1_ctrlreg__PER_CTL_AUX_CTL_REG CYREG_UDB_CAT16_ACTL_MSK_03
#define PWM_1_PWMUDB_genblk1_ctrlreg__PERIOD_REG CYREG_UDB_W8_MSK_03
#define PWM_1_PWMUDB_genblk8_stsreg__0__MASK 0x01u
#define PWM_1_PWMUDB_genblk8_stsreg__0__POS 0
#define PWM_1_PWMUDB_genblk8_stsreg__1__MASK 0x02u
#define PWM_1_PWMUDB_genblk8_stsreg__1__POS 1
#define PWM_1_PWMUDB_genblk8_stsreg__16BIT_STATUS_AUX_CTL_REG CYREG_UDB_W16_ACTL_02
#define PWM_1_PWMUDB_genblk8_stsreg__16BIT_STATUS_REG CYREG_UDB_W16_ST_02
#define PWM_1_PWMUDB_genblk8_stsreg__2__MASK 0x04u
#define PWM_1_PWMUDB_genblk8_stsreg__2__POS 2
#define PWM_1_PWMUDB_genblk8_stsreg__3__MASK 0x08u
#define PWM_1_PWMUDB_genblk8_stsreg__3__POS 3
#define PWM_1_PWMUDB_genblk8_stsreg__MASK 0x0Fu
#define PWM_1_PWMUDB_genblk8_stsreg__MASK_REG CYREG_UDB_W8_MSK_02
#define PWM_1_PWMUDB_genblk8_stsreg__STATUS_AUX_CTL_REG CYREG_UDB_W8_ACTL_02
#define PWM_1_PWMUDB_genblk8_stsreg__STATUS_REG CYREG_UDB_W8_ST_02
#define PWM_1_PWMUDB_sP8_pwmdp_u0__A0_A1_REG CYREG_UDB_CAT16_A_03
#define PWM_1_PWMUDB_sP8_pwmdp_u0__A0_REG CYREG_UDB_W8_A0_03
#define PWM_1_PWMUDB_sP8_pwmdp_u0__A1_REG CYREG_UDB_W8_A1_03
#define PWM_1_PWMUDB_sP8_pwmdp_u0__D0_D1_REG CYREG_UDB_CAT16_D_03
#define PWM_1_PWMUDB_sP8_pwmdp_u0__D0_REG CYREG_UDB_W8_D0_03
#define PWM_1_PWMUDB_sP8_pwmdp_u0__D1_REG CYREG_UDB_W8_D1_03
#define PWM_1_PWMUDB_sP8_pwmdp_u0__DP_AUX_CTL_REG CYREG_UDB_W8_ACTL_03
#define PWM_1_PWMUDB_sP8_pwmdp_u0__F0_F1_REG CYREG_UDB_CAT16_F_03
#define PWM_1_PWMUDB_sP8_pwmdp_u0__F0_REG CYREG_UDB_W8_F0_03
#define PWM_1_PWMUDB_sP8_pwmdp_u0__F1_REG CYREG_UDB_W8_F1_03
#define PWM_1_PWMUDB_sP8_pwmdp_u0__MSK_DP_AUX_CTL_REG CYREG_UDB_CAT16_ACTL_MSK_03
#define PWM_1_PWMUDB_sP8_pwmdp_u0__PER_DP_AUX_CTL_REG CYREG_UDB_CAT16_ACTL_MSK_03

/* Clock_1 */
#define Clock_1__CTRL_REGISTER CYREG_PERI_PCLK_CTL11
#define Clock_1__DIV_ID 0x00000040u
#define Clock_1__DIV_REGISTER CYREG_PERI_DIV_16_CTL00
#define Clock_1__PA_DIV_ID 0x000000FFu

/* Pin_LED */
#define Pin_LED__0__DR CYREG_GPIO_PRT3_DR
#define Pin_LED__0__DR_CLR CYREG_GPIO_PRT3_DR_CLR
#define Pin_LED__0__DR_INV CYREG_GPIO_PRT3_DR_INV
#define Pin_LED__0__DR_SET CYREG_GPIO_PRT3_DR_SET
#define Pin_LED__0__HSIOM CYREG_HSIOM_PORT_SEL3
#define Pin_LED__0__HSIOM_MASK 0x0F000000u
#define Pin_LED__0__HSIOM_SHIFT 24u
#define Pin_LED__0__INTCFG CYREG_GPIO_PRT3_INTR_CFG
#define Pin_LED__0__INTR CYREG_GPIO_PRT3_INTR
#define Pin_LED__0__INTR_CFG CYREG_GPIO_PRT3_INTR_CFG
#define Pin_LED__0__INTSTAT CYREG_GPIO_PRT3_INTR
#define Pin_LED__0__MASK 0x40u
#define Pin_LED__0__OUT_SEL CYREG_UDB_PA3_CFG10
#define Pin_LED__0__OUT_SEL_SHIFT 12u
#define Pin_LED__0__OUT_SEL_VAL 1u
#define Pin_LED__0__PA__CFG0 CYREG_UDB_PA3_CFG0
#define Pin_LED__0__PA__CFG1 CYREG_UDB_PA3_CFG1
#define Pin_LED__0__PA__CFG10 CYREG_UDB_PA3_CFG10
#define Pin_LED__0__PA__CFG11 CYREG_UDB_PA3_CFG11
#define Pin_LED__0__PA__CFG12 CYREG_UDB_PA3_CFG12
#define Pin_LED__0__PA__CFG13 CYREG_UDB_PA3_CFG13
#define Pin_LED__0__PA__CFG14 CYREG_UDB_PA3_CFG14
#define Pin_LED__0__PA__CFG2 CYREG_UDB_PA3_CFG2
#define Pin_LED__0__PA__CFG3 CYREG_UDB_PA3_CFG3
#define Pin_LED__0__PA__CFG4 CYREG_UDB_PA3_CFG4
#define Pin_LED__0__PA__CFG5 CYREG_UDB_PA3_CFG5
#define Pin_LED__0__PA__CFG6 CYREG_UDB_PA3_CFG6
#define Pin_LED__0__PA__CFG7 CYREG_UDB_PA3_CFG7
#define Pin_LED__0__PA__CFG8 CYREG_UDB_PA3_CFG8
#define Pin_LED__0__PA__CFG9 CYREG_UDB_PA3_CFG9
#define Pin_LED__0__PC CYREG_GPIO_PRT3_PC
#define Pin_LED__0__PC2 CYREG_GPIO_PRT3_PC2
#define Pin_LED__0__PORT 3u
#define Pin_LED__0__PS CYREG_GPIO_PRT3_PS
#define Pin_LED__0__SHIFT 6
#define Pin_LED__DR CYREG_GPIO_PRT3_DR
#define Pin_LED__DR_CLR CYREG_GPIO_PRT3_DR_CLR
#define Pin_LED__DR_INV CYREG_GPIO_PRT3_DR_INV
#define Pin_LED__DR_SET CYREG_GPIO_PRT3_DR_SET
#define Pin_LED__INTCFG CYREG_GPIO_PRT3_INTR_CFG
#define Pin_LED__INTR CYREG_GPIO_PRT3_INTR
#define Pin_LED__INTR_CFG CYREG_GPIO_PRT3_INTR_CFG
#define Pin_LED__INTSTAT CYREG_GPIO_PRT3_INTR
#define Pin_LED__MASK 0x40u
#define Pin_LED__PA__CFG0 CYREG_UDB_PA3_CFG0
#define Pin_LED__PA__CFG1 CYREG_UDB_PA3_CFG1
#define Pin_LED__PA__CFG10 CYREG_UDB_PA3_CFG10
#define Pin_LED__PA__CFG11 CYREG_UDB_PA3_CFG11
#define Pin_LED__PA__CFG12 CYREG_UDB_PA3_CFG12
#define Pin_LED__PA__CFG13 CYREG_UDB_PA3_CFG13
#define Pin_LED__PA__CFG14 CYREG_UDB_PA3_CFG14
#define Pin_LED__PA__CFG2 CYREG_UDB_PA3_CFG2
#define Pin_LED__PA__CFG3 CYREG_UDB_PA3_CFG3
#define Pin_LED__PA__CFG4 CYREG_UDB_PA3_CFG4
#define Pin_LED__PA__CFG5 CYREG_UDB_PA3_CFG5
#define Pin_LED__PA__CFG6 CYREG_UDB_PA3_CFG6
#define Pin_LED__PA__CFG7 CYREG_UDB_PA3_CFG7
#define Pin_LED__PA__CFG8 CYREG_UDB_PA3_CFG8
#define Pin_LED__PA__CFG9 CYREG_UDB_PA3_CFG9
#define Pin_LED__PC CYREG_GPIO_PRT3_PC
#define Pin_LED__PC2 CYREG_GPIO_PRT3_PC2
#define Pin_LED__PORT 3u
#define Pin_LED__PS CYREG_GPIO_PRT3_PS
#define Pin_LED__SHIFT 6

/* Miscellaneous */
#define CY_VERSION "PSoC Creator  3.1 SP2"
#define CYDEV_BCLK__HFCLK__HZ 48000000U
#define CYDEV_BCLK__HFCLK__KHZ 48000U
#define CYDEV_BCLK__HFCLK__MHZ 48U
#define CYDEV_BCLK__SYSCLK__HZ 48000000U
#define CYDEV_BCLK__SYSCLK__KHZ 48000U
#define CYDEV_BCLK__SYSCLK__MHZ 48U
#define CYDEV_CHIP_DIE_LEOPARD 1u
#define CYDEV_CHIP_DIE_PANTHER 6u
#define CYDEV_CHIP_DIE_PSOC4A 3u
#define CYDEV_CHIP_DIE_PSOC5LP 5u
#define CYDEV_CHIP_DIE_UNKNOWN 0u
#define CYDEV_CHIP_FAMILY_PSOC3 1u
#define CYDEV_CHIP_FAMILY_PSOC4 2u
#define CYDEV_CHIP_FAMILY_PSOC5 3u
#define CYDEV_CHIP_FAMILY_UNKNOWN 0u
#define CYDEV_CHIP_FAMILY_USED CYDEV_CHIP_FAMILY_PSOC4
#define CYDEV_CHIP_JTAG_ID 0x0E34119Eu
#define CYDEV_CHIP_MEMBER_3A 1u
#define CYDEV_CHIP_MEMBER_4A 3u
#define CYDEV_CHIP_MEMBER_4D 2u
#define CYDEV_CHIP_MEMBER_4F 4u
#define CYDEV_CHIP_MEMBER_5A 6u
#define CYDEV_CHIP_MEMBER_5B 5u
#define CYDEV_CHIP_MEMBER_UNKNOWN 0u
#define CYDEV_CHIP_MEMBER_USED CYDEV_CHIP_MEMBER_4F
#define CYDEV_CHIP_DIE_EXPECT CYDEV_CHIP_MEMBER_USED
#define CYDEV_CHIP_DIE_ACTUAL CYDEV_CHIP_DIE_EXPECT
#define CYDEV_CHIP_REV_LEOPARD_ES1 0u
#define CYDEV_CHIP_REV_LEOPARD_ES2 1u
#define CYDEV_CHIP_REV_LEOPARD_ES3 3u
#define CYDEV_CHIP_REV_LEOPARD_PRODUCTION 3u
#define CYDEV_CHIP_REV_PANTHER_ES0 0u
#define CYDEV_CHIP_REV_PANTHER_ES1 1u
#define CYDEV_CHIP_REV_PANTHER_PRODUCTION 1u
#define CYDEV_CHIP_REV_PSOC4A_ES0 17u
#define CYDEV_CHIP_REV_PSOC4A_PRODUCTION 17u
#define CYDEV_CHIP_REV_PSOC5LP_ES0 0u
#define CYDEV_CHIP_REV_PSOC5LP_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_3A_ES1 0u
#define CYDEV_CHIP_REVISION_3A_ES2 1u
#define CYDEV_CHIP_REVISION_3A_ES3 3u
#define CYDEV_CHIP_REVISION_3A_PRODUCTION 3u
#define CYDEV_CHIP_REVISION_4A_ES0 17u
#define CYDEV_CHIP_REVISION_4A_PRODUCTION 17u
#define CYDEV_CHIP_REVISION_4D_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4F_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_5A_ES0 0u
#define CYDEV_CHIP_REVISION_5A_ES1 1u
#define CYDEV_CHIP_REVISION_5A_PRODUCTION 1u
#define CYDEV_CHIP_REVISION_5B_ES0 0u
#define CYDEV_CHIP_REVISION_5B_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_USED CYDEV_CHIP_REVISION_4F_PRODUCTION
#define CYDEV_CHIP_REV_EXPECT CYDEV_CHIP_REVISION_USED
#define CYDEV_CONFIG_READ_ACCELERATOR 1
#define CYDEV_CONFIG_UNUSED_IO_AllowButWarn 0
#define CYDEV_CONFIG_UNUSED_IO CYDEV_CONFIG_UNUSED_IO_AllowButWarn
#define CYDEV_CONFIG_UNUSED_IO_AllowWithInfo 1
#define CYDEV_CONFIG_UNUSED_IO_Disallowed 2
#define CYDEV_CONFIGURATION_COMPRESSED 1
#define CYDEV_CONFIGURATION_MODE_COMPRESSED 0
#define CYDEV_CONFIGURATION_MODE CYDEV_CONFIGURATION_MODE_COMPRESSED
#define CYDEV_CONFIGURATION_MODE_DMA 2
#define CYDEV_CONFIGURATION_MODE_UNCOMPRESSED 1
#define CYDEV_DEBUG_PROTECT_KILL 4
#define CYDEV_DEBUG_PROTECT_OPEN 1
#define CYDEV_DEBUG_PROTECT CYDEV_DEBUG_PROTECT_OPEN
#define CYDEV_DEBUG_PROTECT_PROTECTED 2
#define CYDEV_DEBUGGING_DPS_Disable 3
#define CYDEV_DEBUGGING_DPS_SWD 2
#define CYDEV_DEBUGGING_DPS CYDEV_DEBUGGING_DPS_SWD
#define CYDEV_DEBUGGING_ENABLE 1
#define CYDEV_HEAP_SIZE 0x80
#define CYDEV_PROJ_TYPE 0
#define CYDEV_PROJ_TYPE_BOOTLOADER 1
#define CYDEV_PROJ_TYPE_LOADABLE 2
#define CYDEV_PROJ_TYPE_MULTIAPPBOOTLOADER 3
#define CYDEV_PROJ_TYPE_STANDARD 0
#define CYDEV_STACK_SIZE 0x0800
#define CYDEV_USE_BUNDLED_CMSIS 1
#define CYDEV_VARIABLE_VDDA 1
#define CYDEV_VDDA 3.3
#define CYDEV_VDDA_MV 3300
#define CYDEV_VDDD 3.3
#define CYDEV_VDDD_MV 3300
#define CYDEV_VDDR 3.3
#define CYDEV_VDDR_MV 3300
#define CYIPBLOCK_m0s8bless_VERSION 1
#define CYIPBLOCK_m0s8cpussv2_VERSION 1
#define CYIPBLOCK_m0s8csd_VERSION 1
#define CYIPBLOCK_m0s8ioss_VERSION 1
#define CYIPBLOCK_m0s8lcd_VERSION 2
#define CYIPBLOCK_m0s8lpcomp_VERSION 2
#define CYIPBLOCK_m0s8peri_VERSION 1
#define CYIPBLOCK_m0s8scb_VERSION 2
#define CYIPBLOCK_m0s8srssv2_VERSION 1
#define CYIPBLOCK_m0s8tcpwm_VERSION 2
#define CYIPBLOCK_m0s8udbif_VERSION 1
#define CYIPBLOCK_s8pass4al_VERSION 1
#define CYDEV_BOOTLOADER_ENABLE 0

#endif /* INCLUDED_CYFITTER_H */
