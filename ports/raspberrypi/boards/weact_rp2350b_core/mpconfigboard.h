#pragma once

#define MICROPY_HW_BOARD_NAME "WeAct RP2350B Core (Ebina Gaming)"
#define MICROPY_HW_MCU_NAME   "rp2350b"

#define MICROPY_HW_NEOPIXEL (&pin_GPIO23)

// I2C
#define DEFAULT_I2C_BUS_SCL (&pin_GPIO5)
#define DEFAULT_I2C_BUS_SDA (&pin_GPIO4)

// SPI
#define DEFAULT_SPI_BUS_SCK  (&pin_GPIO29)
#define DEFAULT_SPI_BUS_MOSI (&pin_GPIO28)

// USB pins (D+ / D-)
// Å´ Zephyr DTS ÇämîFÇµÇƒÇ©ÇÁñÑÇﬂÇÈ
#define MICROPY_HW_USB_DM_PIN (&pin_GPIO24)
#define MICROPY_HW_USB_DP_PIN (&pin_GPIO25)