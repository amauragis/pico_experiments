
#include "pico/stdlib.h"
#include <stdio.h>

static const uint LEDR_PIN = 16;
static const uint LEDG_PIN = 15;
static const uint LEDB_PIN = 17;

int main()
{
    // setup_default_uart();
    // stdio_init_all();

    const uint LED_PIN = PICO_DEFAULT_LED_PIN;
    gpio_init( LED_PIN );
    gpio_set_dir( LED_PIN, GPIO_OUT );

    gpio_init( LEDR_PIN );
    gpio_set_dir( LEDR_PIN, GPIO_OUT );

    gpio_init( LEDG_PIN );
    gpio_set_dir( LEDG_PIN, GPIO_OUT );

    gpio_init( LEDB_PIN );
    gpio_set_dir( LEDB_PIN, GPIO_OUT );

    while( true )
    {
        gpio_put( LED_PIN, 1 );
        gpio_put( LEDR_PIN, 0 );
        gpio_put( LEDB_PIN, 0 );
        gpio_put( LEDG_PIN, 0 );
        sleep_ms( 1000 );
        gpio_put( LED_PIN, 0 );
        gpio_put( LEDR_PIN, 1 );
        gpio_put( LEDB_PIN, 1 );
        gpio_put( LEDG_PIN, 1 );
        sleep_ms( 750 );
    }
    return 0;
}
