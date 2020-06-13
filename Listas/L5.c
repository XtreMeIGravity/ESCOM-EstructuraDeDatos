#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Lista.h"
int main(int argc,char *argu[]){
	char pal[80],*pal2;
	Lista txt=vacia();
	FILE *body=fopen(*++argu,"r");
	while (fscanf(body,"%s",pal)!=EOF){
		pal2=(char*)malloc(80);
		strcpy(pal2,pal);
		txt=cons(pal2,txt);
	}
	ImpLista(OrdListAsc(txt));
	EstaEn("be",txt);
	fclose(body);
	return 0;
}
