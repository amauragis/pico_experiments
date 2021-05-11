# pico_experiments

Experiments for the raspberry pi pico.

CMake should generate a UF2 file as part of the build output, which can be
copied on the UF2 bootloader as a USB mass storage device after usb is plugged
in with BOOTSEL held.

Serial output is setup to show as a USB serial device using the SDK cmake
wizardry.  It comes up as a uart running 115200.

## Setup

* Expects the [Raspberry Pi Pico SDK](https://github.com/raspberrypi/pico-sdk)
  to be located at `../pico-sdk` from here.  See CMakeLists.txt.
* On Fedora, probably `dnf install arm-none-eabi-*`
