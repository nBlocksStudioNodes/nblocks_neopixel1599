/**
 * @brief       neopixel.h
 * @details     Neopixel node class header file. Node calls the WS2812 intelligent LED library.
 *				Inputs 0-2 determine the colour(GRB) and input 3 determines the number of LEDs to light.
 */
#ifndef __NB_NEOPIXEL
#define __NB_NEOPIXEL

#include "nworkbench.h"
#include "ws2812N.h"

class nBlock_NeoPixel: public nBlockSimpleNode<1> {
public:

	
	
    nBlock_NeoPixel(PinName MOSI);
    void triggerInput(uint32_t inputNumber, uint32_t value);
	void endFrame();
	
   
private:

	ws2812 _neopixel;
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