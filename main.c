/*
 * main.c
 *
 *  Created on: ???/???/????
 *      Author: Ismailia Laptop
 */

#include "types.h"
#include "delay.h"
#include "DIO_utils.h"
#include "DIO_private.h"
#include "DIO_config.h"
#include "DIO_interface.h"

#include "avr/io.h"
#include "avr/delay.h"

int main(void) {


DIO_voidInit();

	//DDRA=1; //configure pin0 of portA as output
 //  PORTA=0; // make low at porta
	while (1) {

		/*PORTA=1; //led on
		_delay_ms(100);
		PORTA=0; //led off
				_delay_ms(100);*/


		DIO_u8WritePinVal(DIO_u8PIN0,1); ///turn on led
		Delay_ms(100);

		DIO_u8WritePinVal(DIO_u8PIN0,0); //turn off led
		Delay_ms(100);


	}
	return 0;
}
