/**
* @file Arduino.h
*/

#include "hardware\arduino\cores\arduino\binary.h"

// Special boards. Uncomment to use their functionalities.

//#define ARDUINO_LEONARDO
//#define ARDUINO_MEGA
//#define ARDUINO_MICRO


// Types

typedef bool		   boolean;
typedef unsigned char  byte;
typedef unsigned short word;


// Constants

#define LOW				 0x0
#define HIGH			 0x1

#define INPUT			 0x0
#define OUTPUT			 0x1
#define INPUT_PULLUP	 0x2

#define LSBFIRST		 0
#define MSBFIRST		 1

#define CHANGE			 1
#define FALLING			 2
#define RISING			 3

#define EXTERNAL		 0
#define DEFAULT			 1

#if defined(ARDUINO_MEGA)
	#define INTERNAL1V1	 2
	#define INTERNAL2V56 3
#else
	#define INTERNAL	 3
#endif

#define BIN				 2
#define OCT				 8
#define DEC				 10
#define HEX				 16

// Pins

#if defined(ARDUINO_LEONARDO) || defined(ARDUINO_MICRO)
	#define A0			 18
	#define A1			 19
	#define A2			 20
	#define A3			 21
	#define A4			 22
	#define A5			 23
	#define A6			 24
	#define A7			 25
	#define A8			 26
	#define A9			 27
	#define A10			 28
	#define A11			 29
#elif defined(ARDUINO_MEGA)
	#define A0			 54
	#define A1			 55
	#define A2			 56
	#define A3			 57
	#define A4			 58
	#define A5			 59
	#define A6			 60
	#define A7			 61	
	#define A8			 62
	#define A9			 63
	#define A10			 64
	#define A11			 65
	#define A12			 66
	#define A13			 67
	#define A14			 68
	#define A15			 69
#else
	#define A0			 14
	#define A1			 15
	#define A2			 16
	#define A3			 17
	#define A4			 18
	#define A5			 19
	#define A6			 20
	#define A7			 21
#endif

#define LED_BUILTIN		 13


// Functions

#define abs(value) 0
#define bit(b) 0
#define bitClear(value, bit) 0
#define bitRead(value, bit) 0
#define bitSet(value, bit) 0
#define bitWrite(value, bit, bitValue) 0
#define clockCyclesPerMicrosecond() 0
#define clockCyclesToMicroseconds(a) 0
#define constrain(value, low, high) 0
#define degrees(rad) 0
#define highByte(value) 0
#define lowByte(value) 0
#define max(x, y) 0
#define microsecondsToClockCycles(a) 0
#define min(x, y) 0
#define radians(deg) 0
#define round(value) 0
#define sq(value) 0
#define sqrt(value) 0

int analogRead(unsigned char pin);
void analogReference(unsigned char type);
void analogWrite(unsigned char pin, int value);
void attachInterrupt(unsigned char interrupt, void (*function)(void), int mode);
double cos(float rad);
void delay(unsigned long ms);
void delayMicroseconds(unsigned int us);
void detachInterrupt(unsigned char interrupt);
int digitalRead(unsigned char pin);
void digitalWrite(unsigned char pin, unsigned char value);
void interrupts();
void loop();
long map(long value, long fromLow, long fromHigh, long toLow, long toHigh);
unsigned long micros();
unsigned long millis();
void noInterrupts();
void noTone(unsigned char pin);
void pinMode(unsigned char pin, unsigned char mode);
double pow(float base, float exponent);
unsigned long pulseIn(unsigned char pin, unsigned char value);
unsigned long pulseIn(unsigned char pin, unsigned char value, unsigned long timeout);
long random(long max);
long random(long min, long max);
void randomSeed(unsigned int seed);
void serialEvent();
void setup();
unsigned char shiftIn(unsigned char dataPin, unsigned char clockPin, unsigned char bitOrder);
void shiftOut(unsigned char dataPin, unsigned char clockPin, unsigned char bitOrder, unsigned char value);
double sin(float rad);
double tan(float rad);
void tone(unsigned char pin, unsigned int frequency);
void tone(unsigned char pin, unsigned int frequency, unsigned long duration);


// Classes

class Printable;
class String;

class SerialInterface
{
public:

	int available();
	void begin(unsigned long speed);
	void end();
	bool find(char* target);
	bool findUntil(char* target, char* terminator);
	void flush();
	float parseFloat();
	long parseInt();
	int peek();
	size_t print(char value);
	size_t print(unsigned char value, int format = DEC);
	size_t print(int value, int format = DEC);
	size_t print(unsigned int value, int format = DEC);
	size_t print(long value, int format = DEC);
	size_t print(unsigned long value, int format = DEC);
	size_t print(double value, int precision = 2);
	size_t print(const char* value);
	size_t print(const char[] value);
	size_t print(const String& value);
	size_t print(const Printable&);
	size_t println(char value);
	size_t println(unsigned char value, int format = DEC);
	size_t println(int value, int format = DEC);
	size_t println(unsigned int value, int format = DEC);
	size_t println(long value, int format = DEC);
	size_t println(unsigned long value, int format = DEC);
	size_t println(double value, int precision = 2);
	size_t println(const char* value);
	size_t println(const char[] value);
	size_t println(const String& value);
	size_t println(const Printable&);
	int read();
	size_t readBytes(char* buffer, size_t size);
	size_t readBytesUntil(char terminator, char* buffer, size_t size);
	void setTimeout(unsigned long time);
	size_t write(unsigned char value);
	size_t write(int value);
	size_t write(unsigned int value);
	size_t write(long value);
	size_t write(unsigned long value);
	size_t write(const char* string);
	size_t write(const unsigned char* buffer, size_t size);
	
	bool operator bool() const;
};

extern SerialInterface Serial;

#if defined(ARDUINO_MEGA) || defined(ARDUINO_LEONARDO)
extern SerialInterface Serial1;
#endif

#if defined(ARDUINO_MEGA)
extern SerialInterface Serial2;
extern SerialInterface Serial3;
#endif
