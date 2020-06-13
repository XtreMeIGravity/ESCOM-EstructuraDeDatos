
Bicola actuar(Bicola Tablero, int jugador,int dado1,int dado2 ){
	int opc,opc2, posicion, pasos;
	if(jugador==1){
		printf("Elige que dado quieres avanzar primero\n");
		printf("- 1) Dado: %d          -\n",dado1);
		printf("- 2) Dado: %d          -\n",dado2);
		scanf("%d",&opc2);
		if(opc2==1){
			printf("Dado1:%d\nDe donde te quieres mover?\n",dado1);
			scanf("%d",&posicion);
			if(validatiroIzq(Tablero,posicion,dado1,jugador)){
				Tablero=MovimientoIzq(Tablero,dado1,posicion,jugador);
			}
			LimpiarPantalla();
			ImpVagamon(Tablero);
			printf("Dado2:%d\nDe donde te quieres mover?\n",dado2);
			scanf("%d",&posicion);
			if(validatiroIzq(Tablero,posicion,dado2,jugador)){
				Tablero=MovimientoIzq(Tablero,dado2,posicion,jugador);
			}
			LimpiarPantalla();
			ImpVagamon(Tablero);
			return Tablero;
		}else if(opc2==2){
			printf("Dado2:%d\nDe donde te quieres mover?\n",dado2);
			scanf("%d",&posicion);
			if(validatiroIzq(Tablero,posicion,dado2,jugador)){
				Tablero=MovimientoIzq(Tablero,dado2,posicion,jugador);
			}
			LimpiarPantalla();
			ImpVagamon(Tablero);
			printf("Dado1:%d\nDe donde te quieres mover?\n",dado1);
			scanf("%d",&posicion);
			if(validatiroIzq(Tablero,posicion,dado1,jugador)){
				Tablero=MovimientoIzq(Tablero,dado1,posicion,jugador);
			}
			LimpiarPantalla();
			ImpVagamon(Tablero);
			return Tablero;
		}
	}else if(jugador==2){
		printf("Elige que dado quieres avanzar primero\n");
		printf("- 1) Dado: %d          -\n",dado1);
		printf("- 2) Dado: %d          -\n",dado2);
		scanf("%d",&opc2);
		if(opc2==1){
			printf("Dado1:%d\nDe donde te quieres mover?\n",dado1);
			scanf("%d",&posicion);
			if(validatiroDer(Tablero,posicion,dado1,jugador)){
				Tablero=MovimientoDer(Tablero,dado1,posicion,jugador);
			}
			
			LimpiarPantalla();
			ImpVagamon(Tablero);
			printf("Dado2:%d\nDe donde te quieres mover?\n",dado2);
			scanf("%d",&posicion);
			if(validatiroDer(Tablero,posicion,dado2,jugador)){
				Tablero=MovimientoDer(Tablero,dado2,posicion,jugador);
			}
			LimpiarPantalla();
			ImpVagamon(Tablero);
			return Tablero;
		}else if(opc2==2){
			printf("Dado2:%d\nDe donde te quieres mover?\n",dado2);
			scanf("%d",&posicion);
			if(validatiroDer(Tablero,posicion,dado2,jugador)){
				Tablero=MovimientoDer(Tablero,dado2,posicion,jugador);
			}
			LimpiarPantalla();
			ImpVagamon(Tablero);
			printf("Dado1:%d\nDe donde te quieres mover?\n",dado1);
			scanf("%d",&posicion);
			if(validatiroDer(Tablero,posicion,dado1,jugador)){
				Tablero=MovimientoDer(Tablero,dado1,posicion,jugador);
			}
			LimpiarPantalla();
			ImpVagamon(Tablero);
			return Tablero;
		}
	}
}
Bicola Game(Bicola tablero,int jugador,int dado1,int dado2 ){
	if(jugador==1){
		//JUGADOR 1
		tablero=actuar(tablero,jugador,dado1,dado2);
		//ImpVagamon(tablero);
		system("pause");
	}else if(jugador==2){
		//JUGADOR 2
		tablero=actuar(tablero,jugador,dado1,dado2);
		//ImpVagamon(tablero);
		system("pause");

	}
	return tablero;
}
Bicola GenerarTablero(){
	Bicola temp=nuevaB();
	int i;
	for (i = 1; i <= 24; ++i){
		if (i==1){
			temp=formarBD(temp,-2);
		}else if (i==6||i==13){
			temp=formarBD(temp,5);
		}else if (i==8){
			temp=formarBD(temp,3);
		}else if (i==12||i==19){
			temp=formarBD(temp,-5);
		}else if (i==17){
			temp=formarBD(temp,-3);
		}else if (i==24){
			temp=formarBD(temp,2);
		}else{
			temp=formarBD(temp,0);
		}
	}
	return temp;
}