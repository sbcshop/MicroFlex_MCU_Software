# MicroFlex_MCU_Software
<img src="https://github.com/sbcshop/MicroFlex_MCU_Software/blob/main/images/Main%20Banner.jpg" width="" height="">

Microflex MCUs: A Series of Powerful Microcontroller Boards – an innovative series featuring five distinct microcontroller boards: **ESP32 S3, ESP32 S2, ESP32 C3, ESP32 C6, and Pico RP2040**. Each board is designed to cater to unique application scenarios, providing a versatile solution for your microcontroller needs.

This GitHub provides basic instructions for working with specific MCU boards.

## Key Features:

| Feature          | Micro S3 | Micro S2 | Micro C3 | Micro C6 | Micro RP2040 |
|------------------|----------|----------|----------|----------|--------------|
| CPU              |  Xtensa® Dual-core 32-bit LX7 Microprocessor |  Xtensa® Single-Core 32-bit LX7 Microprocessor  | RISC-V 32-bit single-core Microprocessor | RISC-V 32-bit single-core microprocessor | Dual Cortex M0+ processor |
|Memory            | 384 KB ROM, 512 KB SRAM | 128 KB ROM, 320 KB SRAM | 384KB ROM, 400KB SRAM | 320KB ROM, 512KB HP and 16KB LP SRAM |264kB SRAM, 16kB ROM |
|Flash             | 4MB | 4MB | 4MB | 4MB | 2MB |
|PSRAM             | 2MB | 2MB | - | - | - |
|Frequency         | 240 MHz | 240 MHz | 160 MHz | 160 MHz | 133 MHz |
|WiFi              | IEEE 802.11b/g/n | IEEE 802.11 b/g/n | IEEE 802.11 b/g/n | WiFi 6 2.4GHz band, IEEE 802.11b/g/n/ax | - |
|Bluetooth         | Bluetooth 5.0 | - | Bluetooth 5.0 | Bluetooth 5.3  | - |
|IEEE 802.15.4     | - | - | - | Thread 1.3, Zigbee 3.0 | - |
|Digital Interface | UART, SPI, I2C, PWM or TWAI | UART, SPI, I2C, PWM or TWAI | UART, SPI, I2C, PWM or TWAI | UART, SPI, I2C, PWM or TWAI | UART, SPI, I2C, PWM or PIO  |
|ADC Interface     | 12-bit | 12-bit  | 12-bit | 12-bit | 12-bit |
|DAC               | - | 8-bit | - | - | - |
|Touch Sensor      | 14 | 14 | - | - | - |
|Castellated module| Yes | Yes | Yes | Yes | Yes |
|Datasheet         | [ESP32-S3](https://github.com/sbcshop/MicroFlex_MCU_Software/blob/main/Documents/esp32-s3_datasheet_en.pdf) | [ESP32-S2](https://github.com/sbcshop/MicroFlex_MCU_Software/blob/main/Documents/esp32-s2_datasheet_en.pdf) | [ESP32-C3](https://github.com/sbcshop/MicroFlex_MCU_Software/blob/main/Documents/esp32-c3_datasheet_en.pdf) | [ESP32-C6](https://github.com/sbcshop/MicroFlex_MCU_Software/blob/main/Documents/esp32-c6_datasheet_en.pdf) | [RP2040](https://github.com/sbcshop/MicroFlex_MCU_Software/blob/main/Documents/rp2040-datasheet.pdf) |

## Pinout and Interfacing Details

### Micro S3
<img src="https://github.com/sbcshop/MicroFlex_MCU_Software/blob/main/images/micro_S3_Pinouts.jpg" width="" height="">

<img src="https://github.com/sbcshop/MicroFlex_MCU_Software/blob/main/images/micro_S3_GPIO_info.jpg" width="" height="">


### Micro S2
<img src="https://github.com/sbcshop/MicroFlex_MCU_Software/blob/main/images/micro_S2_Pinouts.jpg" width="" height="">

<img src="https://github.com/sbcshop/MicroFlex_MCU_Software/blob/main/images/micro_S2_GPIO_info.jpg" width="" height="">

### Micro C3
<img src="https://github.com/sbcshop/MicroFlex_MCU_Software/blob/main/images/micro_C3_Pinouts.jpg" width="" height="">

<img src="https://github.com/sbcshop/MicroFlex_MCU_Software/blob/main/images/micro_C3_GPIO_info.jpg" width="" height="">

### Micro C6
<img src="https://github.com/sbcshop/MicroFlex_MCU_Software/blob/main/images/micro_C6_pinout.jpg" width="" height="">

<img src="https://github.com/sbcshop/MicroFlex_MCU_Software/blob/main/images/micro_C6_GPIO_info.jpg" width="" height="">

### Micro RP2040
<img src="https://github.com/sbcshop/MicroFlex_MCU_Software/blob/main/images/micro_RP2040_Pinouts.jpg" width="" height="">

<img src="https://github.com/sbcshop/MicroFlex_MCU_Software/blob/main/images/micro_RP2040_GPIO_info.jpg" width="" height="">


## Getting Started with MicroFlex MCU board
You have multiple options to use MicroFlex series boards with C/C++, Micropython and CircuitPython using IDE like Arduino, Thonny or VScode.
- [MicroFlex Getting Started with Arduino IDE](https://github.com/sbcshop/MicroFlex_MCU_Software/tree/main/MicroFlex%20with%20Arduino%20IDE)
- [MicroFlex Working with Micropython](https://github.com/sbcshop/MicroFlex_MCU_Software/tree/main/MicroFlex%20with%20Micropython)


## Resources
  * [Micro S3](https://github.com/sbcshop/MicroFlex_MCU_Hardware/blob/main/Design%20Data/Micro_S3%20Sch.pdf),  [Micro S2](https://github.com/sbcshop/MicroFlex_MCU_Hardware/blob/main/Design%20Data/Micro_S2%20Sch.pdf), [Micro C3](https://github.com/sbcshop/MicroFlex_MCU_Hardware/blob/main/Design%20Data/Micro_C3%20Sch.pdf), [Micro C6](https://github.com/sbcshop/MicroFlex_MCU_Hardware/blob/main/Design%20Data/Micro_C6%20Sch.pdf), [Micro RP2040 Schematic](https://github.com/sbcshop/MicroFlex_MCU_Hardware/blob/main/Design%20Data/Micro_RP2040%20Sch.pdf)
  * [Hardware Files](https://github.com/sbcshop/MicroFlex_MCU_Hardware)
  * [Arduino IDE 1 overview](https://docs.arduino.cc/software/ide-v1/tutorials/Environment)
  * [ESP32 for Arduino](https://docs.espressif.com/projects/arduino-esp32/en/latest/)
  * [Quick Reference Micropython for Pico](https://docs.micropython.org/en/latest/rp2/quickref.html)
  * [Quick Reference Micropython for ESP32](https://docs.micropython.org/en/latest/esp32/quickref.html)
       
## Related Products  
  
  * [ArdiPi - Uno R3 Alternative Board Based on Pico W](https://shop.sb-components.co.uk/products/ardipi-uno-r3-alternative-board-based-on-pico-w)

    ![ArdiPi](https://shop.sb-components.co.uk/cdn/shop/files/ARDIBACK.jpg?v=1688462154&width=150)

  * [Ardi32 - Uno R3 Alternative Board Based on ESP32-S3-WROOM-1](https://shop.sb-components.co.uk/products/ardi32-uno-r3-alternative-board-based-on-esp32-s3-wroom)

    ![Ardi32](https://shop.sb-components.co.uk/cdn/shop/files/esp321.jpg?v=1688468126&width=150)

  * [PiCoder - Compact DIY Raspberry Pi Pico W Learning Kit](https://shop.sb-components.co.uk/collections/pico-new-releases/products/picoder-compact-diy-raspberry-pi-pico-wh-learning-kit)

    ![PiCoder](https://shop.sb-components.co.uk/cdn/shop/files/shopimg2.jpg?v=1695883740&width=150)

  * [Raspberry Pi Pico Breadboard Kit With Pico 2](https://shop.sb-components.co.uk/products/raspberry-pi-pico-2-breadboard-kit)

    ![Raspberry Pi Pico Breadboard Kit](https://shop.sb-components.co.uk/cdn/shop/files/PICO_BREADBOARD_1.png?v=1726147415&width=150)

       
## Product License

This is ***open source*** product. Kindly check LICENSE.md file for more information.

Please contact support@sb-components.co.uk for technical support.
<p align="center">
  <img width="360" height="100" src="https://cdn.shopify.com/s/files/1/1217/2104/files/Logo_sb_component_3.png?v=1666086771&width=300">
</p>
