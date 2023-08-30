/*============================================================================
 * Licencia:
 * Autor:       Nahuel Espinosa
 * Fecha:       20/10/2019
 *===========================================================================*/
/** @file
 * @brief	Contiene macros y definiciones para el módulo DHT11
 * 
 * Aqui se definen macros, tipos de datos y declaración de funciones
 */
#ifndef DHT11_H_
#define DHT11_H_

/*==================[inclusiones]============================================*/
#include <stdint.h>

/*==================[macros]=================================================*/
#define PIN_DHT11   PORTBbits.RB0
#define TRIS_DHT11  TRISBbits.TRISB0

/*==================[declaraciones de funciones externas]====================*/
void   dht11_config  (void);
uint8_t    dht11_read    (float *phum, float *ptemp);

/*==================[fin del archivo]========================================*/
#endif /* _DHT11_H_ */
