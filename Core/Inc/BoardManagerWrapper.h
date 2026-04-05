/*
 * BoardManagerWrapper.h
 *
 *  Created on: Apr 4, 2026
 *      Author: aniru
 */

#ifndef INC_BOARDMANAGERWRAPPER_H_
#define INC_BOARDMANAGERWRAPPER_H_



#ifdef __cplusplus
extern "C"{
#endif

void* bm_create();
void bm_execute(void* bm);

#ifdef __cplusplus
}
#endif


#endif /* INC_BOARDMANAGERWRAPPER_H_ */
