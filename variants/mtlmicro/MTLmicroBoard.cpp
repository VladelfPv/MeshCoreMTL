#include <Arduino.h>
#include <Wire.h>

#include "MTLmicroBoard.h"

void MTLmicroBoard::begin() {    
    NRF52Board::begin();
    btn_prev_state = HIGH;
  
    pinMode(PIN_VBAT_READ, INPUT);

    nrf_gpio_cfg_input(32, NRF_GPIO_PIN_PULLUP);
    nrf_gpio_cfg_input(33, NRF_GPIO_PIN_PULLUP);
    nrf_gpio_cfg_input(34, NRF_GPIO_PIN_PULLUP);

    #if defined(PIN_BOARD_SDA) && defined(PIN_BOARD_SCL)
      Wire.setPins(PIN_BOARD_SDA, PIN_BOARD_SCL);
    #endif
    
    Wire.begin();

    nrf_gpio_cfg_default(SX126X_POWER_EN);
    nrf_gpio_cfg_output(SX126X_POWER_EN);
    nrf_gpio_pin_write(SX126X_POWER_EN, 1);
    delay(10);   // give sx1262 some time to power up
}