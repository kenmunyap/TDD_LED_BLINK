#ifndef __INFOLED_H
#define __INFOLED_H

typedef enum{
	Initial,
	STATE_A,
	STATE_B,
}State;

typedef enum{
	LED_ON,
	LED_OFF
}Status;

typedef struct{
	State stateLED;
	Status getLEDStatus;
}LED;

#endif //__INFOLED_H


