This directory enables trackball / trackpoint functionality based on command
line flags, regardless of the keyboard/keymap used.

## Examples

```
# build corne with manna-harbour_miryoku keymap, enable cirque40 trackpad
make crkbd/rev1:manna-harbour_miryoku -j$(nproc) -e USER_NAME=amodm -e OLED=yes -e OLED_FLIP=yes -e POINTING_DEVICE=cirque40 -e SIDE=right 

# build miryoku with some layers in vi mode
make crkbd/rev1:manna-harbour_miryoku -j$(nproc) -e USER_NAME=amodm -e OLED=yes -e OLED_FLIP=yes -e POINTING_DEVICE=cirque40 -e SIDE=right -e MIRYOKU_NAV=VI -e MIRYOKU_MEDIA=VI -e MIRYOKU_MOUSE=VI

# all of the above and switch default alphas to graphite
make crkbd/rev1:manna-harbour_miryoku -j$(nproc) -e USER_NAME=amodm -e OLED=yes -e OLED_FLIP=yes -e POINTING_DEVICE=cirque40 -e SIDE=right -e MIRYOKU_NAV=VI -e MIRYOKU_MEDIA=VI -e MIRYOKU_MOUSE=VI -e MIRYOKU_ALPHAS=GRAPHITE
```
