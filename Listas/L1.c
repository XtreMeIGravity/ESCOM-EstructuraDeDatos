#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Elem.h"
#include "Lista.h"
int main(int argc,char *argv[]){
	
	FILE *in=fopen(*(argv+1),"r");
	char pal1[80],*pal2;
	Lista pals=vacia();
	while(fscanf(in,"%s",pal1)!=EOF){
		pal2=(char*)malloc(80);
		strcpy(pal2,pal1);
		pals=cons(pal2,pals);
	}
	//Lista x=cons(5,cons(2,cons(3,cons(4,vacia()))));
	//printf("--------Lista 1--------\n");
	//ImpLista(x);
	//printf("No.Elementos:%d\n",NumElem(x));
	//Lista od=OrdListaDes(x);
	printf("\n--------Lista 1 Ordenada Descendentemente--------\n");
	ImpLista(OrdListaDes(pals));
	printf("--------Lista 1 Ordenada Ascendentemente--------\n");
	ImpLista(OrdListaAsc(pals));

	/*printf("\n\nPrueba de Busqueda");
	EstaEn(3,x)?printf("\nCierto\n"):printf("\nFalso\n");
	
	Lista y=cons(5,cons(6,cons(7,cons(8,vacia()))));
	printf("\n--------Lista 2--------\n");
	ImpLista(y);
	printf("No.Elementos:%d\n",NumElem(y));
	
	Lista z=UnirLista(x,y);
	printf("--------Unir Lista--------\n");
	ImpLista(z);
	printf("No.Elementos:%d\n",NumElem(z));
	
	Lista g=InvertirLista(z);
	printf("--------Invertir Lista--------\n");
	ImpLista(g);*/
	
		
	return 0;
}

