#include "unity.h"
#include "sd_LED1.h"
#include "infoLED.h"
#include "mock_delay.h"

void setUp(void){}

void tearDown(void){}

void test_SD1(void)
{
	LED led1 = {.stateLED = Initial, .getLEDStatus = LED_ON};
	//init state
	SD_LED1(&led1);
	TEST_ASSERT_EQUAL(STATE_A, led1.stateLED);
	TEST_ASSERT_EQUAL(LED_ON, led1.getLEDStatus);
	//State A
	delay_ExpectAndReturn(120);
	SD_LED1(&led1);
	TEST_ASSERT_EQUAL(STATE_B, led1.stateLED);
	TEST_ASSERT_EQUAL(LED_OFF, led1.getLEDStatus);
	//State B
	delay_ExpectAndReturn(120);
	SD_LED1(&led1);
	TEST_ASSERT_EQUAL(STATE_A, led1.stateLED);
	TEST_ASSERT_EQUAL(LED_ON, led1.getLEDStatus);
	//State A
	delay_ExpectAndReturn(120);
	SD_LED1(&led1);
	TEST_ASSERT_EQUAL(STATE_B, led1.stateLED);
	TEST_ASSERT_EQUAL(LED_OFF, led1.getLEDStatus);
    //State LESS than 120ms remain state B
	delay_ExpectAndReturn(110);
	SD_LED1(&led1);
	TEST_ASSERT_EQUAL(STATE_B, led1.stateLED);
	TEST_ASSERT_EQUAL(LED_OFF, led1.getLEDStatus);
	
}
