#include <stdio.h>
#include <stdlib.h>
#include "Pila.h"
int main(int argc,char *argv[]){
	char *pal=*++argv;
	char c;
	Pila ops=empty();
	while(c=*pal++){
		if (esParI(c)){
			ops=push(c,ops);
		}else if(esParD(c)){
			while(!esParI(top(ops))){
				ImpElem(top(ops));
				ops=pop(ops);
			}
			ops=pop(ops);
		}else if(esOps(c)){
			if (isEmpty(ops)||prior(c)>prior(top(ops))){
				ops=push(c,ops);
			}else{
				while(!isEmpty(ops)&&(prior(c)<=prior(top(ops)))){
					ImpElem(top(ops));
					ops=pop(ops);
				}
				ops=push(c,ops);
			}
		}else{
			//printf("\nElem\n");
			ImpElem(c);
		}
	}
	ImpPila(ops);
	return 0;	
}
