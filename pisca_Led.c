#include "pico/stdlib.h"

#define LED_PIN 11
#define BTN_PIN 5

int main() {
    // Inicializa o pino do LED e configura como saída
    gpio_init(LED_PIN);
    gpio_set_dir(LED_PIN, GPIO_OUT);

    // Inicializa o pino do botão e configura como entrada
    gpio_init(BTN_PIN);
    gpio_set_dir(BTN_PIN, GPIO_IN);

    // Loop infinito para verificar o estado do botão e controlar o LED
    
    while (1)
    {
        while(gpio_get(BTN_PIN))
        {
            // Acende o Led se o botão estiver pressionado
            gpio_put(LED_PIN, 1);
        }
        // Apaga o led se o botão não estiver pressionado
            gpio_put(LED_PIN, 0);
    }
}