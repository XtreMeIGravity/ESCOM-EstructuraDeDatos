
#include "ElemCuenta.h"

typedef struct CuentaBanco{
	//PropietarioCuenta Propietario;
	Dinero DineroPropietario;
}*Cuenta;

Cuenta GenerarCuenta(PropietarioCuenta nuevoPropietario,Dinero nuevaCantidad){
	Cuenta temp=(Cuenta)malloc(sizeof(struct CuentaBanco));
	//strcpy( temp->Propietario , nuevoPropietario);
	temp->DineroPropietario = nuevaCantidad;
	//ImpNombreCuenta(temp->Propietario);
	ImpDineroCuenta(temp->DineroPropietario);
	return temp;
}
Dinero dinerodisponible(Cuenta acount){
	return acount->DineroPropietario;
}
Cuenta NuevoSaldo(Dinero nuevoSaldo){
	Cuenta temp=(Cuenta)malloc(sizeof(struct CuentaBanco));
	temp->DineroPropietario=nuevoSaldo;
	return temp;
}
void EstatusCuenta(Cuenta temp){
	blue();
	printf("|----------------EstatusCuenta-----------------|\n");
	printf("|----------------------------------------------|\n");
	printf("|        Cuenta        |         Dinero        |\n");
	printf("|----------------------------------------------|\n");
	//ImpDineroCuenta(temp->DineroPropietario);
	printf("|        Jugador1      |         $%05d        |\n",temp->DineroPropietario);
	printf("|----------------------------------------------|\n");
	resetColor();
}

/*


██████╗ ██╗   ██╗    ██╗  ██╗████████╗██████╗ ███████╗███╗   ███╗███████╗██╗ ██████╗ ██████╗  █████╗ ██╗   ██╗██╗████████╗██╗   ██╗
██╔══██╗╚██╗ ██╔╝    ╚██╗██╔╝╚══██╔══╝██╔══██╗██╔════╝████╗ ████║██╔════╝██║██╔════╝ ██╔══██╗██╔══██╗██║   ██║██║╚══██╔══╝╚██╗ ██╔╝
██████╔╝ ╚████╔╝      ╚███╔╝    ██║   ██████╔╝█████╗  ██╔████╔██║█████╗  ██║██║  ███╗██████╔╝███████║██║   ██║██║   ██║    ╚████╔╝ 
██╔══██╗  ╚██╔╝       ██╔██╗    ██║   ██╔══██╗██╔══╝  ██║╚██╔╝██║██╔══╝  ██║██║   ██║██╔══██╗██╔══██║╚██╗ ██╔╝██║   ██║     ╚██╔╝  
██████╔╝   ██║       ██╔╝ ██╗   ██║   ██║  ██║███████╗██║ ╚═╝ ██║███████╗██║╚██████╔╝██║  ██║██║  ██║ ╚████╔╝ ██║   ██║      ██║   
╚═════╝    ╚═╝       ╚═╝  ╚═╝   ╚═╝   ╚═╝  ╚═╝╚══════╝╚═╝     ╚═╝╚══════╝╚═╝ ╚═════╝ ╚═╝  ╚═╝╚═╝  ╚═╝  ╚═══╝  ╚═╝   ╚═╝      ╚═╝   
                                                                                                                                   

                                                                                                           
*/