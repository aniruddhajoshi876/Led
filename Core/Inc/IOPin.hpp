/*
 * IOPin.hpp
 *
 *  Created on: Apr 3, 2026
 *      Author: aniru
 */


#ifndef INC_IOPIN_HPP_
#define INC_IOPIN_HPP_
#include "main.h"
#include "gpio.h"


class IOPin{
public:
	IOPin(GPIO_TypeDef *port, uint16_t pin);
	void toggle();
private:
	GPIO_TypeDef *port;
	uint16_t pin;
};



#endif /* INC_IOPIN_HPP_ */
