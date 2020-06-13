typedef struct NodoLL {
	Elem dato;
	struct NodoLL *sig;
}*ListaG;
ListaG vaciaLG(){
	return NULL;
}
ListaG consLG(Elem e, ListaG l){
	ListaG temp=(ListaG)malloc(sizeof(struct NodoLL));
	temp->dato=e;
	temp->sig=l;
	return temp;
}
int esvaciaLG(ListaG l){ 
	return l==NULL;
}
Elem cabezaLG(ListaG l){
	return l->dato;
}
ListaG restoLG(ListaG l){
	return l->sig;
}
void ImpListaLG(ListaG l){
	if (!esvaciaLG(l)){
		ImpElem(cabezaLG(l));
		ImpListaLG(restoLG(l));
	}
}
int NumElemLG(ListaG l){
	if (esvaciaLG(l)){
		return 0;
	}else{
		return 1+NumElemLG(restoLG(l));
	}
}
ListaG UnirListaG(ListaG l1, ListaG l2){
	if (esvaciaLG(l1)){
		return l2;
	}else{
		return consLG(cabezaLG(l1),UnirListaG(restoLG(l1),l2));
	}
}
ListaG InvertirListaG(ListaG l){
	if (esvaciaLG(l)){
		return l;
	}else{
		return UnirListaG(InvertirListaG(restoLG(l)),consLG(cabezaLG(l),vaciaLG()));
	}
}
ListaG EliminarElemLG(Elem e1,ListaG l1){
	 if(esvaciaLG(l1)){
        return vaciaLG();
    }else if(sonIgual(e1,cabezaLG(l1))){
        return  restoLG(l1);
    }else{
        return consLG(cabezaLG(l1),EliminarElemLG(e1,restoLG(l1)));
    }
}
