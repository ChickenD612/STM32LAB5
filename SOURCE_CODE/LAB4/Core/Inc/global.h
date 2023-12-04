/*
 * global.h
 *
 *  Created on: Nov 19, 2023
 *      Author: ASUS
 */

#ifndef INC_GLOBAL_H_
#define INC_GLOBAL_H_

#include "main.h"
#include "stdint.h"
#include "software_timer.h"
#include "stdio.h"
#include "uart_communication_fsm.h"
#include "command_parser_fsm.h"
#include "software_timer.h"

extern ADC_HandleTypeDef hadc1;
extern UART_HandleTypeDef huart2;

#define HEADER 					1
#define CMD_RECEIVING			2
#define WAIT_CMD_RST			3
#define SEND_ADC				4

extern int status_cmd;
extern int status_communicate;
extern uint8_t temp;

#endif /* INC_GLOBAL_H_ */
