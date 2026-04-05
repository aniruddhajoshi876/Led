/*
 * IOPin.cpp
 *
 *  Created on: Apr 3, 2026
 *      Author: aniru
 */

#include "IOPin.hpp"

IOPin::IOPin(GPIO_TypeDef *port, uint16_t pin)
	:port(GPIOB), pin(GPIO_PIN_14)
{
	}

void IOPin::toggle(){
	HAL_GPIO_TogglePin(port, pin);
}

