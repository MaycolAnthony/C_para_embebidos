#include<stdio.h>
#include<stdint.h>
//GSA,GSV RMC GLL
//Trama NMEA de GPS
char GPS_NMEA [100]="$GPGGA,123519,4807.038,N,01131.000,E,3,08,0.9,545.4,M,46.9,M,,*42";

//DECODIFICAR LA TRAMA NMEA
char NMEA_sentencias[10];
char NMEA_tiempoUTC[10];
char NMEA_latitud[10];
char NMEA_norteSur[5];
char NMEA_longitud[10];
char NMEA_esteOeste[5];
char NMEA_fix[5];
char NMEA_satelitesSEG[5];

uint8_t indiceTrama,indice2;

int main(){
	//Imprimir trama NMEA
	printf("%s \n\n",GPS_NMEA);
	
	//decodificacion secuencial
	
	//decodificacion de la cabecera de la trama
	indiceTrama=0;
	indice2=0;
	while(GPS_NMEA[indiceTrama]!=','){
		NMEA_sentencias[indice2]=GPS_NMEA[indiceTrama];
		indiceTrama++;
		indice2++;
	}
	//decodificacion del tiempo UTC
	indiceTrama++;
	indice2=0;
	while(GPS_NMEA[indiceTrama]!=','){
		NMEA_tiempoUTC[indice2]=GPS_NMEA[indiceTrama];
		indice2++;
		indiceTrama++;
	}
	//decodificacion de latitud
	indiceTrama++;
	indice2=0;
	while(GPS_NMEA[indiceTrama]!=','){
		NMEA_latitud[indice2]=GPS_NMEA[indiceTrama];
		indice2++;
		indiceTrama++;
	}
	//decodificacion norte o sur
	indiceTrama++;
	indice2=0;
	while(GPS_NMEA[indiceTrama]!=','){
		NMEA_norteSur[indice2]=GPS_NMEA[indiceTrama];
		indice2++;
		indiceTrama++;
	}
	//decodificacion longitud
	indiceTrama++;
	indice2=0;
	while(GPS_NMEA[indiceTrama]!=','){
		NMEA_longitud[indice2]=GPS_NMEA[indiceTrama];
		indice2++;
		indiceTrama++;
	}
	//decodificacion este oeste
	indiceTrama++;
	indice2=0;
	while(GPS_NMEA[indiceTrama]!=','){
		NMEA_esteOeste[indice2]=GPS_NMEA[indiceTrama];
		indice2++;
		indiceTrama++;
	}
	//decodificacion del fix
	indiceTrama++;
	indice2=0;
	while(GPS_NMEA[indiceTrama]!=','){
		NMEA_fix[indice2]=GPS_NMEA[indiceTrama];
		indice2++;
		indiceTrama++;
	}
	//decodificacion de los satelites en seguimiento
	indiceTrama++;
	indice2=0;
	while(GPS_NMEA[indiceTrama]!=','){
		NMEA_satelitesSEG[indice2]=GPS_NMEA[indiceTrama];
		indice2++;
		indiceTrama++;
	}
	//rESETEO DE VARIABLES 
	indiceTrama=0;
	indice2=0;
	
	//Evalunado al fix
	if(( NMEA_fix[0]=='1')||(NMEA_fix[0]='2')){
		//Datos correctos
		printf("Datos de GPS correctos, puede procesar los datos \n");
		printf("Tipo: %s \n",NMEA_sentencias);
		printf("Timepo UTC: %s \n",NMEA_tiempoUTC);
		printf("Latitud: %s \n",NMEA_latitud);
		printf("Direccion norte sur: %s \n",NMEA_norteSur);
		printf("Longitud: %s \n",NMEA_longitud);
		printf("Direccion Este Oeste%s \n",NMEA_esteOeste);
		printf("%s \n",NMEA_fix);
		printf("%s \n",NMEA_satelitesSEG);
	}
	else{
		//datos no correctos
		printf("Datos no correctos");
	}
	return 0;
	
}