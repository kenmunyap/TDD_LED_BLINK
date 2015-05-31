#include "unity.h"
#include "sd_LED3.h"
#include "infoLED.h"
#include "mock_delay.h"
#include "mock_button.h"

void setUp(void){}

void tearDown(void){}

void test_SD3_Did_not_press_button(void){
	LED led3 = {.stateLED = Initial, .getLEDStatus = LED_OFF};
	pressButton_ExpectAndReturn(0);
	SD_LED3(&led3);
	TEST_ASSERT_EQUAL(Initial,led3.stateLED);
	TEST_ASSERT_EQUAL(LED_OFF, led3.getLEDStatus);	
}

void test_SD3_Did_press_button(void){
	LED led3 = {.stateLED = Initial, .getLEDStatus = LED_OFF};
	
	pressButton_ExpectAndReturn(1);
	SD_LED3(&led3);
	TEST_ASSERT_EQUAL(STATE_A,led3.stateLED);
	TEST_ASSERT_EQUAL(LED_OFF, led3.getLEDStatus);
	
	//state A 1
	pressButton_ExpectAndReturn(0);
	delay_ExpectAndReturn(200);
	SD_LED3(&led3);
	TEST_ASSERT_EQUAL(STATE_B,led3.stateLED);
	TEST_ASSERT_EQUAL(LED_ON, led3.getLEDStatus);
	
	//state B 1
	delay_ExpectAndReturn(200);
	SD_LED3(&led3);
	TEST_ASSERT_EQUAL(STATE_A,led3.stateLED);
	TEST_ASSERT_EQUAL(LED_OFF, led3.getLEDStatus);
	
	//state A 2
	pressButton_ExpectAndReturn(0);
	delay_ExpectAndReturn(200);
	SD_LED3(&led3);
	TEST_ASSERT_EQUAL(STATE_B,led3.stateLED);
	TEST_ASSERT_EQUAL(LED_ON, led3.getLEDStatus);
	
	//state B 2
	delay_ExpectAndReturn(200);
	SD_LED3(&led3);
	TEST_ASSERT_EQUAL(STATE_A,led3.stateLED);
	TEST_ASSERT_EQUAL(LED_OFF, led3.getLEDStatus);
	
	//state A 3
	pressButton_ExpectAndReturn(0);
	delay_ExpectAndReturn(200);
	SD_LED3(&led3);
	TEST_ASSERT_EQUAL(STATE_B,led3.stateLED);
	TEST_ASSERT_EQUAL(LED_ON, led3.getLEDStatus);
	
	//state B 3
	delay_ExpectAndReturn(200);
	SD_LED3(&led3);
	TEST_ASSERT_EQUAL(STATE_A,led3.stateLED);
	TEST_ASSERT_EQUAL(LED_OFF, led3.getLEDStatus);
	
	//state A 4
	pressButton_ExpectAndReturn(0);
	delay_ExpectAndReturn(200);
	SD_LED3(&led3);
	TEST_ASSERT_EQUAL(STATE_B,led3.stateLED);
	TEST_ASSERT_EQUAL(LED_ON, led3.getLEDStatus);
	
	//state B 4
	delay_ExpectAndReturn(200);
	SD_LED3(&led3);
	TEST_ASSERT_EQUAL(STATE_A,led3.stateLED);
	TEST_ASSERT_EQUAL(LED_OFF, led3.getLEDStatus);
	
	//state A 5
	pressButton_ExpectAndReturn(0);
	delay_ExpectAndReturn(200);
	SD_LED3(&led3);
	TEST_ASSERT_EQUAL(STATE_B,led3.stateLED);
	TEST_ASSERT_EQUAL(LED_ON, led3.getLEDStatus);
	
	//state B 5
	delay_ExpectAndReturn(200);
	SD_LED3(&led3);
	TEST_ASSERT_EQUAL(STATE_A,led3.stateLED);
	TEST_ASSERT_EQUAL(LED_OFF, led3.getLEDStatus);
	
	pressButton_ExpectAndReturn(0);
	SD_LED3(&led3);
	TEST_ASSERT_EQUAL(Initial,led3.stateLED);
	TEST_ASSERT_EQUAL(LED_OFF, led3.getLEDStatus);
	
	pressButton_ExpectAndReturn(0);
	SD_LED3(&led3);
	TEST_ASSERT_EQUAL(Initial,led3.stateLED);
	TEST_ASSERT_EQUAL(LED_OFF, led3.getLEDStatus);
}

void test_SD3_Did_press_button_until_5_and_LED_OFF(void){
	LED led3 = {.stateLED = Initial, .getLEDStatus = LED_OFF};
	
	pressButton_ExpectAndReturn(1);
	SD_LED3(&led3);
	TEST_ASSERT_EQUAL(STATE_A,led3.stateLED);
	TEST_ASSERT_EQUAL(LED_OFF, led3.getLEDStatus);
	
	//state A 1
	pressButton_ExpectAndReturn(1);
	delay_ExpectAndReturn(200);
	SD_LED3(&led3);
	TEST_ASSERT_EQUAL(STATE_B,led3.stateLED);
	TEST_ASSERT_EQUAL(LED_ON, led3.getLEDStatus);
	
	//state B 1
	delay_ExpectAndReturn(200);
	SD_LED3(&led3);
	TEST_ASSERT_EQUAL(STATE_A,led3.stateLED);
	TEST_ASSERT_EQUAL(LED_OFF, led3.getLEDStatus);
	
	//state A 2
	pressButton_ExpectAndReturn(1);
	delay_ExpectAndReturn(200);
	SD_LED3(&led3);
	TEST_ASSERT_EQUAL(STATE_B,led3.stateLED);
	TEST_ASSERT_EQUAL(LED_ON, led3.getLEDStatus);
	
	//state B 2
	delay_ExpectAndReturn(200);
	SD_LED3(&led3);
	TEST_ASSERT_EQUAL(STATE_A,led3.stateLED);
	TEST_ASSERT_EQUAL(LED_OFF, led3.getLEDStatus);
	
	//state A 3
	pressButton_ExpectAndReturn(1);
	delay_ExpectAndReturn(200);
	SD_LED3(&led3);
	TEST_ASSERT_EQUAL(STATE_B,led3.stateLED);
	TEST_ASSERT_EQUAL(LED_ON, led3.getLEDStatus);
	
	//state B 3
	delay_ExpectAndReturn(200);
	SD_LED3(&led3);
	TEST_ASSERT_EQUAL(STATE_A,led3.stateLED);
	TEST_ASSERT_EQUAL(LED_OFF, led3.getLEDStatus);
	
	//state A 4
	pressButton_ExpectAndReturn(1);
	delay_ExpectAndReturn(200);
	SD_LED3(&led3);
	TEST_ASSERT_EQUAL(STATE_B,led3.stateLED);
	TEST_ASSERT_EQUAL(LED_ON, led3.getLEDStatus);
	
	//state B 4
	delay_ExpectAndReturn(200);
	SD_LED3(&led3);
	TEST_ASSERT_EQUAL(STATE_A,led3.stateLED);
	TEST_ASSERT_EQUAL(LED_OFF, led3.getLEDStatus);
	
	//state A 5
	pressButton_ExpectAndReturn(1);
	delay_ExpectAndReturn(200);
	SD_LED3(&led3);
	TEST_ASSERT_EQUAL(STATE_B,led3.stateLED);
	TEST_ASSERT_EQUAL(LED_ON, led3.getLEDStatus);
	
	//state B 5
	delay_ExpectAndReturn(200);
	SD_LED3(&led3);
	TEST_ASSERT_EQUAL(STATE_A,led3.stateLED);
	TEST_ASSERT_EQUAL(LED_OFF, led3.getLEDStatus);
	
	pressButton_ExpectAndReturn(1);
	SD_LED3(&led3);
	TEST_ASSERT_EQUAL(Initial,led3.stateLED);
	TEST_ASSERT_EQUAL(LED_OFF, led3.getLEDStatus);
	
	pressButton_ExpectAndReturn(0);
	SD_LED3(&led3);
	TEST_ASSERT_EQUAL(Initial,led3.stateLED);
	TEST_ASSERT_EQUAL(LED_OFF, led3.getLEDStatus);
	
	pressButton_ExpectAndReturn(1);
	SD_LED3(&led3);
	TEST_ASSERT_EQUAL(STATE_A,led3.stateLED);
	TEST_ASSERT_EQUAL(LED_OFF, led3.getLEDStatus);
}



