/*
 * BoardManager.cpp
 *
 *  Created on: Apr 4, 2026
 *      Author: aniru
 */

#include "BoardManager.h"

BoardManager::BoardManager()
	:led(GPIOB, GPIO_PIN_14), led_wrapper(led)
{}

void BoardManager::execute(){
	led_wrapper.toggle_led();
}
