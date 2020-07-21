/**
 * @brief       neopixel1599.h
 * @details     Neopixel1599 node class header file. Node calls the WS2812 intelligent LED library.
 *				Input 0    : 3 values per led in a single uint32_t number 
 *              Parameter 1: MOSIneopixel PinName
 *              Parameter 2: Number of LEDs
 */
#ifndef __NB_NEOPIXEL1599
#define __NB_NEOPIXEL1599

#include "nworkbench.h"
#include "ws2812N.h"

class nBlock_NeoPixel1599: public nBlockSimpleNode<1> {
public:

	
	
    nBlock_NeoPixel1599(PinName MOSI);
    void triggerInput(uint32_t inputNumber, uint32_t value);
	void endFrame();
	
   
private:

	ws2812 _neopixel1599;
	uint8_t green;
    uint8_t red;
    uint8_t blue;
    uint8_t number;
	uint8_t greenFlag;
	uint8_t redFlag;
	uint8_t blueFlag;
    uint8_t numberFlag;
	
};

#endif