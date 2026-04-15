#pragma once

#define MICROPY_HW_BOARD_NAME "WeAct RP2350B Core (Ebina Gaming)"
#define MICROPY_HW_MCU_NAME   "rp2350b"

#define MICROPY_HW_NEOPIXEL (&pin_GPIO23)

// I2C（必要なら変更）
#define DEFAULT_I2C_BUS_SCL (&pin_GPIO5)
#define DEFAULT_I2C_BUS_SDA (&pin_GPIO4)

// SPI（ST7789 用に配線変更）
#define DEFAULT_SPI_BUS_SCK  (&pin_GPIO29)
#define DEFAULT_SPI_BUS_MOSI (&pin_GPIO28)
// MISO は使わないので定義しない

// UART は使わないので削除
