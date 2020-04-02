#include "board.h"
#include "FreeRTOS.h"
#include "task.h"

#define LED_ON  0
#define LED_OFF 1

//Global variables
uint8_t RED_LED= 0;
uint8_t GREEN_LED=1;
uint8_t BLUE_LED=2;

/* Sets up system hardware */
static void prvSetupHardware(void)
{
SystemCoreClockUpdate();
Board_Init();

/* Initial LEDs state is off */
Board_LED_Set(0, LED_OFF);
Board_LED_Set(1, LED_OFF);
Board_LED_Set(2, LED_OFF);
}

/* LED toggle thread */
static void vLED_ToggleTask(void *pvParameters) {

uint8_t LED_Number= *(uint8_t*)pvParameters ;
//If LED is Green(LED_Number 1) ,then Offset delay of 1.5 Second
if(LED_Number==1) {
vTaskDelay(configTICK_RATE_HZ+configTICK_RATE_HZ/2);
}
//If LED is Blue(LED_Number 2) ,then Offset delay of 3 Second
else if(LED_Number==2) {
vTaskDelay(3*configTICK_RATE_HZ);
}

        while (1) {

Board_LED_Set(LED_Number,LED_ON);       // LED on for 1 Second
vTaskDelay(configTICK_RATE_HZ);

Board_LED_Set(LED_Number,LED_OFF);      // LED off for 3.5 Second
vTaskDelay(3*configTICK_RATE_HZ+ configTICK_RATE_HZ/2);

}
}


/*****************************************************************************
 * Public functions
 ****************************************************************************/

int main(void)
{
prvSetupHardware();



/* RED toggle thread */
xTaskCreate(vLED_ToggleTask, (signed char *) "vTaskLed1",
configMINIMAL_STACK_SIZE, (void*)&RED_LED, (tskIDLE_PRIORITY + 3UL),
(xTaskHandle *) NULL);

/* GREEN toggle thread */
xTaskCreate(vLED_ToggleTask, (signed char *) "vTaskLed2",
configMINIMAL_STACK_SIZE, (void*)&GREEN_LED, (tskIDLE_PRIORITY + 2UL),
(xTaskHandle *) NULL);
/* BLUE toggle thread */
xTaskCreate(vLED_ToggleTask, (signed char *) "vTaskLed3",
configMINIMAL_STACK_SIZE, (void*)&BLUE_LED, (tskIDLE_PRIORITY + 1UL),
(xTaskHandle *) NULL);

/* Start the scheduler */
vTaskStartScheduler();

/* Should never arrive here */
return 1;
}
