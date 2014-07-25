## VisualArduino

Simple Visual Studio project for Arduino development  
Version 0.0.1


### About

VisualArduino does not support compiling Arduino programs in Visual Studio. It only provides an easy way to write
Arduino programs in Visual Studio, utilising the syntax and error highlighting. With VisualArduino the Arduino programs
are compiled using Arduino IDE.

Contents

+ Visual Studio project for developing Arduino programs
  + Includes single .ino source file
+ *Arduino.h* header file with declarations of most Arduino constants, functions and the Serial class
  + Is automatically included into the .ino source file
  + Conforms to Arduino 1.0.1

The Visual Studio project has been tested with Visual Studio 2013.


### Setup

1. Set up an environment variable *ARDUINO_ROOT* to point to the root of the Arduino installation directory, with **a
   trailing backslash**

2. Copy *Arduino.h* into the root of the Arduino installation directory

3. Copy *Arduino Project.zip* into Visual C++ project template directory. By default, the directory path is
   *%USERPROFILE%\\Documents\\Visual Studio \*\\Templates\\Project Templates\\Visual C++ Project\\*

4. Close all instances of Visual Studio

5. Enable *Use external editor* in the preferences of Arduino IDE


### Usage

*Arduino Project* template can be found at Visual C++ project templates in the *New Project* window of Visual Studio.
