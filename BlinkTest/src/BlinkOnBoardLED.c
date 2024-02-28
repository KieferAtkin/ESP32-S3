#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "driver/gpio.h"

void BlinkLED()
{
    // Configure onboard LED
    esp_rom_gpio_pad_select_gpio(GPIO_NUM_21);
    gpio_set_direction(GPIO_NUM_21, GPIO_MODE_OUTPUT);

    // Blink the LED
    while (1)
    {

        //////////////////////

        gpio_set_level(GPIO_NUM_21, 1);        // Turn the LED on (high level)
        vTaskDelay(1000 / portTICK_PERIOD_MS); // Delay for 1 second

        gpio_set_level(GPIO_NUM_21, 0);        // Turn the LED off (low level)
        vTaskDelay(1000 / portTICK_PERIOD_MS); // Delay for 1 second

        ///////////////////////

        gpio_set_level(GPIO_NUM_21, 1);       // Turn the LED on (high level)
        vTaskDelay(500 / portTICK_PERIOD_MS); // Delay for 1 second

        gpio_set_level(GPIO_NUM_21, 0);       // Turn the LED off (low level)
        vTaskDelay(500 / portTICK_PERIOD_MS); // Delay for 1 second

        ///////////////////////

        gpio_set_level(GPIO_NUM_21, 1);       // Turn the LED on (high level)
        vTaskDelay(250 / portTICK_PERIOD_MS); // Delay for 1 second

        gpio_set_level(GPIO_NUM_21, 0);       // Turn the LED off (low level)
        vTaskDelay(250 / portTICK_PERIOD_MS); // Delay for 1 second
    }
}