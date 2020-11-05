/*
 * Arm SCP/MCP Software
 * Copyright (c) 2020, Arm Limited and Contributors. All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#ifndef CLOCK_SOC_H
#define CLOCK_SOC_H

#include <fwk_macros.h>

#define CLOCK_RATE_REFCLK (100UL * FWK_MHZ)
#define CLOCK_RATE_SYSPLLCLK (2000UL * FWK_MHZ)

/*
 * PLL clock indexes.
 */
enum clock_pll_idx {
    CLOCK_PLL_IDX_CPU0,
    CLOCK_PLL_IDX_CPU1,
    CLOCK_PLL_IDX_CPU2,
    CLOCK_PLL_IDX_CPU3,
    CLOCK_PLL_IDX_CPU4,
    CLOCK_PLL_IDX_CPU5,
    CLOCK_PLL_IDX_CPU6,
    CLOCK_PLL_IDX_CPU7,
    CLOCK_PLL_IDX_CPU8,
    CLOCK_PLL_IDX_CPU9,
    CLOCK_PLL_IDX_CPU10,
    CLOCK_PLL_IDX_CPU11,
    CLOCK_PLL_IDX_CPU12,
    CLOCK_PLL_IDX_CPU13,
    CLOCK_PLL_IDX_CPU14,
    CLOCK_PLL_IDX_CPU15,
    CLOCK_PLL_IDX_SYS,
    CLOCK_PLL_IDX_DMC,
    CLOCK_PLL_IDX_INTERCONNECT,
    CLOCK_PLL_IDX_COUNT
};

/*
 * PIK clock indexes.
 */
enum clock_pik_idx {
    CLOCK_PIK_IDX_CLUS0_CPU0,
    CLOCK_PIK_IDX_CLUS1_CPU0,
    CLOCK_PIK_IDX_CLUS2_CPU0,
    CLOCK_PIK_IDX_CLUS3_CPU0,
    CLOCK_PIK_IDX_CLUS4_CPU0,
    CLOCK_PIK_IDX_CLUS5_CPU0,
    CLOCK_PIK_IDX_CLUS6_CPU0,
    CLOCK_PIK_IDX_CLUS7_CPU0,
    CLOCK_PIK_IDX_CLUS8_CPU0,
    CLOCK_PIK_IDX_CLUS9_CPU0,
    CLOCK_PIK_IDX_CLUS10_CPU0,
    CLOCK_PIK_IDX_CLUS11_CPU0,
    CLOCK_PIK_IDX_CLUS12_CPU0,
    CLOCK_PIK_IDX_CLUS13_CPU0,
    CLOCK_PIK_IDX_CLUS14_CPU0,
    CLOCK_PIK_IDX_CLUS15_CPU0,
    CLOCK_PIK_IDX_DMC,
    CLOCK_PIK_IDX_INTERCONNECT,
    CLOCK_PIK_IDX_SCP,
    CLOCK_PIK_IDX_GIC,
    CLOCK_PIK_IDX_PCLKSCP,
    CLOCK_PIK_IDX_SYSPERCLK,
    CLOCK_PIK_IDX_UARTCLK,
    CLOCK_PIK_IDX_COUNT
};

#endif /* CLOCK_SOC_H */