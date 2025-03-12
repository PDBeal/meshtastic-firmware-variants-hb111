#ifndef Pins_Arduino_h
#define Pins_Arduino_h

#include <stdint.h>

#define USB_VID 0x303a
#define USB_PID 0x1001

// The default Wire will be mapped to PMU and RTC
static const uint8_t SDA = 5;
static const uint8_t SCL = 6;

// Default SPI will be mapped to Radio
static const uint8_t MISO = 7;
static const uint8_t SCK = 4;
static const uint8_t MOSI = 3;
static const uint8_t SS = 1;

//IO pins for HackerBox LoRa I/O Board
static const uint8_t NSS = 1;
static const uint8_t RST = 0;
static const uint8_t BSY = 10;
//#define SCK  4
//#define MOSI 3
//#define MISO 7
static const uint8_t DIO1 = 20;
static const uint8_t LED = 8;

#endif /* Pins_Arduino_h */
