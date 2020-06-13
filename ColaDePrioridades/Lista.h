typedef struct NodoL {
	ElemCola dato;
	struct NodoL *sig;
}*Lista;
Lista vacia(){
	return NULL;
}
Lista cons(ElemCola e, Lista l){
	Lista temp=(Lista)malloc(sizeof(struct NodoL));
	temp->dato=e;
	temp->sig=l;
	return temp;
}
int esvacia(Lista l){ 
	return l==NULL;
}
ElemCola cabeza(Lista l){
	return l->dato;
}
Lista resto(Lista l){
	return l->sig;
}
void ImpLista(Lista l){
	if (!esvacia(l)){
		ImpElemCola(cabeza(l));
		ImpLista(resto(l));
	}
}
int NumElemCola(Lista l){
	if (esvacia(l)){
		return 0;
	}else{
		return 1+NumElemCola(resto(l));
	}
}
Lista UnirLista(Lista l1, Lista l2){
	if (esvacia(l1)){
		return l2;
	}else{
		return cons(cabeza(l1),UnirLista(resto(l1),l2));
	}
}
Lista InvertirLista(Lista l){
	if (esvacia(l)){
		return l;
	}else{
		return UnirLista(InvertirLista(resto(l)),cons(cabeza(l),vacia()));
	}
}
/*Lista TripleValor(Lista l){
	if (esvacia(l)){
		return NULL;
	}else{
		return cons(cabeza(l)*3,TripleValor(resto(l)));
	}
}*/
Lista InsOrd( ElemCola e,Lista l1){
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
Lista EliminarElemCola(ElemCola e1,Lista l1){
	 if(esvacia(l1)){
        return vacia();
    }else if(sonIgual(e1,cabeza(l1))){
        return  resto(l1);
    }else{
        return cons(cabeza(l1),EliminarElemCola(e1,resto(l1)));
    }
}
int EstaEn(ElemCola e,Lista l1){
	if(!esvacia(l1)){
		if(sonIgual(e,cabeza(l1))){
			return 1;
		}else{
			return  EstaEn(e,resto(l1));
		}
	}
	return 0;
}
