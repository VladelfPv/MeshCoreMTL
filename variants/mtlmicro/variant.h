/*
 * variant.h
 * Copyright (C) 2023 Seeed K.K.
 * MIT License
 */

 #pragma once

 #include "WVariant.h"
 
 ////////////////////////////////////////////////////////////////////////////////
 // Low frequency clock source 

#define VARIANT_MCK       (64000000ul)

//#define USE_LFXO      // 32.768 kHz crystal oscillator
#define USE_LFRC    // 32.768 kHz RC oscillator

////////////////////////////////////////////////////////////////////////////////
// Power

#define PIN_EXT_VCC          (21)
#define EXT_VCC              (PIN_EXT_VCC)

#define BATTERY_PIN          (17)
#define ADC_RESOLUTION       12

////////////////////////////////////////////////////////////////////////////////
// Number of pins

#define PINS_COUNT           (23)
#define NUM_DIGITAL_PINS     (23)
#define NUM_ANALOG_INPUTS    (3)
#define NUM_ANALOG_OUTPUTS   (0)

////////////////////////////////////////////////////////////////////////////////
// UART pin definition
#define PIN_SERIAL1_TX       (-1)
#define PIN_SERIAL1_RX       (-1)

#define PIN_SERIAL2_TX       (4)
#define PIN_SERIAL2_RX       (3)

////////////////////////////////////////////////////////////////////////////////
// I2C pin definition

#define WIRE_INTERFACES_COUNT 1

#define PIN_WIRE_SDA         (8)
#define PIN_WIRE_SCL         (7)
//#define PIN_WIRE1_SDA        (13)
//#define PIN_WIRE1_SCL        (14)

////////////////////////////////////////////////////////////////////////////////
// SPI pin definition

#define SPI_INTERFACES_COUNT 1

#define PIN_SPI_SCK          (12)
#define PIN_SPI_MISO         (15)
#define PIN_SPI_MOSI         (14)

#define PIN_SPI_NSS          (13)

//#define PIN_SPI1_SCK         (18)
//#define PIN_SPI1_MISO        (19)
//#define PIN_SPI1_MOSI        (20)

////////////////////////////////////////////////////////////////////////////////
// GPS
#define GPS_BAUDRATE            9600
#define GPS_RX_PIN              PIN_SERIAL2_RX
#define GPS_TX_PIN              PIN_SERIAL2_TX
#define PIN_GPS_STANDBY         (5)
#define PIN_GPS_EN              (PIN_GPS_STANDBY)

////////////////////////////////////////////////////////////////////////////////
// Builtin LEDs

#define PIN_LED              (-1)
#define LED_PIN              PIN_LED
#define LED_BLUE             PIN_LED
#define LED_BUILTIN          PIN_LED
#define LED_STATE_ON         1

////////////////////////////////////////////////////////////////////////////////
// Builtin buttons

#define PIN_BUTTON1             (-1)  // Menu / User Button
#define PIN_BUTTON2             (-1) // Joystick Up
#define PIN_BUTTON3             (-1) // Joystick Down
#define PIN_BUTTON4             (18) // Joystick Left
#define PIN_BUTTON5             (19) // Joystick Right
#define PIN_BUTTON6             (-1) // Joystick Press
#define PIN_BUTTON7             (6) // Joystick Press

#define PIN_BACK_BTN            PIN_BUTTON1
#define JOYSTICK_UP             PIN_BUTTON2
#define JOYSTICK_DOWN           PIN_BUTTON3
#define JOYSTICK_LEFT           PIN_BUTTON4
#define JOYSTICK_RIGHT          PIN_BUTTON5
#define JOYSTICK_PRESS          PIN_BUTTON6
#define PIN_USER_BTN            PIN_BUTTON7
////////////////////////////////////////////////////////////////////////////////
// Buzzer

#define PIN_VIBRATION           (1)            // P0.8
#define PIN_BUZZER              (0)            // P0.6
