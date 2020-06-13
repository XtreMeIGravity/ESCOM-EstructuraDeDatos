#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#include "TiposDeApuesta.h"
#include "Utilidad.h"
#include "Cuenta.h"
#include "ColaCircular.h"
#include "Ruleta.h"

int main(){
	//Genera ruleta
	Circular roullete=generarRoulette(nuevaC());
	//Generamos la cuenta
	Cuenta Jugador1;
	Jugador1=GenerarCuenta("Pedro",5000);
	do{
		LimpiarPantalla();
		impBienvenido();
		EstatusCuenta(Jugador1);
		Jugador1=NuevoSaldo(Apostando(TipoDeApuesta(),dinerodisponible(Jugador1),roullete));
		EstatusCuenta(Jugador1);
		getchar();
		//Salir
		printf("Si deseas jugar de nuevo presiona enter , caso contrario escribe E y presiona enter\n");
	}while(salir());
}
/*


██████╗ ██╗   ██╗    ██╗  ██╗████████╗██████╗ ███████╗███╗   ███╗███████╗██╗ ██████╗ ██████╗  █████╗ ██╗   ██╗██╗████████╗██╗   ██╗
██╔══██╗╚██╗ ██╔╝    ╚██╗██╔╝╚══██╔══╝██╔══██╗██╔════╝████╗ ████║██╔════╝██║██╔════╝ ██╔══██╗██╔══██╗██║   ██║██║╚══██╔══╝╚██╗ ██╔╝
██████╔╝ ╚████╔╝      ╚███╔╝    ██║   ██████╔╝█████╗  ██╔████╔██║█████╗  ██║██║  ███╗██████╔╝███████║██║   ██║██║   ██║    ╚████╔╝ 
██╔══██╗  ╚██╔╝       ██╔██╗    ██║   ██╔══██╗██╔══╝  ██║╚██╔╝██║██╔══╝  ██║██║   ██║██╔══██╗██╔══██║╚██╗ ██╔╝██║   ██║     ╚██╔╝  
██████╔╝   ██║       ██╔╝ ██╗   ██║   ██║  ██║███████╗██║ ╚═╝ ██║███████╗██║╚██████╔╝██║  ██║██║  ██║ ╚████╔╝ ██║   ██║      ██║   
╚═════╝    ╚═╝       ╚═╝  ╚═╝   ╚═╝   ╚═╝  ╚═╝╚══════╝╚═╝     ╚═╝╚══════╝╚═╝ ╚═════╝ ╚═╝  ╚═╝╚═╝  ╚═╝  ╚═══╝  ╚═╝   ╚═╝      ╚═╝   
                                                                                                                                   

                                                                                                           
*/