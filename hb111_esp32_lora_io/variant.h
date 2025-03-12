//
//    For HackerBox LoRa I/O Kit from HackerBox 0111:
//    https://hackerboxes.com/products/hackerbox-0111-relay
//
#define HAS_GPS 0
#undef GPS_RX_PIN
#undef GPS_TX_PIN

// #define HAS_SCREEN 0
// #define HAS_SDCARD
// #define SDCARD_USE_SPI1

#define USE_SSD1306

#define I2C_SDA SDA // I2C pins for this board
#define I2C_SCL SCL

#define LED_PIN LED           // add status LED (compatible with core-pcb and DIY targets)
// #define LED_PIN 38     // This is a RGB LED not a standard LED
//#define HAS_NEOPIXEL                         // Enable the use of neopixels
//#define NEOPIXEL_COUNT 1                     // How many neopixels are connected
//#define NEOPIXEL_DATA 38                     // gpio pin used to send data to the neopixels
//#define NEOPIXEL_TYPE (NEO_GRB + NEO_KHZ800) // type of neopixels in use

#define BUTTON_PIN 0 // This is the BOOT button
#define BUTTON_NEED_PULLUP

// #define USE_RF95 // RFM95/SX127x
#define USE_SX1262
//#define USE_SX1280

#define LORA_MISO MISO
#define LORA_SCK SCK
#define LORA_MOSI MOSI
#define LORA_NSS SS

#define LORA_RESET RST
#define LORA_DIO1 DIO1
#define LORA_BUSY BSY

#ifdef USE_SX1262
#define SX126X_CS LORA_NSS
#define SX126X_DIO1 LORA_DIO1
#define SX126X_BUSY LORA_BUSY
#define SX126X_RESET LORA_RESET
#define SX126X_RXEN -1
#define SX126X_TXEN -1
#endif

#ifdef USE_SX1280
#define SX128X_CS LORA_CS
#define SX128X_DIO1 LORA_DIO1
#define SX128X_BUSY 15
#define SX128X_RESET LORA_RESET
#endif

// #define USE_EINK
/*
 * eink display pins
 */
// #define PIN_EINK_CS     13
// #define PIN_EINK_BUSY   2
// #define PIN_EINK_DC     1
// #define PIN_EINK_RES    (-1)
// #define PIN_EINK_SCLK   5
// #define PIN_EINK_MOSI   6