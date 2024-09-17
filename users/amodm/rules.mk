# This top half is from the idank from holykeebs
# The bottom half is from miryoku by manna-harbour

VALID_POINTING_DEVICE_CONFIGURATIONS := trackball cirque40 cirque35 cirque35_cirque35 cirque40_cirque40 trackball_trackball trackball_cirque35 cirque35_trackball trackball_cirque40 cirque40_trackball trackpoint trackpoint_trackball trackball_trackpoint trackpoint_cirque35 cirque35_trackpoint trackpoint_cirque40 cirque40_trackpoint
ifdef POINTING_DEVICE
    ifeq ($(filter $(POINTING_DEVICE),$(VALID_POINTING_DEVICE_CONFIGURATIONS)),)
        $(call CATASTROPHIC_ERROR,Invalid POINTING_DEVICE,POINTING_DEVICE="$(POINTING_DEVICE)" is not a valid pointing device configuration)
	endif
endif

SERIAL_DRIVER = vendor
# SRC += $(USER_PATH)/amodm.c

MSG_POINTING_DEVICE = none
MSG_OLED = no
MSG_MASTER_SIDE = right

ifeq ($(strip $(POINTING_DEVICE_POSITION)), right)
	OPT_DEFS += -DPOINTING_DEVICE_POSITION_RIGHT
	MSG_MASTER_SIDE = right
else ifeq ($(strip $(POINTING_DEVICE_POSITION)), left)
	OPT_DEFS += -DPOINTING_DEVICE_POSITION_LEFT
	MSG_MASTER_SIDE = left
else ifeq ($(strip $(POINTING_DEVICE_POSITION)), thumb)
	OPT_DEFS += -DPOINTING_DEVICE_POSITION_THUMB
	MSG_MASTER_SIDE = right
else ifeq ($(strip $(POINTING_DEVICE_POSITION)), thumb_inner)
	OPT_DEFS += -DPOINTING_DEVICE_POSITION_THUMB_INNER
	MSG_MASTER_SIDE = right
else ifeq ($(strip $(POINTING_DEVICE_POSITION)), thumb_outer)
	OPT_DEFS += -DPOINTING_DEVICE_POSITION_THUMB_OUTER
	MSG_MASTER_SIDE = right
else ifeq ($(strip $(POINTING_DEVICE_POSITION)), middle)
	OPT_DEFS += -DPOINTING_DEVICE_POSITION_MIDDLE
	MSG_MASTER_SIDE = n/a (not a split keyboard)
endif

ifeq ($(strip $(POINTING_DEVICE)), cirque40)
	OPT_DEFS += -DPOINTING_DEVICE_CONFIGURATION_CIRQUE40
	POINTING_DEVICE_ENABLE = yes
	POINTING_DEVICE_DRIVER = cirque_pinnacle_i2c

	MSG_POINTING_DEVICE = cirque40 touchpad
endif

MOUSEKEY_ENABLE = yes

ifeq ($(strip $(OLED)), yes)
	OPT_DEFS += -DOLED_ENABLE
	OLED_ENABLE     = yes
	OLED_DRIVER     = ssd1306
	MSG_OLED = yes
else
	OLED_ENABLE     = no
	MSG_OLED = no
endif

ifeq ($(strip $(OLED_FLIP)), yes)
	OPT_DEFS += -DOLED_FLIP
	MSG_OLED_FLIPPED = (flipped)
endif

print-summary: cpfirmware
	printf "\n%s" ' _           _       _             _         ' >&2
	printf "\n%s" '| |__   ___ | |_   _| | _____  ___| |__  ___ ' >&2
	printf "\n%s" "| '_ \ / _ \| | | | | |/ / _ \/ _ \ '_ \/ __|" >&2
	printf "\n%s" '| | | | (_) | | |_| |   <  __/  __/ |_) \__ \' >&2
	printf "\n%s" '|_| |_|\___/|_|\__, |_|\_\___|\___|_.__/|___/' >&2
	printf "\n%s" '               |___/                         ' >&2
	printf "\n\nPointing Device: $(BOLD)$(MSG_POINTING_DEVICE)$(NO_COLOR)\n" >&2
	printf "OLED: $(BOLD)$(MSG_OLED) $(MSG_OLED_FLIPPED)$(NO_COLOR)\n" >&2
	printf "Keyboard main side: $(BOLD)$(MSG_MASTER_SIDE)$(NO_COLOR)\n" >&2
	printf "\n$(WARN_COLOR)WARNING!$(NO_COLOR) Avoid connecting / disconnecting the TRRS cable when the keyboard is powered. This can short the GPIO pins of the controllers.\n\n" >&2


# this last bit is from miryoku
MOUSEKEY_ENABLE = yes
EXTRAKEY_ENABLE = yes
AUTO_SHIFT_ENABLE = yes
TAP_DANCE_ENABLE = yes
CAPS_WORD_ENABLE = yes
KEY_OVERRIDE_ENABLE = yes

DYNAMIC_TAPPING_TERM_ENABLE	= yes

INTROSPECTION_KEYMAP_C = amodm.c # keymaps

include users/manna-harbour_miryoku/custom_rules.mk

include users/manna-harbour_miryoku/post_rules.mk
