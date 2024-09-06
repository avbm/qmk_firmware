#pragma once

#undef MASTER_LEFT
#undef EE_HANDS
#undef MASTER_RIGHT

#define SERIAL_USART_TX_PIN GP1

// pointing device on right, default to right.
#define MASTER_RIGHT

// Generic Cirque configuration.
#ifdef POINTING_DEVICE_DRIVER_cirque_pinnacle_i2c
    #if defined(POINTING_DEVICE_CONFIGURATION_CIRQUE35) || defined(POINTING_DEVICE_CONFIGURATION_CIRQUE35_CIRQUE35) || defined(POINTING_DEVICE_CONFIGURATION_PIMORONI_CIRQUE35) || defined(POINTING_DEVICE_CONFIGURATION_CIRQUE35_PIMORONI) || defined(POINTING_DEVICE_CONFIGURATION_TRACKPOINT_CIRQUE35) || defined(POINTING_DEVICE_CONFIGURATION_CIRQUE35_TRACKPOINT)
        #define CIRQUE_PINNACLE_DIAMETER_MM 35
    #elif defined(POINTING_DEVICE_CONFIGURATION_CIRQUE40) || defined(POINTING_DEVICE_CONFIGURATION_CIRQUE40_CIRQUE40) || defined(POINTING_DEVICE_CONFIGURATION_PIMORONI_CIRQUE40) || defined(POINTING_DEVICE_CONFIGURATION_CIRQUE40_PIMORONI) || defined(POINTING_DEVICE_CONFIGURATION_TRACKPOINT_CIRQUE40) || defined(POINTING_DEVICE_CONFIGURATION_CIRQUE40_TRACKPOINT)
        #define CIRQUE_PINNACLE_DIAMETER_MM 40
    #else
        #error "Unknown Cirque configuration."
    #endif
    // Cirque 40mm on the left side of a split keyboard is rotated 180 degrees.
    #if defined(POINTING_DEVICE_CONFIGURATION_CIRQUE40) && defined(POINTING_DEVICE_POSITION_LEFT)
        #define POINTING_DEVICE_ROTATION_180
    #endif
    #if defined(POINTING_DEVICE_CONFIGURATION_CIRQUE40_PIMORONI) || defined(POINTING_DEVICE_CONFIGURATION_CIRQUE40_TRACKPOINT)
        #define POINTING_DEVICE_ROTATION_180
    #endif
    // Tap for left click.
    #define CIRQUE_PINNACLE_TAP_ENABLE
    #define POINTING_DEVICE_GESTURES_SCROLL_ENABLE
#endif

#ifdef POINTING_DEVICE_DRIVER_ps2
    // The default streaming mode is flaky and doesn't always work. This setting doesn't seem to affect performance.
    #define PS2_MOUSE_USE_REMOTE_MODE

    // Serial uses PIO0, change PS2 to PIO1.
    #define PS2_PIO_USE_PIO1

    #define PS2_MOUSE_INVERT_X
    #define PS2_MOUSE_INVERT_Y

    #define PS2_DATA_PIN    GP2
    #define PS2_CLOCK_PIN   GP3

    // Start faster when keyboard resets.
    #define PS2_MOUSE_INIT_DELAY 500
#endif

#ifdef OLED_ENABLE
    #define SPLIT_LAYER_STATE_ENABLE
#endif

// miryoku configs

// default but used in macros
#undef TAPPING_TERM
#define TAPPING_TERM 250

// Enable rapid switch from tap to hold, disables double tap hold auto-repeat.
#define QUICK_TAP_TERM 0

// Auto Shift
#define NO_AUTO_SHIFT_ALPHA
#define AUTO_SHIFT_TIMEOUT TAPPING_TERM
#define AUTO_SHIFT_NO_SETUP

// Mouse key speed and acceleration.
#undef MOUSEKEY_DELAY
#define MOUSEKEY_DELAY          0
#undef MOUSEKEY_INTERVAL
#define MOUSEKEY_INTERVAL       16
#undef MOUSEKEY_WHEEL_DELAY
#define MOUSEKEY_WHEEL_DELAY    0
#undef MOUSEKEY_MAX_SPEED
#define MOUSEKEY_MAX_SPEED      6
#undef MOUSEKEY_TIME_TO_MAX
#define MOUSEKEY_TIME_TO_MAX    64

// Thumb Combos
#if defined (MIRYOKU_KLUDGE_THUMBCOMBOS)
  #define COMBO_COUNT 8
  #define COMBO_TERM 200
  #define EXTRA_SHORT_COMBOS
#endif

// CAPS word
#define BOTH_SHIFTS_TURNS_ON_CAPS_WORD
#define CAPS_WORD_INVERT_ON_SHIFT
