#include <stdio.h>
#include <stdlib.h>
#include "Lista.h"
int main(int argc,char *argu[]){
	char c;
	FILE *body=fopen(*++argu,"r");
	while ((c=fgetc(body))!=EOF)
		putchar(c);
	return 0;
}