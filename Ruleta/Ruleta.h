void impRoulette(ElemInt numero){
	int p=37;
	printf("                                                                               \n");
	printf("                               @@@@@@@@@@@@@@@@@                               \n");
	printf("                         @@@@%c             ",p);
	red();
	printf("%c",219);
	resetColor();
	printf("     %c%c@@@@                         \n",p,p);
	printf("                     @@@/                ");
	red();
	printf("%c%c%c%c%c",223,219,219,219,223);
	resetColor();
	printf("        /@@@                     \n");
	printf("                  @@@                     ");
	red();
	printf("%c%c%c",223,219,223);
	resetColor();
	printf("             @@@                  \n");
	printf("                @@             @@@@@@@@@@@@@@@@@             @@                \n");
	printf("             *@@          @@%c@   @@@@@@,      @@@@@@@          @@*             \n",p);
	printf("            @@         @&@       @@@@@@,  ");
	asignacolor(numero);
	printf("%02d",numero);
	resetColor();
	printf("  @@@@@@@@@@         &@            \n");
	printf("          @@        /@@%c%c@@       @@@@@,     @@@@@@@    @@/        @@          \n",p,p);
	printf("         @@       /@@&&@@@@@(     @@@@@,    .@@@@@(       @@*       @@         \n");
	printf("        @&       @@   /@@@@@@@    &@@@@@@@@@@@@@@       (@%c%c@@       #@        \n",p,p);
	printf("       @*      (@       /@@@@@@@               @@     /@@@@@@@@(      *@       \n");
	printf("      @@      &@@         /@@            @@@      @@/&@@@@@@@@ @@      @@      \n");
	printf("     @@      @@@@@@@(    *@              @@@        @@@@@@/     @@      @@     \n");
	printf("     @       @@@@@@@@@@@@(            #&/@.          /@          @       @     \n");
	printf("    @@      @@@@@@@@@@@@          @@@@@#&@ @@          @         @@      @@    \n");
	printf("    %c,      @        @@%c   @*   @@@@@@@&@@ @&@@        %c& @@@@@@@@@      *@    \n",p,p,p);
	printf("    @      @@         @   @@@@/       *@@& @@@@@        @@@@@@@@@@@@      @    \n");
	printf("   (@      @@         @       ( *@@@@@   @%c &@@@#       @@@@@@@@@@@@      @(   \n",p);
	printf("   (@      @@@@@@@@@@@@       (@@@@  @   @@@@@@ .       @         @@      @(   \n");
	printf("    @      @@@@@@@@@@@@        @@@@@ @@@,%c,      %c@@@   @         @@      @    \n",p,p);
	printf("    @/      @@@@@@@@%c %c&        @@@@ @@.@@@@@@@    &   &@@,       @      *@    \n",p,p);
	printf("    @@      @@         @          @@ @%c@@@@@@          @@@@@@@@@@@@      @@    \n",p);
	printf("     @       @          @(           @/&(            /@@@@@@@@@@@@       @     \n");
	printf("     @@      @@     /@@@&%c%c       *@@@              @*    (@@@@@%c&      @@     \n",p,p,p);
    printf("      @@      @@ @@@@@@&&@(&@      @@@            @@(         &%c@      @@      \n",p);
    printf("       @#      ,@@@@%c&@@,     @@.             .@@@@@@@&       @*      #@       \n",p);
    printf("        @&       @@@@@(       @@@@@@@@@@@@@@&    @@@@@@@(   @@       #@        \n");
    printf("         @@       /@@       (@@@@@     #@@@@&     /@@@@@@@@@/       @@         \n");
    printf("          @@        /@@    @@@@@@&     #@@@@@       @@@@@@/        @@          \n");
    printf("            @@         @@@@@@@@@@      #@@@@@@       @@@         @@            \n");
    printf("             .@@          &@@@@@@      #@@@@@@   @@@&          @@.             \n");
    printf("                @@             @@@@@@@@@@@@@@@&@             @@                \n");
    printf("                  @@@                                     @@@                  \n");
    printf("                     @@@/                             *@@@                     \n");
    printf("                        @@@@%c                   %c@@@@                         \n",p,p);
    printf("                               &@@@@@@@@@@@@@@@&                               \n");
}
void impBienvenido(){

	green();
	printf(" ____  _                           _     _       \n");
	printf("|  _ \\(_)                         (_)   | |      \n");
	printf("| |_) |_  ___ _ ____   _____ _ __  _  __| | ___  \n");
	printf("|  _ <| |/ _ | '_ \\ \\ / / _ | '_ \\| |/ _\\`|/ _ \\ \n");
	printf("| |_) | |  __| | | \\ V |  __| | | | | (_| | (_) |\n");
	printf("|____/|_|\\___|_| |_|\\_/ \\___|_| |_|_|\\__,_|\\___/ \n");
	printf("                                                 \n");
	resetColor();
}
void impPerdiste(){
	red();
	printf("                     _ _     _       \n");
	printf("  _ __   ___ _ __ __| (_)___| |_ ___ \n");
	printf(" | '_ \\ / _ \\ '__/ _` | / __| __/ _ \\\n");
	printf(" | |_) |  __/ | | (_| | \\__ \\ ||  __/\n");
	printf(" | .__/ \\___|_|  \\__,_|_|___/\\__\\___|\n");
	printf(" |_|                                 \n");
	resetColor();
}
void impGanaste(){
	red();
	printf("   ____                       _       _ \n");
	printf("  / ___| __ _ _ __   __ _ ___| |_ ___| |\n");
	printf(" | |  _ / _` | '_ \\ / _` / __| __/ _ \\ |\n");
	printf(" | |_| | (_| | | | | (_| \\__ \\ ||  __/_|\n");
	printf("  \\____|\\__,_|_| |_|\\__,_|___/\\__\\___(_)\n");
	printf("                                        \n");
	resetColor();
}
void impTernas(){
	printf("|----------------------------------------------|\n");
	printf("|        Opcion        |         TERNA         |\n");
	printf("|----------------------------------------------|\n");
	printf("|           1          |         1|2|3         |\n");
	printf("|----------------------------------------------|\n");
	printf("|           2          |         4|5|6         |\n");
	printf("|----------------------------------------------|\n");
	printf("|           3          |         7|8|9         |\n");
	printf("|----------------------------------------------|\n");
	printf("|           4          |        10|11|12       |\n");
	printf("|----------------------------------------------|\n");
	printf("|           5          |        13|14|15       |\n");
	printf("|----------------------------------------------|\n");
	printf("|           6          |        16|17|18       |\n");
	printf("|----------------------------------------------|\n");
	printf("|           7          |        19|20|21       |\n");
	printf("|----------------------------------------------|\n");
	printf("|           8          |        22|23|24       |\n");
	printf("|----------------------------------------------|\n");
	printf("|           9          |        25|26|27       |\n");
	printf("|----------------------------------------------|\n");
	printf("|           10         |        28|29|30       |\n");
	printf("|----------------------------------------------|\n");
	printf("|           11         |        31|32|33       |\n");
	printf("|----------------------------------------------|\n");
	printf("|           12         |        34|35|36       |\n");
	printf("|----------------------------------------------|\n");
	printf("|------->>    Seleciona una terna     <<-------|\n");
}
void impDocenas(){
	printf("|----------------------------------------------|\n");
	printf("|        Opcion        |        DOCENA         |\n");
	printf("|----------------------------------------------|\n");
	printf("|           1          |          1-12         |\n");
	printf("|----------------------------------------------|\n");
	printf("|           2          |         13-24         |\n");
	printf("|----------------------------------------------|\n");
	printf("|           3          |         25-36         |\n");
	printf("|----------------------------------------------|\n");
	printf("|------->>    Seleciona una docena    <<-------|\n");
}
ElemString TipoDeApuestaString(int opc){
	if (opc==1){
		return "  PAR  ";
	}if (opc==2){
		return " IMPAR ";
	}if (opc==3){
		return " ROJO  ";
	}if (opc==4){
		return " NEGRO ";
	}if (opc==5){
		return "TERNA ";
	}if (opc==6){
		return " DOCENA ";
	}
	return NULL;
}
Circular GirarRuleta(Circular roullete,int TipoA,Dinero apuesta){
   	int i=0;
   	char *TipoAp=NULL;
   	/*Inicializamos random en base al tiempo*/
   	srand((int)time(NULL));
   	int randomex=rand()%60;
	while(i!=randomex){
		i++;
		//Limpiamos Pantalla
		LimpiarPantalla();
		//Rotamos
		roullete=rotar(roullete);
		//Imprimimos
		impRoulette(primerC(roullete));
		//Añadirmos un delay
		tiempo(200);
	}
	//Creamos una variable que nos dira que tipo de apuesta estamos haciendo
	TipoAp=TipoDeApuestaString(TipoA);
	asignacolor(primerC(roullete));
	printf("|--------------------------------------------------|\n");
	printf("|TIPO DE APUESTA: %s          |   $%06d     |\n",TipoAp,apuesta);
	printf("|--------------------------------------------------|\n\n");
	resetColor();
	return roullete;
}
Circular generarRoulette(Circular q1){
	q1=formarC(q1,0);
	q1=formarC(q1,32);
	q1=formarC(q1,15);
	q1=formarC(q1,19);
	q1=formarC(q1,4);
	q1=formarC(q1,21);
	q1=formarC(q1,2);
	q1=formarC(q1,25);
	q1=formarC(q1,17);
	q1=formarC(q1,34);
	q1=formarC(q1,6);
	q1=formarC(q1,27);
	q1=formarC(q1,13);
	q1=formarC(q1,36);
	q1=formarC(q1,11);
	q1=formarC(q1,30);
	q1=formarC(q1,8);
	q1=formarC(q1,23);
	q1=formarC(q1,10);
	q1=formarC(q1,5);
	q1=formarC(q1,24);
	q1=formarC(q1,16);
	q1=formarC(q1,33);
	q1=formarC(q1,1);
	q1=formarC(q1,20);
	q1=formarC(q1,14);
	q1=formarC(q1,31);
	q1=formarC(q1,9);
	q1=formarC(q1,22);
	q1=formarC(q1,18);
	q1=formarC(q1,29);
	q1=formarC(q1,7);
	q1=formarC(q1,28);
	q1=formarC(q1,12);
	q1=formarC(q1,35);
	q1=formarC(q1,3);
	q1=formarC(q1,26);
	return q1;
}
int Apostando(int TipoA, Dinero SaldoDisp,Circular roullete){
	int apuesta=0;
	int ternaLeer=1;
	int docenaLeer=1;	
	printf("Introduce la cantidad que deseas apostar.\n");
	scanf("%d",&apuesta);
	
	if(SaldoDisp>=apuesta&&TipoA>0&&TipoA<=6&&apuesta>0){
		switch(TipoA){
		///PARES:es una comparacion estricta//
		case 1:
			//Giramos ruleta
			roullete=GirarRuleta(roullete,TipoA,apuesta);
			//restamos la apuesta
			SaldoDisp=SaldoDisp-apuesta;
			if (esPar(primerC(roullete))){
				impGanaste();
				return SaldoDisp+apuesta*2;
			}else{
				impPerdiste();
				return SaldoDisp;
			}
		break;
		///IMPARES:es una comparacion basada en lo que no son pares entonces tenemos que añadir que sea diferente de 0 esto en la funcion ///
		case 2:
			//Giramos ruleta
			roullete=GirarRuleta(roullete,TipoA,apuesta);
			//restamos la apuesta
			SaldoDisp=SaldoDisp-apuesta;
			if (esImpar(primerC(roullete))){
				impGanaste();
				return SaldoDisp+apuesta*2;
			}else{
				impPerdiste();
				return SaldoDisp;
			}
		break;
		///Rojos:es una comparacion estricta//
		case 3:
		//Giramos ruleta
			roullete=GirarRuleta(roullete,TipoA,apuesta);
			//restamos la apuesta
			SaldoDisp=SaldoDisp-apuesta;
			if (esRojo(primerC(roullete))){
				impGanaste()	;
				return SaldoDisp+apuesta*2;
			}else{
				impPerdiste();
				return SaldoDisp;
			}
		break;
		///Negros:es una comparacion basada en  los que no son rojos pero tenemos que añadir diferente de 0 esto en la funcion //
		case 4:
			//Giramos ruleta
			roullete=GirarRuleta(roullete,TipoA,apuesta);
			//restamos la apuesta
			SaldoDisp=SaldoDisp-apuesta;
			if (esNegro(primerC(roullete))){
				impGanaste()	;
				return SaldoDisp+apuesta*2;
			}else{
				impPerdiste();
				return SaldoDisp;
			}
		break;
		case 5:		
			//do{
				impTernas();
				scanf("%d",&ternaLeer);
				if (ternaLeer>0&&ternaLeer<=12){
					//Giramos ruleta
					roullete=GirarRuleta(roullete,TipoA,apuesta);
					//restamos la apuesta
					SaldoDisp=SaldoDisp-apuesta;
					if (esTerna(primerC(roullete),ternaLeer)){
						impGanaste();
						return SaldoDisp+apuesta*12;
					}else{
						impPerdiste();
						return SaldoDisp;
					}
				}else{
					printf("Seleciona una terna valida\n");
					getchar();
					return SaldoDisp;
				}
			//}while(ternaLeer>0&&ternaLeer<=12);
		break;
		case 6:
			//do{
				impDocenas();
				scanf("%d",&docenaLeer);
				if (docenaLeer>0&&docenaLeer<=3){
					//Giramos ruleta
					roullete=GirarRuleta(roullete,TipoA,apuesta);
					//restamos la apuesta
					SaldoDisp=SaldoDisp-apuesta;
					if (esDocena(primerC(roullete),docenaLeer)){
						impGanaste();
						return SaldoDisp+apuesta*3;
					}else{
						impPerdiste();
						return SaldoDisp;
					}
				}else{
					printf("Seleciona una Docena valida\n");
					getchar();
					return SaldoDisp;
				}
			//}while(docenaLeer<0&&docenaLeer>=3);
			break;
		}
	}else{
		red();
		printf("|------------------------------------------------------------------|\n");
		printf("|No cubres el costo de la Apuesta. O selecionaste un tipo no valido|\n");
		printf("|------------------------------------------------------------------|\n\n");
		resetColor();
		getchar();
		return SaldoDisp;
	}
}
int TipoDeApuesta(){
	int TipoA=0;
	cyan();
	printf("|----------------------------------------------|\n");
	printf("|        Opcion        |    Tipo de Apuesta    |\n");
	printf("|----------------------------------------------|\n");
	printf("|           1          |         PAR           |\n");
	printf("|----------------------------------------------|\n");
	printf("|           2          |         IMPAR         |\n");
	printf("|----------------------------------------------|\n");
	printf("|           3          |         ROJO          |\n");
	printf("|----------------------------------------------|\n");
	printf("|           4          |         NEGRO         |\n");
	printf("|----------------------------------------------|\n");
	printf("|           5          |         TERNA         |\n");
	printf("|----------------------------------------------|\n");
	printf("|           6          |         DOCENA        |\n");
	printf("|----------------------------------------------|\n");
	printf("|------->>Seleciona un tipo de apuesta<<-------|\n");
	resetColor();
	scanf("%d",&TipoA);
	return TipoA;
}
/*


printf("██████╗ ██╗   ██╗    ██╗  ██╗████████╗██████╗ ███████╗███╗   ███╗███████╗██╗ ██████╗ ██████╗  █████╗ ██╗   ██╗██╗████████╗██╗   ██╗\n");
printf("██╔══██╗╚██╗ ██╔╝    ╚██╗██╔╝╚══██╔══╝██╔══██╗██╔════╝████╗ ████║██╔════╝██║██╔════╝ ██╔══██╗██╔══██╗██║   ██║██║╚══██╔══╝╚██╗ ██╔╝\n");
printf("██████╔╝ ╚████╔╝      ╚███╔╝    ██║   ██████╔╝█████╗  ██╔████╔██║█████╗  ██║██║  ███╗██████╔╝███████║██║   ██║██║   ██║    ╚████╔╝ \n");
printf("██╔══██╗  ╚██╔╝       ██╔██╗    ██║   ██╔══██╗██╔══╝  ██║╚██╔╝██║██╔══╝  ██║██║   ██║██╔══██╗██╔══██║╚██╗ ██╔╝██║   ██║     ╚██╔╝  \n");
printf("██████╔╝   ██║       ██╔╝ ██╗   ██║   ██║  ██║███████╗██║ ╚═╝ ██║███████╗██║╚██████╔╝██║  ██║██║  ██║ ╚████╔╝ ██║   ██║      ██║   \n");
printf("╚═════╝    ╚═╝       ╚═╝  ╚═╝   ╚═╝   ╚═╝  ╚═╝╚══════╝╚═╝     ╚═╝╚══════╝╚═╝ ╚═════╝ ╚═╝  ╚═╝╚═╝  ╚═╝  ╚═══╝  ╚═╝   ╚═╝      ╚═╝   \n");


printf(".##..##...####...##.......####...................######.\n");
printf(".##..##..##..##..##......##..##............##.......##..\n");
printf(".######..##..##..##......######....................###..\n");
printf(".##..##..##..##..##......##..##............##........##.\n");
printf(".##..##...####...######..##..##..................#####..\n");
printf("........................................................\n");

                                                                                                                          

                                                                                                           
*/
