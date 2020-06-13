#include "Elem.h"
typedef struct NodoL {
	Elem dato;
	struct NodoL *sig;
}*Lista;
Lista vacia(){
	return NULL;
}
Lista cons(Elem e, Lista l){
	Lista temp=(Lista)malloc(sizeof(struct NodoL));
	temp->dato=e;
	temp->sig=l;
	return temp;
}
int esvacia(Lista l){ 
	return l==NULL;
}
Elem cabeza(Lista l){
	return l->dato;
}
Lista resto(Lista l){
	return l->sig;
}
void ImpLista(Lista l){
	if (!esvacia(l)){
		ImpElem(cabeza(l));
		ImpLista(resto(l));
	}
}
int NumElem(Lista l){
	if (esvacia(l)){
		return 0;
	}else{
		return 1+NumElem(resto(l));
	}
}
/*Lista TripleValor(Lista l){
	if (esvacia(l)){
		return NULL;
	}else{
		return cons(cabeza(l)*3,TripleValor(resto(l)));
	}
}*/
Lista InsOrd( Elem e,Lista l1){
	if(esvacia(l1)){
		return cons(e,l1);
	}else{
		if ( EsMenor(e,cabeza(l1)) ){
			return cons(e,l1);
		}else{
			return cons(cabeza(l1),InsOrd(e,resto(l1)));
		}
	}
}
int EstaEn(Elem e,Lista l1){
	if(!esvacia(l1)){
		if(sonIgual(e,cabeza(l1))){
			return 1;
		}else{
			return  EstaEn(e,resto(l1));
		}
	}
	return 0;
}
Lista UnirLista(Lista l1, Lista l2){
	if (esvacia(l1)){
		return l2;
	}else if(!EstaEn(cabeza(l1),l2)){
		return cons(cabeza(l1),UnirLista(resto(l1),l2));
	}else{
		return UnirLista(resto(l1),l2);
	}
}
Lista InvertirLista(Lista l){
	if (esvacia(l)){
		return l;
	}else{
		return UnirLista(InvertirLista(resto(l)),cons(cabeza(l),vacia()));
	}
}

Lista temp2;
Lista EliminarElem( Elem e,Lista l1){
	if(!esvacia(l1)){
		if(!sonIgual(e,cabeza(l1))){
			temp2=cons(cabeza(l1),temp2);
		}
		EliminarElem(e,resto(l1));
	}
	return InvertirLista(temp2);
	temp2=NULL;
}

Lista OrdListAsc(Lista l){
	if(esvacia(l)){
		return l;
	}else{
		return InsOrd(cabeza(l),OrdListAsc(resto(l)));
	}
}
Lista OrdListDesc(Lista l){
	if(esvacia(l)){
		return l;
	}else{
		return InvertirLista(OrdListAsc(l));
	}
}
Lista IntersectaLista(Lista s1, Lista s2){
    if(esvacia(s2))
        return vacia();
    else if(EstaEn(cabeza(s2),s1))
        return cons(cabeza(s2),IntersectaLista(s1,resto(s2)));
    else
        return IntersectaLista(s1,resto(s2));
}