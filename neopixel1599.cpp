#include "neopixel1599.h"



nBlock_NeoPixel1599::nBlock_NeoPixel1599(PinName MOSI):_neopixel1599(MOSI){
	
	greenFlag = 0; // initialise all flags to zero
	redFlag = 0;
	blueFlag = 0;
	numberFlag = 0;
	
	
	
}

/**
* @brief    triggerInput()
* @details  When any of the inputs are triggered the the colour variable
*			for the corresponding input number will be updated and its flag
*			raised to show it has been updated.
* @param    Number of the input, value of the input
* @return   NA.
* 
*/


void nBlock_NeoPixel1599::triggerInput(uint32_t inputNumber, uint32_t value){
	
	
	
	if (inputNumber == 0){green = (uint8_t)value;greenFlag = 1;}
	else if(inputNumber == 1){red = (uint8_t)value;redFlag = 1;}
	else if(inputNumber == 2){blue = (uint8_t)value;blueFlag = 1;}
	else if(inputNumber == 3){number = (uint8_t)value; numberFlag = 1;}	
	
}

/**
* @brief    endFrame()
* @details  Once all the flags are raised a function call to the LED library is executed and the accumulated data is sent.
*			The flags prevent a function call every time an input changes which would be incorrect behaviour.
* @param    NA.
* @return   NA.
* 
*/

void nBlock_NeoPixel1599 :: endFrame(void){
	
	if (greenFlag == 1 && redFlag == 1 && blueFlag == 1 && numberFlag == 1){
		
		_neopixel1599.send_colour(green,red,blue,number);
		
		greenFlag = 0;
		redFlag = 0;
		blueFlag = 0;
		numberFlag = 0;
	
	}
	
	
	
}


