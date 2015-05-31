#include <stdio.h>
#include "sd_LED3.h"
#include "infoLED.h"
#include "button.h"
#include "delay.h"

void SD_LED3(LED *state){
	static int rememberPress = 0;
	static int counter = 0;
	
	switch(state->stateLED){
		case Initial:
			state->getLEDStatus = LED_OFF;
			if(rememberPress == 0){
				if(pressButton() == 1){
					rememberPress = 1;
					counter = 0;
					state->stateLED = STATE_A;
				}else{
					state->stateLED = Initial;
				}
			}else{
					if(pressButton() == 0){
						rememberPress = 0;
						state->stateLED = Initial;
					}else{
						state->getLEDStatus = LED_OFF;
						state->stateLED = Initial;
					}
			}
			break;
		case STATE_A:	
			if(counter < 5){
				if(pressButton() == 0){
					rememberPress = 1;
				}else{
					rememberPress = 0;
				}
			}else{
				if(pressButton() == 0){
					rememberPress = 0;
				}else{
					rememberPress = 1;
				}
			}
			if(counter >= 5){
				state->stateLED = Initial;
			}else{
				if(delay()>=200){
					state->getLEDStatus = LED_ON;
					state->stateLED = STATE_B;
				}else{
					state->getLEDStatus = LED_OFF;
					state->stateLED = STATE_A;	
				}
			}
			break;
		case STATE_B:		
			if(delay()>=200){
				state->getLEDStatus = LED_OFF;
				state->stateLED = STATE_A;	
				counter = counter + 1;
			}else{
				state->getLEDStatus = LED_ON;
				state->stateLED = STATE_B;
			}	
			break;
	}
}




