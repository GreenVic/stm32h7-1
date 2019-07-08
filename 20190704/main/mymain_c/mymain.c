#include "mymain.h" 
#include "tim.h"

void Mymain()
{
	HAL_TIM_Base_Start_IT(&htim3);
	while(1)
	{
		
		//HAL_GPIO_TogglePin(GPIOB ,GPIO_PIN_7);
			  
	}
	
}
