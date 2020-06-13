typedef struct NodoL {
	Elem1 dato;
	struct NodoL *sig;
}*Lista;
Lista vacia(){
	return NULL;
}
Lista cons(Elem1 e, Lista l){
	Lista temp=(Lista)malloc(sizeof(struct NodoL));
	temp->dato=e;
	temp->sig=l;
	return temp;
}
int esvacia(Lista l){ 
	return l==NULL;
}
Elem1 cabeza(Lista l){
	return l->dato;
}
Lista resto(Lista l){
	return l->sig;
}
void ImpLista(Lista l){
	if (!esvacia(l)){
		ImpElemP(cabeza(l));
		printf("\t");
		ImpLista(resto(l));
	}
}
int NumElem1(Lista l){
	if (esvacia(l)){
		return 0;
	}else{
		return 1+NumElem1(resto(l));
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
Lista InsOrd( Elem1 e,Lista l1){
	if(esvacia(l1)){
		return cons(e,l1);
	}else{
		if ( EsMenorP(e,cabeza(l1)) ){
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
Lista EliminarElem1(Elem1 e1,Lista l1){
	 if(esvacia(l1)){
        return vacia();
    }else if(sonIgualP(e1,cabeza(l1))){
        return  resto(l1);
    }else{
        return cons(cabeza(l1),EliminarElem1(e1,resto(l1)));
    }
}
int EstaEn(Elem1 e,Lista l1){
	if(!esvacia(l1)){
		if(sonIgualP(e,cabeza(l1))){
			return 1;
		}else{
			return  EstaEn(e,resto(l1));
		}
	}
	return 0;
}
