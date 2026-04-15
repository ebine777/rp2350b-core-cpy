#include "py/obj.h"
#include "py/runtime.h"
#include "shared-bindings/microcontroller/Pin.h"
#include "shared-bindings/board/__init__.h"

STATIC const mp_rom_map_elem_t board_global_dict_table[] = {

    // --- LED ---
    { MP_ROM_QSTR(MP_QSTR_LED), MP_ROM_PTR(&pin_GPIO23) },

    // --- ST7789 SPI ---
    { MP_ROM_QSTR(MP_QSTR_SCK),  MP_ROM_PTR(&pin_GPIO29) },
    { MP_ROM_QSTR(MP_QSTR_MOSI), MP_ROM_PTR(&pin_GPIO28) },
    // MISO は無し

    { MP_ROM_QSTR(MP_QSTR_DC),   MP_ROM_PTR(&pin_GPIO31) },
    { MP_ROM_QSTR(MP_QSTR_CS),   MP_ROM_PTR(&pin_GPIO32) },
    { MP_ROM_QSTR(MP_QSTR_RST),  MP_ROM_PTR(&pin_GPIO30) },

    // --- Joystick ADC ---
    { MP_ROM_QSTR(MP_QSTR_A0), MP_ROM_PTR(&pin_GPIO45) }, // X
    { MP_ROM_QSTR(MP_QSTR_A1), MP_ROM_PTR(&pin_GPIO46) }, // Y

    // --- ボタン（GP01?GP26）---
    // 特別な設定不要。board.GPxx でアクセス可能。

};

MP_DEFINE_CONST_DICT(board_module_globals, board_global_dict_table);