// path: qmk_firmware/keyboards/gmmk/pro/ansi/keymaps/viapro/config.h
#pragma once

#ifdef RGB_MATRIX_ENABLE
    #define RGB_DISABLE_TIMEOUT 1200000 // 20 minutes (20 * 60 * 1000ms)
    #define RGB_DISABLE_WHEN_USB_SUSPENDED true
#endif // RGB_MATRIX_ENABLE
