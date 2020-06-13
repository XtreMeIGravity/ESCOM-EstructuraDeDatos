#include "Elem.h"

typedef struct NodoP{
	Elem dato;
	struct NodoP *sig;
}*Pila;
//CONSTURCTORAS
Pila empty(){
	return NULL;
}
Pila push(Elem e1,Pila p1){
	Pila temp=(Pila)malloc(sizeof(struct NodoP));
	temp->dato=e1;
	temp->sig=p1;
	return temp;
}
//OBSERVADORAS
int isEmpty(Pila p1){
	return p1==empty();
}
Elem top(Pila p){
	return p->dato;
}
Pila pop(Pila p){
	return p->sig;
}
void ImpPila(Pila p){
	if (!isEmpty(p)){
		ImpElem(top(p));
		ImpPila(pop(p));
	}else if(isEmpty(p)){
		printf("\n");
	}
}