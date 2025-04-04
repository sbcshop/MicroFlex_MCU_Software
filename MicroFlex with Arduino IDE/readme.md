# MicroFlex MCU Boards with Arduino IDE 
Here we will checkout how to use MicroFlex MCU series board with Arduino IDE for C/C++ development.

### 📑 Table of Contents
1. [Configure and Setup Environment](https://github.com/sbcshop/MicroFlex_MCU_Software/edit/main/MicroFlex%20with%20Arduino%20IDE/readme.md#-configure-and-setup-environment)
2. [Running Examples](https://github.com/sbcshop/MicroFlex_MCU_Software/edit/main/MicroFlex%20with%20Arduino%20IDE/readme.md#-running-examples)
    * [Micro ESP32 Board](https://github.com/sbcshop/MicroFlex_MCU_Software/edit/main/MicroFlex%20with%20Arduino%20IDE/readme.md#micro-esp32---s3-s2-c3-and-c6)
    * [Micro RP2040](https://github.com/sbcshop/MicroFlex_MCU_Software/edit/main/MicroFlex%20with%20Arduino%20IDE/readme.md#micro-rp2040)
3. [FAQ](https://github.com/sbcshop/MicroFlex_MCU_Software/edit/main/MicroFlex%20with%20Arduino%20IDE/readme.md#faq)

## 🔧 Configure and Setup Environment
- Download Arduino IDE from [official site](https://www.arduino.cc/en/software) and install into your system. We have use Arduino IDE 1.8.19
- Once installation done, add ESP32 Series and Pico board support into IDE, for this first you need to copy below link into Additional Board Manager:
  
  For ESP32 board support,
  ```
  https://raw.githubusercontent.com/espressif/arduino-esp32/gh-pages/package_esp32_index.json
  ```

  For Pico board support,
  ```
  https://github.com/earlephilhower/arduino-pico/releases/download/global/package_rp2040_index.json
  ```
  Select File > Preference > Additional Board Manager URL, add provided links as shown in below image then click ok,

  <img src="https://github.com/sbcshop/MicroFlex_MCU_Software/blob/main/images/preference_add.gif" width="" height="">
  
   
- From Board manager install ESP32 and Pico boards as shown below, If boards haven't been installed before, the install button will be activated.

  <img src="https://github.com/sbcshop/MicroFlex_MCU_Software/blob/main/images/b1.png" width="959" height="510">
  <img src="https://github.com/sbcshop/MicroFlex_MCU_Software/blob/main/images/b2.png" width="591" height="333">
  <img src="https://github.com/sbcshop/MicroFlex_MCU_Software/blob/main/images/b3.png" width="585" height="331">
     
## 🚀 Running Examples
Download and open [onboard RGB demo](https://github.com/sbcshop/MicroFlex_MCU_Software/tree/main/MicroFlex%20with%20Arduino%20IDE/RGBLED_Blink) examples provided above for corresponding board or you can open defualt examples available in Arduino IDE.

<img src="https://github.com/sbcshop/MicroFlex_MCU_Software/blob/main/images/esp32_samples.png" width="959" height="510">

### Micro ESP32 - S3, S2, C3 and C6
- Here Native USB of ESP32 is used, so you will have to press hold BOOT button and then connect Type C for uploading codes. Pressing the BOOT button is not necessary for the subsequent upload; however, if you encounter any problems, repeat the same procedures. For micro S2 version you will have to repeat procedure during each upload.

  <img src="https://github.com/sbcshop/MicroFlex_MCU_Software/blob/main/images/S3_bootBtn.png" width="229" height="184">

- When using USB native you will get COM PORT (maybe different in your case) as shown in below image, and while uploading you can enable CDC Mode to visualize data on serial com port.
  
  <img src="https://github.com/sbcshop/MicroFlex_MCU_Software/blob/main/images/esp32_comport.png" width="583" height="418">
  
- Select correct Micro dev board, 

  <img src="https://github.com/sbcshop/MicroFlex_MCU_Software/blob/main/images/esp32_s3_boardselect.png" width="959" height="509">
  
- Defualt setting to select while uploading codes,
  - **for Micro S3**,

    <img src="https://github.com/sbcshop/MicroFlex_MCU_Software/blob/main/images/s3_default_setting.png" width="493" height="413">

  - **for Micro S2**,

    <img src="https://github.com/sbcshop/MicroFlex_MCU_Software/blob/main/images/s2_default_setting.png" width="493" height="413">

  - **for Micro C3**,

    <img src="https://github.com/sbcshop/MicroFlex_MCU_Software/blob/main/images/c3_default_setting.png" width="493" height="413">

  - **for Micro C6**,

    <img src="https://github.com/sbcshop/MicroFlex_MCU_Software/blob/main/images/c6_default_setting.png" width="493" height="413">

- Once everything all set click on upload button. If example not running after upload, click onboard reset button and execution of code will start.
  
  <img src="https://github.com/sbcshop/MicroFlex_MCU_Software/blob/main/images/esp32_example_upload.png" width="959" height="510">
  
### Micro RP2040  

- When programming Micro RP2040 with Arduino IDE, you will have to press hold BOOT button and then connect Type C. Pressing the BOOT button is not necessary for the subsequent upload; however, if you encounter any problems, repeat the same procedures. 

- For first time port listed as shown below in device manager,

  <img src="https://github.com/sbcshop/MicroFlex_MCU_Software/blob/main/images/rpi_boot_device.png" width="586" height="426">

- Select RP2040 board and Port as UF2 Board,

  <img src="https://github.com/sbcshop/MicroFlex_MCU_Software/blob/main/images/rp2040_board_select.png" width="959" height="511">

  <img src="https://github.com/sbcshop/MicroFlex_MCU_Software/blob/main/images/rpi_port_uf2.png" width="529" height="393">

- With example open hit upload button and monitor data on serial port, once code uploaded first time then next time board will list with some com port as shown,

  <img src="https://github.com/sbcshop/MicroFlex_MCU_Software/blob/main/images/upload_pico.png" width="959" height="510">

  <img src="https://github.com/sbcshop/MicroFlex_MCU_Software/blob/main/images/rpi_port.png" width="516" height="372">

  <img src="https://github.com/sbcshop/MicroFlex_MCU_Software/blob/main/images/serial_monitor_pico.png" width="958" height="510">
          
<!--
### 2. Installing Libraries
   - When compiling sample codes there are some dependency on external libraries sometime which you can add as shown here.
   - For example installing library, for display select Sketch > Include Library > Manage Libraries. We need ST7789 (1.10.3 version) and GFX library (1.11.7 version) for 1.14" TFT Display,

     <img src= "https://github.com/sbcshop/EnkFi_7.5_Software/blob/main/images/Lib_install.png" />

     <img src= "https://github.com/sbcshop/Rainy_UHF_ESP32_Software/blob/main/images/st7789_lib.png" width="589" height="228" />
     <img src= "https://github.com/sbcshop/Rainy_UHF_ESP32_Software/blob/main/images/GFX_lib.png" width="588" height="217" />

   - Similarly you can add more libraries if needed, make sure to install correct version. 
-->

## ❓FAQ

1. On the COM port, the board is not detecting.
    - Check connection is proper or replace Type C cable
    - Reinstall ESP32/Pico board support
    - Try with different USB port of PC/laptop
       
2. No data printing over Serial port.
    - Make sure to enable CDC Mode while uploading code

3. Code is not running even after successful upload.
    - Click onboard reset button or disconnect power and reconnect
    
4. For ESP32 Micro S2 Board keeps disconnecting and reconnecting 
    - Press hold boot button and then connect to USB, now release boot button. You will have to repeat this procedure for every new code upload.
