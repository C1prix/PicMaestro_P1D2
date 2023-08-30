/* 
 * File:   
 * Author: 
 * Comments:
 * Revision history: 
 */

// This is a guard condition so that contents of this file are not included
// more than once.  
#ifndef UART_H
#define	UART_H

#include <xc.h> // include processor files - each processor file is guarded.  

// Configuracion del ADC
void UART_Init(const uint32_t baud_rate);


__bit UART_Data_Ready();


void adc_change_channel(int channel);


void UART_PutC(const char data);


uint8_t UART_GetC();


void UART_Print(const char *data);


#endif	/* ADC_H */
