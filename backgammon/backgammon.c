#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#include "Utilidad.h"
#include "Bicola.h"
#include "vista.h"
#include "funciones.h"
int dado();

int main(){
	srand(time(NULL));
	Bicola Tablero=GenerarTablero();
	int dado1,dado2;
	int jugador1=1,jugador2=2, pasos=5,posicion=1,ganar=0;
	red();
	//ImpBCI(Tablero);
	LimpiarPantalla();
	ImpVagamon(Tablero);
	do{
		do{
			dado1=dado();
			dado2=dado();
			dado1==dado2?printf("TIENES DOBLE DADO, REPITES TURNO\n"):printf("");
			printf("Dado 1:%d\n",dado1);
			printf("Dado 2:%d\n",dado2);
			//JUGADOR 1 mueve a izq por que es el de abajo
			printf("TURNO:    >> JUGADOR  1 <<\n");
			Tablero=Game(Tablero,jugador1,dado1,dado2);
		}while(dado1==dado2);
		do{
			dado1=dado();
			dado2=dado();
			dado1==dado2?printf("TIENES DOBLE DADO, REPITES TURNO\n"):printf("");
			printf("Dado 1:%d\n",dado1);
			printf("Dado 2:%d\n",dado2);
			//JUGADOR 2	mueve a der
			printf("TURNO:    >> JUGADOR  2 <<\n");
			Tablero=Game(Tablero,jugador2,dado1,dado2);
		}while(dado1==dado2);
	}while(1);
	return 0;
}
int dado(){
	return (rand()%6)+1;
}