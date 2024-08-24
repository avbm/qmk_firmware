This directory enables trackball / trackpoint functionality based on command
line flags, regardless of the keyboard/keymap used.

## Examples

```
# build corne with manna-harbour_miryoku keymap, enable cirque40 trackpad
make crkbd/rev1:manna-harbour_miryoku -j$(nproc) -e USER_NAME=amodm -e OLED=yes -e OLED_FLIP=yes -e POINTING_DEVICE=cirque40 -e SIDE=right 
```
