#include <stdio.h>
#include <stdlib.h>
#include "Lista.h"
int main(int argc,char *argu[]){
	char pal[80];
	Lista txt;
	FILE *body=fopen(*++argu,"r");
	FILE *nuevo=fopen(*(argu+2),"w+");
	while (fscanf(body,"%s",pal)!=EOF){
		txt=cons(pal,txt);
		fprintf(nuevo, "%s\n", pal);
	}
	fclose(body);fclose(nuevo);
	return 0;
}
