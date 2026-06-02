// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#define ENCODER_A_PINS { GP6 }
#define ENCODER_B_PINS { GP7 }
#define ENCODER_C_PINS { GP8 }

#define WS2812_DI_PIN GP9
#define RGBLIGHT_LED_COUNT 2

#define I2c_DRIVER I2CD1
#define I2C1_SCL_PIN GP15
#define I2C1_SDA_PIN GP14 