#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Elmentos.h"
#include "Hash.h"
 
 //.\ElementosQuimicos.exe volcado.txt
int main(int argc, char const *argv[]){
    char pal[80],*simb,simbtemp[50],pal2[80],*nombre,nombretemp[50];
    int i=1, opc, na;
    Hash t=creaTH();
    Elem e,nuevo;
    FILE *Elementoss,*archivoDeSalida;
	Elementoss=fopen("Elementos.txt","r");
	archivoDeSalida=fopen(argv[1],"w+");
    if (archivoDeSalida==NULL) {fputs ("File error",stderr); printf("\nno has dado un nombre de salida\n"); exit (1);}
    //VOLCADO DE ELEMENTOS DE ARCHIVO A TABLA HASH
    while (fscanf(Elementoss,"%s",pal)!=EOF && fscanf(Elementoss,"%s",pal2)!=EOF){
		simb=(char*)malloc(80);
		strcpy(simb,pal);
        nombre=(char*)malloc(80);
		strcpy(nombre,pal2);
        e=recibeElem(i++,simb,nombre);
        insertarEH(t,e);
	}
    //PROGRAMA
    do{
        printf("\nTabla Haash de los elementos\n");
        impHash(t);
        opc=0;
        printf("Que deseas hacer?\n");
        printf("1:Borrar un elemento\n");
        printf("2:Buscar un elemento\n");
        printf("3:Agregar un elemento\n");
        printf("Si deseas salir presiona 0\n");
        scanf("%d",&opc);
        if(opc==1){
            printf("\nOpcion 1: Borrar un elemento\n Introduce el numero atomico\n");
            scanf("%s",&nombretemp);
            t=ElimnaTH(na,t);
        }else if(opc==2){
            printf("\nOpcion 2: Buscar un elemento\n Introduce el numero atomico\n");
            scanf("%d",&na);
            estaEnTH(na,t)?ImpElem(recuperaEH(na,t)):printf("NO ESTA");
            system("pause");
        }else if(opc==3){
            printf("\nOpcion 3: Agregar un elemento\n Introduce el numero atomico\n");
            scanf("%d",&na);
            printf("Introduce su nombre\n");
            scanf("%s",nombretemp);
            printf("Introduce su simbolo\n");
            scanf("%s",simbtemp);
            nuevo=recibeElem(na,simbtemp,nombretemp);
            t=insertarEH(t,nuevo);
        }
        system("cls");
        nombre=NULL,simb=NULL;
    }while(opc);
    //volcado de la tabla a un archivo de texto
    impHashFile(t,archivoDeSalida);
	fclose(Elementoss);
	fclose(archivoDeSalida);
    return 0;
}
