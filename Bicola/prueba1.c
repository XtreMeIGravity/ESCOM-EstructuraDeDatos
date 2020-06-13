#include <stdio.h>
#include <stdlib.h>

#include "Bicola.h"

int main(){
	Bicola biQue=nuevaB();
	esNuevaB(biQue)?printf("\tSi\n"):printf("\tNo\n");
	int i;
	for (i = 1; i <= 10; ++i){
		biQue=formarBD(biQue,i);
	}
	//1 2 3 4 5 6 7 8 9 10
	printf("\tIZQUIERDA\n");

	biQue=ImpBCI2(biQue);
	printf("Imprimir normal que retorna\n");

	ImpBCI(biQue);
	printf("Imprimir normal\n");
	
	ImpBCI(biQue);
	printf("Imprimir recursiva\n");

	ImpBCI(biQue);
	printf("Imprimir normal\n");
	
	/*i=1;
	while(!esNuevaB(biQue)){
		if (i%2){
			ImpElem(izquierdo(biQue));
			biQue=desformarBI(biQue);
		}else{
			ImpElem(derecho(biQue));
			biQue=desformarBD(biQue);
		}	
		i++;
	}*/
	return 0;
}