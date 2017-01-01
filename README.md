TMK Keyboard Firmware Collection -- Furryburrito fork
=====================================================
Fork of TMK: <http://github.com/tmk/tmk_keyboard>

HOWTO
-------
#### make for HHKB ISO
~~~
LAYOUT=hhkb KEYMAP=iso_mac make
~~~

#### avrdude
~~~
# Check connection to programmer
avrdude -c usbtiny -p m32u4

# Program
avrdude -c usbtiny -p m32u4 -U flash:w:nerd_lufa.hex:i
~~~

Updates
-------
#### 2015/08/31
Added HHKB/NerD60/Mac config.

Caps Lock: `Fn`-`Tab`
Toggle Fn mode: `??`
Jump to bootloader: `LSFT`+`RSFT`+`PAUS` (`PAUS` == `Fn`-`f`)
  see [NerD README](keyboard/nerd/README.md)
