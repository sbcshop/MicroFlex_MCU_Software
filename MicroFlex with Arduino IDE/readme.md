# Project Name

## 📑 Table of Contents
1. [Introduction](#introduction)
2. [Features](#features)
3. [Installation](#installation)
4. [Usage](#usage)
5. [Contributing](#contributing)
6. [License](#license)
7. [Contact](#contact)

## 🏁 Introduction
Brief overview of the project...

## ✨ Features
- Feature 1
- Feature 2
- Feature 3

## 🔧 Installation
Steps to install...

## 🚀 Usage
How to use the project...

## 🤝 Contributing
Guidelines for contributing...

## 📜 License
Details about licensing...

## 📩 Contact
Email, social links...


# MicroFlex MCU Boards with Arduino IDE 

## 1. Configure and Setup Development Environment
- Download Arduino IDE from [official site](https://www.arduino.cc/en/software) and install into your system. We have use Arduino IDE 1.8.19
- Once installation done will add ESP32 Series and Pico board support into IDE, for this first you need to add below link into preference:
  
  ```
  https://raw.githubusercontent.com/espressif/arduino-esp32/gh-pages/package_esp32_index.json
  ```

  For Pico boards use below link,
  ```
  https://github.com/earlephilhower/arduino-pico/releases/download/global/package_rp2040_index.json
  ```
  Select File > Preference, and add link as shown in below image then click ok,

  <img src="https://github.com/sbcshop/MicroFlex_MCU_Software/blob/main/images/preference_add.gif" width="" height="">
  
   
- From board manager install ESP32 and Pico boards as shown below, If boards haven't been installed before, the install button will be activated.

  <img src="https://github.com/sbcshop/MicroFlex_MCU_Software/blob/main/images/b1.png" width="959" height="510">
  <img src="https://github.com/sbcshop/MicroFlex_MCU_Software/blob/main/images/b2.png" width="591" height="333">
  <img src="https://github.com/sbcshop/MicroFlex_MCU_Software/blob/main/images/b3.png" width="585" height="331">
     
## 2. Running Examples
### For Micro S3, S2, C3 and C6
- Here Native USB of ESP32 is used, so you will have to press hold BOOT button and then connect Type C for uploading codes. Pressing the BOOT button is not necessary for the subsequent upload; however, if you encounter any problems, repeat the same procedures. 

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


### For Micro RP2040  
- When programming Micro RP2040 with Arduino IDE, you will have to press hold BOOT button and then connect Type C. Here also, pressing the BOOT button is not necessary for the subsequent upload; however, if you encounter any problems, repeat the same procedures.
- For first time port listed as shown below in device manager,

  <img src="https://github.com/sbcshop/MicroFlex_MCU_Software/blob/main/images/rpi_boot_device.png" width="586" height="426">

- Select RP2040 board and Port as UF2 Board,

  <img src="https://github.com/sbcshop/MicroFlex_MCU_Software/blob/main/images/rp2040_board_select.png" width="959" height="511">

  <img src="https://github.com/sbcshop/MicroFlex_MCU_Software/blob/main/images/rpi_port_uf2.png" width="529" height="393">

- Hit upload button and monitor data on serial port, once code uploaded first time then next time board will list with some com port as shown,

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


### 3. Testing First Code
   - At this step you are all set to test codes, for easy getting started we have provided various demo [example codes](https://github.com/sbcshop/Rainy_UHF_ESP32_Software/tree/main/examples) in github which you can download and try. 
   - Open one example code in Arduino and make sure you have selected correct board with suitable com port, click on upload button to transfer code on board.
     <img src="https://github.com/sbcshop/StackyFi_Software/blob/main/images/upload_code.gif">
   - Checkout other more examples [here](https://github.com/sbcshop/Rainy_UHF_ESP32_Software/tree/main/examples) and build your own custom program codes using those references.
-->
