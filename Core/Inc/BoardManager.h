/*
 * BoardManager.h
 *
 *  Created on: Apr 4, 2026
 *      Author: aniru
 */

#ifndef INC_BOARDMANAGER_H_
#define INC_BOARDMANAGER_H_

#include "IOPinwrapper.hpp"

class BoardManager{
public:
	BoardManager();
	void execute();
private:
	IOPin led;
	IOPin_wrapper led_wrapper;
};




#endif /* INC_BOARDMANAGER_H_ */
