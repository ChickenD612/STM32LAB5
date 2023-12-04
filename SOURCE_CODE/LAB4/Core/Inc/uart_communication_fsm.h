/*
 * uart_communication.h
 *
 *  Created on: Nov 19, 2023
 *      Author: ASUS
 */

#ifndef INC_UART_COMMUNICATION_FSM_H_
#define INC_UART_COMMUNICATION_FSM_H_

#include "command_parser_fsm.h"
#include "global.h"

void uart_communication_fsm();
int is_RST();
int is_OK();

#endif /* INC_UART_COMMUNICATION_FSM_H_ */
