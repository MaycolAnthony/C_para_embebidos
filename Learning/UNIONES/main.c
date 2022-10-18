#include<stdint.h>
#include<stdio.h>

/*Creamos una struct
typedef struct
{
uint8_t mcus_pic;
uint8_t mcus_avr;
uint16_t mem_eeprom;
uint32_t expander_io;
} IntegratedCircuits_t; 
IntegratedCircuits_t container1;
*/
/*Creamos una union*/ 
typedef union
{
uint8_t mcus_pic;
uint8_t mcus_avr;
uint16_t mem_eeprom;
uint32_t expander_io;
} IntegratedCircuits_t; 
IntegratedCircuits_t container1;
int main(void){
	
	container1.mcus_pic=200;
	printf("MCU PIC: %u\n", container1.mcus_pic);
	container1.mcus_avr=120;
	printf("MCU AVR: %u\n", container1.mcus_avr);
	container1.mem_eeprom=25;
	printf("MCU EPP: %u\n", container1.mem_eeprom);
	container1.expander_io=56;
	printf("MCU EXP: %u\n", container1.expander_io);
	
	

	return 0;
	
}
