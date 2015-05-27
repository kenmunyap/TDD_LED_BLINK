#include "unity.h"
#include "sd_LED1.h"
#include "mock_delay.h"
#include "infoLED.h"


void setUp(void){}



void tearDown(void){}



void test_SD1(void)

{

 LED led1 = {.stateLED = Initial, .getLEDStatus = LED_ON};



 SD_LED1(&led1);

 UnityAssertEqualNumber((_U_SINT)((STATE_A)), (_U_SINT)((led1.stateLED)), (((void *)0)), (_U_UINT)15, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((LED_ON)), (_U_SINT)((led1.getLEDStatus)), (((void *)0)), (_U_UINT)16, UNITY_DISPLAY_STYLE_INT);



 delay_CMockExpectAndReturn(18, 120);

 SD_LED1(&led1);

 UnityAssertEqualNumber((_U_SINT)((STATE_B)), (_U_SINT)((led1.stateLED)), (((void *)0)), (_U_UINT)20, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((LED_OFF)), (_U_SINT)((led1.getLEDStatus)), (((void *)0)), (_U_UINT)21, UNITY_DISPLAY_STYLE_INT);



 delay_CMockExpectAndReturn(23, 120);

 SD_LED1(&led1);

 UnityAssertEqualNumber((_U_SINT)((STATE_A)), (_U_SINT)((led1.stateLED)), (((void *)0)), (_U_UINT)25, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((LED_ON)), (_U_SINT)((led1.getLEDStatus)), (((void *)0)), (_U_UINT)26, UNITY_DISPLAY_STYLE_INT);



 delay_CMockExpectAndReturn(28, 120);

 SD_LED1(&led1);

 UnityAssertEqualNumber((_U_SINT)((STATE_B)), (_U_SINT)((led1.stateLED)), (((void *)0)), (_U_UINT)30, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((LED_OFF)), (_U_SINT)((led1.getLEDStatus)), (((void *)0)), (_U_UINT)31, UNITY_DISPLAY_STYLE_INT);



 delay_CMockExpectAndReturn(33, 110);

 SD_LED1(&led1);

 UnityAssertEqualNumber((_U_SINT)((STATE_B)), (_U_SINT)((led1.stateLED)), (((void *)0)), (_U_UINT)35, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((LED_OFF)), (_U_SINT)((led1.getLEDStatus)), (((void *)0)), (_U_UINT)36, UNITY_DISPLAY_STYLE_INT);



}
