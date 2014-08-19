## VisualArduino

Simple Visual Studio project for Arduino development  
Version 0.1.2


### About

VisualArduino provides a way to write Arduino programs in Visual Studio, utilising the syntax and error highlighting.
It **DOES NOT** support compiling Arduino programs in Visual Studio, however, and the Arduino IDE is required for
compiling Arduino programs.

VisualArduino supports <a href="http://arduino.cc/en/Main/Software" target="_blank">Arduino 1.0.5</a>.


#### Contents

+ Arduino Project.zip, a Visual Studio project template for writing Arduino programs
  + With single .ino source file
+ Arduino.props, a property sheet for common properties of the microcontroller configurations

The Visual Studio project has been created and tested with Visual Studio 2013.


### Supported Microcontrollers and Boards

+ ATmega8
  + Arduino NG or older
+ ATmega168
  + Arduino Diecimila or Duemilanove
  + Arduino NG or older
  + Arduino Pro or Pro Mini
  + LilyPad Arduino
+ ATmega168 (8 analog inputs)
  + Arduino BT
  + Arduino Mini
  + Arduino Nano
+ ATmega328P
  + Arduino Duemilanove
  + Arduino Ethernet
  + Arduino Pro
  + Arduino Uno
  + LilyPad Arduino
+ ATmega328P (8 analog inputs)
  + Arduino BT
  + Arduino Fio
  + Arduino Mini
  + Arduino Nano
+ ATmega32u4
  + Arduino Esplora
  + Arduino Leonardo
  + Arduino Micro
  + Arduino Robot
  + LilyPad Arduino USB
+ ATmega1280
  + Arduino Mega
+ ATmega2560
  + Arduino Mega 2560
  + Arduino Mega ADK


### Setup

1. Create an environment variable *ARDUINO_ROOT* pointing to the root of the Arduino installation directory, with
   **a trailing backslash**

2. Copy *Arduino.props* into the root of the Arduino installation directory

3. Copy *Arduino Project.zip* into the Visual C++ project template directory. By default, the directory path is
   *%USERPROFILE%\\Documents\\Visual Studio X\\Templates\\Project Templates\\Visual C++ Project\\*

4. Enable *Use external editor* in the Arduino IDE preferences

5. Close all Visual Studio instances


### Usage

The Arduino version used can be defined in the *Arduino.props* file with the preprocessor definition *ARDUINO*. By
default, it is defined as *ARDUINO=105* (1.0.5).

The *Arduino Project* template can be found in Visual C++ project templates in the *New Project* dialog of Visual
Studio.

Select a microcontroller configuration for your program from *Solution Configurations* dropdown list. *8A* after a
microcontroller name denotes to 8 analog inputs. Refer to *Supported Microcontrollers and Boards* list to select the
correct configuration.


### TODO

+ Add support for user made libraries
+ Add support for Arduino 1.5.7 BETA
  + Arduino Yún and Due boards


### License

Copyright 2014 Eetu 'Devenec' Oinasmaa  
Licensed under GNU General Public License
