/*
 * File:   main.c
 * Author: maycol
 *
 * Created on 16 de octubre de 2022, 09:35 PM
 */
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
    STATE_STOP,
    STATE_ADELANTE,
    STATE_ATRAS    
}ROBOT_State_t;
ROBOT_State_t ROBOTState;

//Entradas 
#define BTN_PARE_GetValue()     (PIND &(1<<0))
#define BTN_ADELANTE_GetValue() (PIND &(1<<2))
#define BTN_ATRAS_GetValue()    (PIND &(1<<1))
//Salidas
#define MOTOR1_On()             PORTB |= (1<<0)
#define MOTOR1_Off()            PORTB &= ~(1<<0)
#define MOTOR2_On()             PORTB |= (1<<1)
#define MOTOR2_Off()            PORTB &= ~(1<1)

void PORT_Init(void);
int main(void){
    
    PORT_Init();
    ROBOTState=STATE_INIT;
    while(1){
        switch(ROBOTState){
            case STATE_STOP:
                //SALIDAS
                MOTOR1_Off();
                MOTOR2_Off();
                
                //EVALUAR CONDICIONES
                if(BTN_ADELANTE_GetValue()==0){
                    _delay_ms(10);
                    //Ir STATE_ADELANTE
                    ROBOTState=STATE_ADELANTE;
                }
                else if(BTN_ATRAS_GetValue()==0){
                    _delay_ms(10);
                    //Ir a STATE_ATRAS
                    ROBOTState=STATE_ATRAS;
                    
                }
            break;
            
            case STATE_ATRAS:
                //SALIDAS
                MOTOR1_On();
                MOTOR2_Off();
                //Evaluar la condicion
                if(BTN_PARE_GetValue()==0){
                    _delay_ms(10);
                    //Ir STATE_STOP
                    ROBOTState=STATE_STOP;
                }
            break;
            
            case STATE_ADELANTE:
                //Salidas
                MOTOR1_On();
                MOTOR2_On();
                
                //Evaluar la condicion
                if(BTN_PARE_GetValue()==0){
                    _delay_ms(10);
                    //Ir STATE_STOP
                    ROBOTState=STATE_STOP;
                }
                
            break;
            
            case STATE_INIT:
                MOTOR1_Off();
                MOTOR2_Off();
                
                //Ir a STATE_STOP
                ROBOTState = STATE_STOP;
            break;
            
            
        }
        
    }
}

void PORT_Init(void){
    DDRB &=~((1<<0)|(1<<1)|(1<<2));
    DDRB |= (1<<0)|(1<<1);
    
    
}