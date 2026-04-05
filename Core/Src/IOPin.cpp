/*
 * IOPin.cpp
 *
 *  Created on: Apr 3, 2026
 *      Author: aniru
 */

#include "IOPin.hpp"

IOPin::IOPin(GPIO_TypeDef *port, uint16_t pin)
	:port(port), pin(pin)
{
	}

void IOPin::toggle(){
	HAL_GPIO_TogglePin(port, pin);
}

