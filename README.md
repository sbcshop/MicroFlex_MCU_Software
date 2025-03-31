# MicroFlex_MCU_Software

Microflex MCUs: A Series of Powerful Microcontroller Boards – an innovative series featuring five distinct microcontroller boards: 𝑬𝑺𝑷32 𝑺3, 𝐸𝑆𝑃32 𝑆2, 𝙀𝑺𝙋32 𝘾3, 𝗘𝗦𝗣𝟯𝟮 𝗖𝟲, and 𝑷𝒊𝒄𝒐 𝑹𝑷2040. Each board is designed to cater to unique application scenarios, providing a versatile solution for your microcontroller needs.

This GitHub provides basic instructions for working with specific MCU boards.
<!--
## Key Features:

| Feature   | Micro S3 | Micro S2 | Micro C3 | Micro C6 | Micro RP2040 |
|-----------|----------|----------|----------|----------|--------------|
| CPU       |       |       |       |       |           |
| Datasheet | [ESP32-S3](https://github.com/sbcshop/MicroFlex_MCU_Software/blob/main/Documents/esp32-s3_datasheet_en.pdf) | [ESP32-S2](https://github.com/sbcshop/MicroFlex_MCU_Software/blob/main/Documents/esp32-s2_datasheet_en.pdf) | [ESP32-C3](https://github.com/sbcshop/MicroFlex_MCU_Software/blob/main/Documents/esp32-c3_datasheet_en.pdf) | [ESP32-C6](https://github.com/sbcshop/MicroFlex_MCU_Software/blob/main/Documents/esp32-c6_datasheet_en.pdf) | [RP2040](https://github.com/sbcshop/MicroFlex_MCU_Software/blob/main/Documents/rp2040-datasheet.pdf) |
-->



<!--
> [!NOTE]
> ESP32-C2 is also supported by Arduino-ESP32 but requires using Arduino as an ESP-IDF component or rebuilding the static libraries.  
> For more information, see the [Arduino as an ESP-IDF component documentation](https://example.com)  
-->

<!--
### 1. Configure and Setup Development Environment
   - Download Arduino IDE from [official site](https://www.arduino.cc/en/software) and install into your system. We have use Arduino IDE 1.8.19
   - Once installation done will add ESP32 S3 board support into IDE, for this first you need to add below link into preference:
     
     ```
     https://raw.githubusercontent.com/espressif/arduino-esp32/gh-pages/package_esp32_index.json
     ```
     Select File > Preference, and add link as show in below image,

     <img src= "https://github.com/sbcshop/3.2_Touchsy_ESP-32_Resistive_Software/blob/main/images/preference_board.gif" />
      
   - Now will install ESP32 based boards as shown in below image,

     <img src= "https://github.com/sbcshop/3.2_Touchsy_ESP-32_Resistive_Software/blob/main/images/install_ESP32boards.gif" />
   
   - You have two Type-C options, use ESP32_USB side to program onboard ESP32 controller and set jumper setting on UHF-ESP. Here Native USB of ESP32 is used, so you will have to press hold BOOT button once and then connect Type C. 

     <img src="https://github.com/sbcshop/Rainy_UHF_ESP32_Software/blob/main/images/uhf_withESP32.png" width="381" height="286">   
   
   - When using USB native you will get COM PORT as shown in below image, and while uploading you can enable CDC Mode to visualize data on serial com port.
     
     <img src="https://github.com/sbcshop/2x2_Display_ESP32_Software/blob/main/images/Native_USB_device_com_port.jpg" width="410" height="93">
     
     <img src="https://github.com/sbcshop/2x2_Display_ESP32_Software/blob/main/images/Native_USB_Arduino_com.jpg" width="" height="">
     
        
### 2. Installing Libraries
   - When compiling sample codes there are some dependency on external libraries sometime which you can add as shown here.
   - For example installing library, for display select Sketch > Include Library > Manage Libraries. We need ST7789 (1.10.3 version) and GFX library (1.11.7 version) for 1.14" TFT Display,

     <img src= "https://github.com/sbcshop/EnkFi_7.5_Software/blob/main/images/Lib_install.png" />

     <img src= "https://github.com/sbcshop/Rainy_UHF_ESP32_Software/blob/main/images/st7789_lib.png" width="589" height="228" />
     <img src= "https://github.com/sbcshop/Rainy_UHF_ESP32_Software/blob/main/images/GFX_lib.png" width="588" height="217" />

   - Similarly you can add more libraries if needed, make sure to install correct version. 


### 3. Testing First Code
   - At this step you are all set to test codes, for easy getting started we have provided various demo [example codes](https://github.com/sbcshop/Rainy_UHF_ESP32_Software/tree/main/examples) in github which you can download and try. 
   - Open one example code in Arduino and make sure you have selected correct board with suitable com port, click on upload button to transfer code on board.
     <img src="https://github.com/sbcshop/StackyFi_Software/blob/main/images/upload_code.gif">
   - Checkout other more examples [here](https://github.com/sbcshop/Rainy_UHF_ESP32_Software/tree/main/examples) and build your own custom program codes using those references.
-->

## Resources
  * [Hardware Files](https://github.com/sbcshop/MicroFlex_MCU_Hardware)
  * [Getting Started with ESP32 in Arduino](https://docs.espressif.com/projects/arduino-esp32/en/latest/)
  * [Arduino IDE 1 overview](https://docs.arduino.cc/software/ide-v1/tutorials/Environment)
       
## Related Products
   * [Rainy UHF Pico Expansion](https://shop.sb-components.co.uk/products/rainypi-uhf-based-on-pico-complete-kit) -  UHF Expansion board easily incorporate Pico/Pico W/Pico 2
   * [Rainy UHF HAT](https://shop.sb-components.co.uk/products/rainy-uhf-pi-hat-complete-kit) - UHF module HAT with Standard 40pin to support Raspberry Pi
   * [Rainy UHF SHIELD](https://shop.sb-components.co.uk/products/rainy-shield-for-arduino-board-complete-kit) - UHF Shield form factor for use with Arduino, Ardi-32, Ardi-Pi, and other compatible boards.
   * [Rainy UHF Breakout](https://shop.sb-components.co.uk/products/rainy-uhf-breakout-complete-kit) - Compact UHF module breakout with Type C for standalone use and TTL for interfacing with various MCU.

## Product License

This is ***open source*** product. Kindly check LICENSE.md file for more information.

Please contact support@sb-components.co.uk for technical support.
<p align="center">
  <img width="360" height="100" src="https://cdn.shopify.com/s/files/1/1217/2104/files/Logo_sb_component_3.png?v=1666086771&width=300">
</p>
