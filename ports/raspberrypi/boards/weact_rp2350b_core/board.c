#include "py/obj.h"
#include "py/runtime.h"
#include "shared-bindings/microcontroller/Pin.h"
#include "shared-bindings/board/__init__.h"

STATIC const mp_rom_map_elem_t board_global_dict_table[] = {
    { MP_ROM_QSTR(MP_QSTR_LED), MP_ROM_PTR(&pin_GPIO23) },
};

MP_DEFINE_CONST_DICT(board_module_globals, board_global_dict_table);