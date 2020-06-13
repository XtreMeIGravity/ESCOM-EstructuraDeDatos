
#define k 2
#include "Elem.h"
typedef struct Nodo{
	Elem dato;
	struct Nodo *sig;
}*ApNodo;
typedef struct AFD_{
	ApNodo sal;
	ApNodo ent;
}*Cola;

Cola nueva(){
	Cola t=(Cola)malloc(sizeof(struct AFD_));
	t->sal=t->ent=NULL;
	return t;
}
int esNueva(Cola q){
	return ((q->sal==NULL)&&(q->ent==NULL));
}
Cola formar(Cola q,Elem e){
	ApNodo t=(ApNodo)malloc(sizeof(struct AFD_));
	t->dato=e;
	t->sig=NULL;
	if(esNueva(q)){
		q->ent=q->sal=t;
	}else{
		q->ent->sig=q->ent=t;
	}
	return q;
}
Elem primero(Cola q){
	return q->sal->dato;
}
Cola desformar(Cola q){
	ApNodo t=(ApNodo)malloc(sizeof(struct AFD_));
	if (q->sal==q->ent){
		return nueva();
	}else{
		t=q->sal;
		q->sal=q->sal->sig;
		free(t);
		return q;
	}
}
void ImpCola(Cola q){ 
	ApNodo temp2=(ApNodo)malloc(sizeof(struct AFD_));
	temp2=q->sal;
	while(temp2->sig!=NULL){
		ImpElem(temp2->dato);
		temp2=temp2->sig;
	}
}

typedef Cola *ArrayC;

ArrayC dividePares(Cola principal){
	ArrayC t=(ArrayC)malloc(sizeof(Cola)*k);
	t[0]=nueva();
	t[1]=nueva();
	while(!esNueva(principal)){
		if (primero(principal)%2) {
			t[0]=formar(t[0],primero(principal));
		}else{
			t[1]=formar(t[1],primero(principal));
		}

		principal=desformar(principal);
	}
	return t;
}