void red(){ 
	//	printf("\033[1;31m");
	}
void yellow(){  	
	//printf("\033[1;33m");
	}
void green(){  	
	//printf("\033[0;32m");
	}
void blue(){  	
	//printf("\033[0;34m");
	}
void magenta(){  	
	//printf("\033[0;35m");
	}
void cyan(){  	
	//printf("\033[0;36m");
	}
void resetColor(){	
	//printf("\033[0m");
	}
void LimpiarPantalla(){
	system("cls");
	//system("clear");
}

int salir(){
	char option='\0';
	 option=getchar();
	if(option=='e'||option=='E'){
		return 0;
	}else{
		return 1;
	}
}
void tiempo(int milli_seconds){ 
    // Iniciamos el reloj
    clock_t start_time = clock(); 
    // hacemos un loop hasta que llegue al tiempo deseado
    while (clock() < start_time + milli_seconds); 
}
int dados(int Agitar){
	int randomex,i;
	srand((unsigned) time(NULL));
   	for (i = 0; i < Agitar; i++){
	    randomex=1+rand()%6;
	}
   	return randomex;
}

/*


██████╗ ██╗   ██╗    ██╗  ██╗████████╗██████╗ ███████╗███╗   ███╗███████╗██╗ ██████╗ ██████╗  █████╗ ██╗   ██╗██╗████████╗██╗   ██╗
██╔══██╗╚██╗ ██╔╝    ╚██╗██╔╝╚══██╔══╝██╔══██╗██╔════╝████╗ ████║██╔════╝██║██╔════╝ ██╔══██╗██╔══██╗██║   ██║██║╚══██╔══╝╚██╗ ██╔╝
██████╔╝ ╚████╔╝      ╚███╔╝    ██║   ██████╔╝█████╗  ██╔████╔██║█████╗  ██║██║  ███╗██████╔╝███████║██║   ██║██║   ██║    ╚████╔╝ 
██╔══██╗  ╚██╔╝       ██╔██╗    ██║   ██╔══██╗██╔══╝  ██║╚██╔╝██║██╔══╝  ██║██║   ██║██╔══██╗██╔══██║╚██╗ ██╔╝██║   ██║     ╚██╔╝  
██████╔╝   ██║       ██╔╝ ██╗   ██║   ██║  ██║███████╗██║ ╚═╝ ██║███████╗██║╚██████╔╝██║  ██║██║  ██║ ╚████╔╝ ██║   ██║      ██║   
╚═════╝    ╚═╝       ╚═╝  ╚═╝   ╚═╝   ╚═╝  ╚═╝╚══════╝╚═╝     ╚═╝╚══════╝╚═╝ ╚═════╝ ╚═╝  ╚═╝╚═╝  ╚═╝  ╚═══╝  ╚═╝   ╚═╝      ╚═╝   
                                                                                                                                   

                                                                                                           
*/
