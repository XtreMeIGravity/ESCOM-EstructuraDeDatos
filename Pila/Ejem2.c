#include <stdio.h>
#include <stdlib.h>
#include "Pila.h"
Pila llenaR(Pila,Elem);
int main(int argc,char *argv[]){
	char *pal=*(argv+1);
	char temp;
	Pila p=empty();
	int i=0;
	/*do{
		printf("%c\n",*pal );
	}while(*(++pal));*/
	//while(putchar(*pal++))putchar('\n');
	while(putchar(pal[i++]));
	/*do{
		temp=strcpy(tmp,*pal);
		p=push(temp,p);
	}while(*(++pal));*/

	ImpPila(p);
	return 0;
}
Pila llenaR(Pila p, Elem e){
	if (e>'A'){
		return llenaR(push(e,p),e-1);
	}else{
		return push(e,p);
	}
}