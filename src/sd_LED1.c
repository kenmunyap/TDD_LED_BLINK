#include "sd_LED1.h"
#include "infoLED.h"
#include "delay.h"

void SD_LED1(LED *state){
	
	switch(state->stateLED){
		case Initial:
				state->getLEDStatus = LED_ON;
				state->stateLED = STATE_A;

			break;
		case STATE_A:
			if(delay() >= 120){
				state->getLEDStatus = LED_OFF;
				state->stateLED = STATE_B;
			}else{
				state->getLEDStatus = LED_ON;	
				state->stateLED = STATE_A;
			}
			break;
		case STATE_B:
			if(delay() >= 120){
				state->getLEDStatus = LED_ON;	
				state->stateLED = STATE_A;
			}else{
				state->getLEDStatus = LED_OFF;
				state->stateLED = STATE_B;
			}
			break;
	}
}
