
void flag(int n){
	printf("\nFlag:%d\n",n);
}
typedef struct{
	int Entero;
	Lista ls;	
}Elem;
int esLista(Elem e1){
	return !esvacia(e1.ls);
}
Elem creaElemEntero(int n){
	Elem e1;
	 e1.Entero=n;e1.ls=vacia();
	 return e1;
}
Elem creaElemLista(Lista L){
	Elem e2;
	e2.ls=L;
	return e2;
}
void ImpElem(Elem e){
	if(esvacia(e.ls)){
		printf("%d \t",e.Entero);
	}else{
		printf("{\t");
		ImpLista(e.ls);
		printf("}\t");
	}
}

/*
int EsMenor(Elem e1, Elem e2){
	return strcmp(e1,e2)<0;
}*/
int EsMenor(Elem e1, Elem e2){
	return e1.Entero<e2.Entero;
}
int sonIgual(Elem e1,Elem e2){
	return e1.Entero==e2.Entero;
}
