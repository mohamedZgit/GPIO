

//test

/**
  ******************************************************************************
  * @file    main.c
  * @author  mohamed zaghouani
  * @brief   GPIO DRIVER
  * @version V1.0.0
  * @date    17-11-2022
  *****************************************************************************/

/* Includes ------------------------------------------------------------------*/

#include "GPIO.h"
 



int main()
{
   GPIO_Clock_Enable(GPIOD);
   GPIO_Config(GPIOD, PIN12 , OUTPUT, OUTPUT_PUSH_PULL);
  
   while(1)
   {
   }
  
}

/**************************************END OF FILE**************************************/

