/*
 * BoardManagerWrapper.c
 *
 *  Created on: Apr 4, 2026
 *      Author: aniru
 */
#include "BoardManagerWrapper.h"
#include "BoardManager.h"

void* bm_create(){
	return new BoardManager();
}

void bm_execute(void* bm){
	return static_cast<BoardManager*>(bm)->execute();
}
