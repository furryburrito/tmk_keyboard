TMK Keyboard Firmware Collection -- Furryburrito fork
=====================================================
Fork of TMK: <http://github.com/tmk/tmk_keyboard>

HOWTO
-------
#### install toolchain
~~~
brew tap osx-cross/avr
brew install avr-libc
~~~

#### install dfu-programmer
~~~
git clone https://github.com/dfu-programmer/dfu-programmer.git
~~~

~~~
brew install autoconf
autoconf && ./configure && make
~~~

#### make for HHKB ISO
~~~
cd keyboard/nerd
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

*  Caps Lock: `Fn`-`Tab`
*  Toggle Fn mode: `??`
*  Jump to bootloader: `LSFT`+`RSFT`+`PAUS` (`PAUS` == `Fn`-`f`)
   *  see [NerD README](keyboard/nerd/README.md)
