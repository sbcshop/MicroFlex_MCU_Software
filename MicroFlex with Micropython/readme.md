# MicroFlex MCU Boards using MicroPython
Here we will checkout how to use MicroFlex MCU series board with MicroPython.

## 🔧 Configure and Setup Environment
- Download Thonny IDE from [official site](https://thonny.org/) and install into your system. 

### Micro RP2040  
- We will have to install micropython firmware on Micro RP2040 board, for this press and hold onboard boot button then connect to laptop/PC via Type C connector.   
- Now release boot button, it will mount as a Mass Storage Device called RPI-RP2. Download the [MicroPython .UF2 file]() or get latest one from [here](https://micropython.org/download/RPI_PICO/) for Pico. Drag and drop file the onto the RPI-RP2 volume. Your Pico will reboot. You are now running MicroPython.

  <img src="https://github.com/sbcshop/Micro_RP2040/blob/main/Images/firmware_install.gif"  width= "720" height= "382">

- Open example and make sure to check file view helpful for easy access of files between system and Micro RP2040 board. You can run script directly from thonny for testing or save to board as main.py for standalone execution.

  <img src="https://github.com/sbcshop/MicroFlex_MCU_Software/blob/main/images/file_view.png"  width= "958" height= "508">

  <img src="https://github.com/sbcshop/MicroFlex_MCU_Software/blob/main/images/run_script.png"  width= "958" height= "508">

  <img src="https://github.com/sbcshop/MicroFlex_MCU_Software/blob/main/images/save_main.gif"  width= "958" height= "508">
  
- Hello 

<!--
### Micro ESP32 - S3, S2, C3 and C6
- From Board manager install ESP32 and Pico boards as shown below, If boards haven't been installed before, the install button will be activated.

  <img src="https://github.com/sbcshop/MicroFlex_MCU_Software/blob/main/images/b1.png" width="959" height="510">
  <img src="https://github.com/sbcshop/MicroFlex_MCU_Software/blob/main/images/b2.png" width="591" height="333">
  <img src="https://github.com/sbcshop/MicroFlex_MCU_Software/blob/main/images/b3.png" width="585" height="331">
     
## 🚀 Running Examples
Download and open [onboard RGB demo](https://github.com/sbcshop/MicroFlex_MCU_Software/tree/main/MicroFlex%20with%20Arduino%20IDE/RGBLED_Blink) examples provided above for corresponding board or you can open defualt examples available in Arduino IDE.

<img src="https://github.com/sbcshop/MicroFlex_MCU_Software/blob/main/images/esp32_samples.png" width="959" height="510">

-->
