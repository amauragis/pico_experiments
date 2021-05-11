cmake_minimum_required(VERSION 3.13)

# initialize the SDK based on PICO_SDK_PATH
# note: this must happen before project()
set(PICO_SDK_PATH "${CMAKE_CURRENT_LIST_DIR}/../pico-sdk")
include(cmake/pico_sdk_import.cmake)

project(test_pi_project)

# initialize the Raspberry Pi Pico SDK
pico_sdk_init()

# rest of your project
add_executable(hello_world
    src/hello_world.c
)

add_executable(blinky
    src/blinky.c
)

add_executable(pwm
    src/blinky_pwm.c
)

# Add pico_stdlib library which aggregates commonly used features
target_link_libraries(hello_world pico_stdlib)
target_link_libraries(blinky pico_stdlib )
target_link_libraries(pwm pico_stdlib hardware_pwm)

# enable usb output, disable uart output
pico_enable_stdio_usb(hello_world 1)
pico_enable_stdio_uart(hello_world 0)

# create map/bin/hex/uf2 file in addition to ELF.
pico_add_extra_outputs(hello_world)
pico_add_extra_outputs(blinky)
pico_add_extra_outputs(pwm)
