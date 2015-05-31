#include "unity.h"
#include "sd_LED3.h"
#include "mock_delay.h"
#include "mock_button.h"
#include "infoLED.h"


void setUp(void){}



void tearDown(void){}



void test_SD3_Did_not_press_button(void){

 LED led3 = {.stateLED = Initial, .getLEDStatus = LED_OFF};

 pressButton_CMockExpectAndReturn(13, 0);

 SD_LED3(&led3);

 UnityAssertEqualNumber((_U_SINT)((Initial)), (_U_SINT)((led3.stateLED)), (((void *)0)), (_U_UINT)15, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((LED_OFF)), (_U_SINT)((led3.getLEDStatus)), (((void *)0)), (_U_UINT)16, UNITY_DISPLAY_STYLE_INT);

}



void test_SD3_Did_press_button(void){

 LED led3 = {.stateLED = Initial, .getLEDStatus = LED_OFF};



 pressButton_CMockExpectAndReturn(22, 1);

 SD_LED3(&led3);

 UnityAssertEqualNumber((_U_SINT)((STATE_A)), (_U_SINT)((led3.stateLED)), (((void *)0)), (_U_UINT)24, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((LED_OFF)), (_U_SINT)((led3.getLEDStatus)), (((void *)0)), (_U_UINT)25, UNITY_DISPLAY_STYLE_INT);





 pressButton_CMockExpectAndReturn(28, 0);

 delay_CMockExpectAndReturn(29, 200);

 SD_LED3(&led3);

 UnityAssertEqualNumber((_U_SINT)((STATE_B)), (_U_SINT)((led3.stateLED)), (((void *)0)), (_U_UINT)31, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((LED_ON)), (_U_SINT)((led3.getLEDStatus)), (((void *)0)), (_U_UINT)32, UNITY_DISPLAY_STYLE_INT);





 delay_CMockExpectAndReturn(35, 200);

 SD_LED3(&led3);

 UnityAssertEqualNumber((_U_SINT)((STATE_A)), (_U_SINT)((led3.stateLED)), (((void *)0)), (_U_UINT)37, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((LED_OFF)), (_U_SINT)((led3.getLEDStatus)), (((void *)0)), (_U_UINT)38, UNITY_DISPLAY_STYLE_INT);





 pressButton_CMockExpectAndReturn(41, 0);

 delay_CMockExpectAndReturn(42, 200);

 SD_LED3(&led3);

 UnityAssertEqualNumber((_U_SINT)((STATE_B)), (_U_SINT)((led3.stateLED)), (((void *)0)), (_U_UINT)44, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((LED_ON)), (_U_SINT)((led3.getLEDStatus)), (((void *)0)), (_U_UINT)45, UNITY_DISPLAY_STYLE_INT);





 delay_CMockExpectAndReturn(48, 200);

 SD_LED3(&led3);

 UnityAssertEqualNumber((_U_SINT)((STATE_A)), (_U_SINT)((led3.stateLED)), (((void *)0)), (_U_UINT)50, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((LED_OFF)), (_U_SINT)((led3.getLEDStatus)), (((void *)0)), (_U_UINT)51, UNITY_DISPLAY_STYLE_INT);





 pressButton_CMockExpectAndReturn(54, 0);

 delay_CMockExpectAndReturn(55, 200);

 SD_LED3(&led3);

 UnityAssertEqualNumber((_U_SINT)((STATE_B)), (_U_SINT)((led3.stateLED)), (((void *)0)), (_U_UINT)57, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((LED_ON)), (_U_SINT)((led3.getLEDStatus)), (((void *)0)), (_U_UINT)58, UNITY_DISPLAY_STYLE_INT);





 delay_CMockExpectAndReturn(61, 200);

 SD_LED3(&led3);

 UnityAssertEqualNumber((_U_SINT)((STATE_A)), (_U_SINT)((led3.stateLED)), (((void *)0)), (_U_UINT)63, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((LED_OFF)), (_U_SINT)((led3.getLEDStatus)), (((void *)0)), (_U_UINT)64, UNITY_DISPLAY_STYLE_INT);





 pressButton_CMockExpectAndReturn(67, 0);

 delay_CMockExpectAndReturn(68, 200);

 SD_LED3(&led3);

 UnityAssertEqualNumber((_U_SINT)((STATE_B)), (_U_SINT)((led3.stateLED)), (((void *)0)), (_U_UINT)70, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((LED_ON)), (_U_SINT)((led3.getLEDStatus)), (((void *)0)), (_U_UINT)71, UNITY_DISPLAY_STYLE_INT);





 delay_CMockExpectAndReturn(74, 200);

 SD_LED3(&led3);

 UnityAssertEqualNumber((_U_SINT)((STATE_A)), (_U_SINT)((led3.stateLED)), (((void *)0)), (_U_UINT)76, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((LED_OFF)), (_U_SINT)((led3.getLEDStatus)), (((void *)0)), (_U_UINT)77, UNITY_DISPLAY_STYLE_INT);





 pressButton_CMockExpectAndReturn(80, 0);

 delay_CMockExpectAndReturn(81, 200);

 SD_LED3(&led3);

 UnityAssertEqualNumber((_U_SINT)((STATE_B)), (_U_SINT)((led3.stateLED)), (((void *)0)), (_U_UINT)83, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((LED_ON)), (_U_SINT)((led3.getLEDStatus)), (((void *)0)), (_U_UINT)84, UNITY_DISPLAY_STYLE_INT);





 delay_CMockExpectAndReturn(87, 200);

 SD_LED3(&led3);

 UnityAssertEqualNumber((_U_SINT)((STATE_A)), (_U_SINT)((led3.stateLED)), (((void *)0)), (_U_UINT)89, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((LED_OFF)), (_U_SINT)((led3.getLEDStatus)), (((void *)0)), (_U_UINT)90, UNITY_DISPLAY_STYLE_INT);



 pressButton_CMockExpectAndReturn(92, 0);

 SD_LED3(&led3);

 UnityAssertEqualNumber((_U_SINT)((Initial)), (_U_SINT)((led3.stateLED)), (((void *)0)), (_U_UINT)94, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((LED_OFF)), (_U_SINT)((led3.getLEDStatus)), (((void *)0)), (_U_UINT)95, UNITY_DISPLAY_STYLE_INT);



 pressButton_CMockExpectAndReturn(97, 0);

 SD_LED3(&led3);

 UnityAssertEqualNumber((_U_SINT)((Initial)), (_U_SINT)((led3.stateLED)), (((void *)0)), (_U_UINT)99, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((LED_OFF)), (_U_SINT)((led3.getLEDStatus)), (((void *)0)), (_U_UINT)100, UNITY_DISPLAY_STYLE_INT);

}



void test_SD3_Did_press_button_until_5_and_LED_OFF(void){

 LED led3 = {.stateLED = Initial, .getLEDStatus = LED_OFF};



 pressButton_CMockExpectAndReturn(106, 1);

 SD_LED3(&led3);

 UnityAssertEqualNumber((_U_SINT)((STATE_A)), (_U_SINT)((led3.stateLED)), (((void *)0)), (_U_UINT)108, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((LED_OFF)), (_U_SINT)((led3.getLEDStatus)), (((void *)0)), (_U_UINT)109, UNITY_DISPLAY_STYLE_INT);





 pressButton_CMockExpectAndReturn(112, 1);

 delay_CMockExpectAndReturn(113, 200);

 SD_LED3(&led3);

 UnityAssertEqualNumber((_U_SINT)((STATE_B)), (_U_SINT)((led3.stateLED)), (((void *)0)), (_U_UINT)115, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((LED_ON)), (_U_SINT)((led3.getLEDStatus)), (((void *)0)), (_U_UINT)116, UNITY_DISPLAY_STYLE_INT);





 delay_CMockExpectAndReturn(119, 200);

 SD_LED3(&led3);

 UnityAssertEqualNumber((_U_SINT)((STATE_A)), (_U_SINT)((led3.stateLED)), (((void *)0)), (_U_UINT)121, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((LED_OFF)), (_U_SINT)((led3.getLEDStatus)), (((void *)0)), (_U_UINT)122, UNITY_DISPLAY_STYLE_INT);





 pressButton_CMockExpectAndReturn(125, 1);

 delay_CMockExpectAndReturn(126, 200);

 SD_LED3(&led3);

 UnityAssertEqualNumber((_U_SINT)((STATE_B)), (_U_SINT)((led3.stateLED)), (((void *)0)), (_U_UINT)128, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((LED_ON)), (_U_SINT)((led3.getLEDStatus)), (((void *)0)), (_U_UINT)129, UNITY_DISPLAY_STYLE_INT);





 delay_CMockExpectAndReturn(132, 200);

 SD_LED3(&led3);

 UnityAssertEqualNumber((_U_SINT)((STATE_A)), (_U_SINT)((led3.stateLED)), (((void *)0)), (_U_UINT)134, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((LED_OFF)), (_U_SINT)((led3.getLEDStatus)), (((void *)0)), (_U_UINT)135, UNITY_DISPLAY_STYLE_INT);





 pressButton_CMockExpectAndReturn(138, 1);

 delay_CMockExpectAndReturn(139, 200);

 SD_LED3(&led3);

 UnityAssertEqualNumber((_U_SINT)((STATE_B)), (_U_SINT)((led3.stateLED)), (((void *)0)), (_U_UINT)141, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((LED_ON)), (_U_SINT)((led3.getLEDStatus)), (((void *)0)), (_U_UINT)142, UNITY_DISPLAY_STYLE_INT);





 delay_CMockExpectAndReturn(145, 200);

 SD_LED3(&led3);

 UnityAssertEqualNumber((_U_SINT)((STATE_A)), (_U_SINT)((led3.stateLED)), (((void *)0)), (_U_UINT)147, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((LED_OFF)), (_U_SINT)((led3.getLEDStatus)), (((void *)0)), (_U_UINT)148, UNITY_DISPLAY_STYLE_INT);





 pressButton_CMockExpectAndReturn(151, 1);

 delay_CMockExpectAndReturn(152, 200);

 SD_LED3(&led3);

 UnityAssertEqualNumber((_U_SINT)((STATE_B)), (_U_SINT)((led3.stateLED)), (((void *)0)), (_U_UINT)154, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((LED_ON)), (_U_SINT)((led3.getLEDStatus)), (((void *)0)), (_U_UINT)155, UNITY_DISPLAY_STYLE_INT);





 delay_CMockExpectAndReturn(158, 200);

 SD_LED3(&led3);

 UnityAssertEqualNumber((_U_SINT)((STATE_A)), (_U_SINT)((led3.stateLED)), (((void *)0)), (_U_UINT)160, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((LED_OFF)), (_U_SINT)((led3.getLEDStatus)), (((void *)0)), (_U_UINT)161, UNITY_DISPLAY_STYLE_INT);





 pressButton_CMockExpectAndReturn(164, 1);

 delay_CMockExpectAndReturn(165, 200);

 SD_LED3(&led3);

 UnityAssertEqualNumber((_U_SINT)((STATE_B)), (_U_SINT)((led3.stateLED)), (((void *)0)), (_U_UINT)167, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((LED_ON)), (_U_SINT)((led3.getLEDStatus)), (((void *)0)), (_U_UINT)168, UNITY_DISPLAY_STYLE_INT);





 delay_CMockExpectAndReturn(171, 200);

 SD_LED3(&led3);

 UnityAssertEqualNumber((_U_SINT)((STATE_A)), (_U_SINT)((led3.stateLED)), (((void *)0)), (_U_UINT)173, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((LED_OFF)), (_U_SINT)((led3.getLEDStatus)), (((void *)0)), (_U_UINT)174, UNITY_DISPLAY_STYLE_INT);



 pressButton_CMockExpectAndReturn(176, 1);

 SD_LED3(&led3);

 UnityAssertEqualNumber((_U_SINT)((Initial)), (_U_SINT)((led3.stateLED)), (((void *)0)), (_U_UINT)178, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((LED_OFF)), (_U_SINT)((led3.getLEDStatus)), (((void *)0)), (_U_UINT)179, UNITY_DISPLAY_STYLE_INT);



 pressButton_CMockExpectAndReturn(181, 0);

 SD_LED3(&led3);

 UnityAssertEqualNumber((_U_SINT)((Initial)), (_U_SINT)((led3.stateLED)), (((void *)0)), (_U_UINT)183, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((LED_OFF)), (_U_SINT)((led3.getLEDStatus)), (((void *)0)), (_U_UINT)184, UNITY_DISPLAY_STYLE_INT);



 pressButton_CMockExpectAndReturn(186, 1);

 SD_LED3(&led3);

 UnityAssertEqualNumber((_U_SINT)((STATE_A)), (_U_SINT)((led3.stateLED)), (((void *)0)), (_U_UINT)188, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((LED_OFF)), (_U_SINT)((led3.getLEDStatus)), (((void *)0)), (_U_UINT)189, UNITY_DISPLAY_STYLE_INT);

}
