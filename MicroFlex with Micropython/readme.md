# MicroFlex MCU Boards using MicroPython
Here we will checkout how to use MicroFlex MCU series board with MicroPython.

## 🔧 Configure and Setup Environment
- Download Thonny IDE from [official site](https://thonny.org/) and install into your system. 

### Micro RP2040  
- We will have to install micropython firmware on Micro RP2040 board, for this press and hold onboard boot button then connect to laptop/PC via Type C connector.   
- Now release boot button, it will mount as a Mass Storage Device called RPI-RP2. Download the [MicroPython .UF2 file]() or get latest one from [here](https://micropython.org/download/RPI_PICO/) for Pico. Drag and drop file the onto the RPI-RP2 volume. Your Pico will reboot. You are now running MicroPython.

  <img src="https://github.com/sbcshop/Micro_RP2040/blob/main/Images/firmware_install.gif"  width= "720" height= "382">

- Open [example](https://github.com/sbcshop/MicroFlex_MCU_Software/blob/main/MicroFlex%20with%20Micropython/RGBBlink.py) and make sure to check file view helpful for easy access of files between system and Micro RP2040 board. You can run script directly from thonny for testing or save to board as main.py for standalone execution.

  <img src="https://github.com/sbcshop/MicroFlex_MCU_Software/blob/main/images/file_view.png"  width= "958" height= "508">

  <img src="https://github.com/sbcshop/MicroFlex_MCU_Software/blob/main/images/run_script.png"  width= "958" height= "508">

  <img src="https://github.com/sbcshop/MicroFlex_MCU_Software/blob/main/images/save_main.gif"  width= "958" height= "508">
  

### Micro ESP32 - S3, S2, C3 and C6
- For ESP32 based Micro you will need esptool to add MicroPython firmware, dependency is python so first make sure you have install python. You can download python from [official site](https://www.python.org/downloads/).
- Install esptool with pip as shown below,

  <img src="https://github.com/sbcshop/MicroFlex_MCU_Software/blob/main/images/esptool_install.png" width="577" height="112">

- Download firmware provided here in github and open cmd with location into same folder. Connect corresponding micro board and execute flash erase command,

  <img src="https://github.com/sbcshop/MicroFlex_MCU_Software/blob/main/images/esptool_erase_flash.png" width="732" height="240">

- Execute firmware flash command with exact selected firmware for your board, Except for ESP32 S2 write_flash start address is 0.

  <img src="https://github.com/sbcshop/MicroFlex_MCU_Software/blob/main/images/esptool_flash_firmware.png" width="1072" height="382">
  <img src="https://github.com/sbcshop/MicroFlex_MCU_Software/blob/main/images/esptool_flash_firmware_s3.png" width="1072" height="382">
  
- Visit official site to get more info and download latest MicroPython firmware for corresponding board => [Micro S3](https://micropython.org/download/ESP32_GENERIC_S3/), [Micro S2](https://micropython.org/download/ESP32_GENERIC_S2/), [Micro C3](https://micropython.org/download/ESP32_GENERIC_C6/), [Micro C6](https://micropython.org/download/ESP32_GENERIC_C3/)
- Once firmware installed successfully, open [example](https://github.com/sbcshop/MicroFlex_MCU_Software/blob/main/MicroFlex%20with%20Micropython/RGBBlink.py) with thonny and select board as ESP32. Here instead of main.py you will have to save as boot.py,

  <img src="https://github.com/sbcshop/MicroFlex_MCU_Software/blob/main/images/micropython_esp32.png" width="959" height="508">


     
