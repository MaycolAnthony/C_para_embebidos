//Definir la frecuencia de trabajo
#define F_CPU 16000000UL

//Se incluyen las librerias del compilador (Propias para cada arquitectura)
#include<xc.h>//Librerias necesarias para la MCU AVR
#include<util/delay.h>//Retardos

//Librerias Estandares ANSI C
#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>

//Modelo de datos
typedef enum{
    STATE_INIT=0,
    STATE_AVANZA_CAN,
    STATE_PARE_CAN,
    STATE_AVANZA_SANLUIS,
    STATE_PARE_SANLUIS
    
}SEMAFOROS_State_t;
SEMAFOROS_State_t Decision;

//SALIDAS
//CANADA:
#define LUZ_VERDE_CAN_ON()          PORTB |=(1<<0)
#define LUZ_VERDE_CAN_OFF()         PORTB &=~(1<<0)
#define LUZ_AMBAR_CAN_ON()          PORTB |=(1<<1)
#define LUZ_AMBAR_CAN_OFF()         PORTB &=~(1<<1)
#define LUZ_ROJO_CAN_ON()           PORTB |=(1<<2)
#define LUZ_ROJO_CAN_OFF()          PORTB &=~(1<<2)

//SAN LUIS
#define LUZ_VERDE_SL_ON()          PORTB |=(1<<3)
#define LUZ_VERDE_SL_OFF()         PORTB &=~(1<<3)
#define LUZ_AMBAR_SL_ON()          PORTB |=(1<<4)
#define LUZ_AMBAR_SL_OFF()         PORTB &=~(1<<4)
#define LUZ_ROJO_SL_ON()           PORTB |=(1<<5)
#define LUZ_ROJO_SL_OFF()          PORTB &=~(1<<5)


void PORT_Init(void);

int main(void){
    int i=0;
    PORT_Init();
    Decision=STATE_AVANZA_CAN;
    
    while(1){
       
        for(i;i<=12;i++){
        _delay_ms(50);
        switch(Decision){
            case STATE_AVANZA_CAN:
                LUZ_VERDE_CAN_ON();
                LUZ_AMBAR_CAN_OFF();
                LUZ_ROJO_CAN_OFF();
                LUZ_VERDE_SL_OFF();
                LUZ_ROJO_SL_ON();
                LUZ_AMBAR_SL_OFF(); 
                //EVALUAR CONDICIONES
                if(i==10){
                    Decision=STATE_PARE_CAN;
                }
                break;
            case STATE_PARE_CAN:
                LUZ_VERDE_CAN_OFF();
                LUZ_AMBAR_CAN_ON();
                LUZ_ROJO_CAN_OFF();
                LUZ_VERDE_SL_OFF();
                LUZ_ROJO_SL_ON();
                LUZ_AMBAR_SL_OFF(); 
                //EVALUAR CONDICIONES
                if(i==12){
                    Decision=STATE_AVANZA_SANLUIS;
                    i=0;
                }
                break;
                case STATE_AVANZA_SANLUIS:
                LUZ_VERDE_CAN_OFF();
                LUZ_AMBAR_CAN_OFF();
                LUZ_ROJO_CAN_ON();
                LUZ_VERDE_SL_ON();
                LUZ_ROJO_SL_OFF();
                LUZ_AMBAR_SL_OFF(); 
                //EVALUAR CONDICIONES
                if(i==10){
                    Decision=STATE_PARE_SANLUIS;
                }
                break;
            case STATE_PARE_SANLUIS:
                LUZ_VERDE_CAN_OFF();
                LUZ_AMBAR_CAN_OFF();
                LUZ_ROJO_CAN_ON();
                LUZ_VERDE_SL_OFF();
                LUZ_ROJO_SL_OFF();
                LUZ_AMBAR_SL_ON(); 
                //EVALUAR CONDICIONES
                if(i==12){
                    Decision=STATE_AVANZA_CAN;
                    i=0;
                }
                break;
        }
                    
                  
            
                    
            
        }
    }
}
    
    

void PORT_Init(void){
    DDRB |= (1<<0)|(1<<1)|(1<<2)|(1<<3)|(1<<4)|(1<<5);
   
}

