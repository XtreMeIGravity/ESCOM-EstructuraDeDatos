#include <stdio.h>
#include <stdlib.h>
#include "Pila.h"
Pila llenaR(Pila,Elem);
int main(){
	char l='Y';
	Pila p=empty();
	p = llenaR(p,l);
	top(p);
	ImpPila(p);
	return 0;
}
Pila llena(Pila p,Elem e1){
	char i;
	for (i=e; i>='A';i-1){
		p=push(i,p);
	}
	return p;
}
Pila llenaR(Pila p, Elem e){
	if (e>'A'){
		return llenaR(push(e,p),e-1);
	}else{
		return push(e,p);
	}
}