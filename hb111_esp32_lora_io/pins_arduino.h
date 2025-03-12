#ifndef Pins_Arduino_h
#define Pins_Arduino_h

#include <stdint.h>

#define USB_VID 0x303a
#define USB_PID 0x1001

// The default Wire will be mapped to PMU and RTC
static const uint8_t SDA = 21;
static const uint8_t SCL = 22;

// Default SPI will be mapped to Radio
static const uint8_t MISO = 19;
static const uint8_t SCK = 18;
static const uint8_t MOSI = 23;
static const uint8_t SS = 5;

//IO pins for HackerBox LoRa I/O Board
static const uint8_t NSS = 5;
static const uint8_t RST = 27;
static const uint8_t BSY = 32;
//#define SCK  18
//#define MOSI 23
//#define MISO 19
static const uint8_t DIO1 = 33;
static const uint8_t LED = 2;

// #define SPI_MOSI                    (11)
// #define SPI_SCK                     (14)
// #define SPI_MISO                    (2)
// #define SPI_CS                      (13)

// #define SDCARD_CS                   SPI_CS

#endif /* Pins_Arduino_h */
