// Copyright 2025 Garrett (@Garrett)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
//#define NO_DEBUG

/* disable print */
//#define NO_PRINT

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT

#define MASTER_LEFT
// #define IGNORE_ATOMIC_BLOCK // NO FIX

// #define ENABLE_RGB_MATRIX_BREATHING	

#define MATRIX_COL_PINS_LEFT { GP9, GP8, GP7, GP6, GP5, GP4, GP15 }
#define MATRIX_COL_PINS_RIGHT { GP15, GP4, GP5, GP6, GP7, GP8, GP9 }

#if defined(RGB_MATRIX_ENABLE)
    // #define WS2812_DI_PIN D4
    #define RGB_MATRIX_LED_COUNT 68
    // #define WS2812_LED_COUNT 34:
#endif
