#include "pico/stdlib.h"
#include <stdio.h>

int main()
{
    // setup_default_uart();
    stdio_init_all();

    const uint LED_PIN = PICO_DEFAULT_LED_PIN;
    gpio_init(LED_PIN);
    gpio_set_dir(LED_PIN, GPIO_OUT);

    while( true )
    {
        gpio_put(LED_PIN, 1);
        printf( "Hello, world!\n" );
        sleep_ms( 1000 );
        gpio_put(LED_PIN, 0);
        sleep_ms(250);
    }
    return 0;
}
