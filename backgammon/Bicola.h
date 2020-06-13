#include "Elem.h"
typedef struct NodoPrincipal{
	struct NodoPrincipal*izqN;
	Elem dato;
	struct NodoPrincipal*derN;
}*ApNodo;
typedef struct AFD_{
	ApNodo izq;
	ApNodo der;
}*Bicola;
Bicola nuevaB(){
	Bicola t=(Bicola)malloc(sizeof(struct AFD_));
	t->izq=t->der=NULL;
	return t;
}
int esNuevaB(Bicola q){	return ((q->izq==NULL)&&(q->der==NULL));}
Bicola formarBI(Elem e,Bicola q){
	ApNodo t=(ApNodo)malloc(sizeof(struct NodoPrincipal));
	t->dato=e;
	t->izqN=NULL;
	if (esNuevaB(q)){
		q->izq=q->der=t;
	}else{
		t->derN=q->izq;
		q->izq->izqN=q->izq=t;
	}
	q->der->derN=NULL;
	q->izq->izqN=NULL;
	return q;
}
Elem izquierdo(Bicola q){	return q->izq->dato;}
Bicola formarBD(Bicola q,Elem e){
	ApNodo t=(ApNodo)malloc(sizeof(struct NodoPrincipal));
	t->dato=e;
	t->derN=NULL;
	if (esNuevaB(q)){
		q->der=q->izq=t;
	}else{
		t->izqN=q->der;
		q->der->derN=q->der=t;
	}	
	q->der->derN=NULL;
	q->izq->izqN=NULL;
	return q;
}
Elem derecho(Bicola q){	return q->der->dato;}
Bicola desformarBI(Bicola q){
	ApNodo t;
	if (q->izq==q->der){
		return nuevaB();
	}else{
		t=q->izq;
		q->izq=q->izq->derN;
		q->izq->izqN=NULL;
		free(t);
		return q;
	}
}
Bicola desformarBD(Bicola q){
	ApNodo t;
	if (q->izq==q->der){
		return nuevaB();
	}else{
		t=q->der;
		q->der=q->der->izqN;
		q->der->derN=NULL;
		free(t);
		return q;
	}
}
void ImpBCI(Bicola q){
	ApNodo t=q->izq;
	int i = 1;
	for(i = 1; i <25; i++){
		printf("%d\t",i);
	}
	printf("\n");
	for(i = 24; i >= 1 ; i--){
		printf("%d\t",i);
	}
	printf("\n");
	while(t!=NULL){
		ImpElem(t->dato);
		printf("\t");
		t=t->derN;
	}
	printf("\n");
}
void ImpBCD(Bicola q){
	ApNodo t=q->der;
	while(t!=NULL){
		ImpElem(t->dato);
		printf("\t");
		t=t->izqN;
	}
	printf("\n");
}	
Bicola ImpBCI2(Bicola q){
	Bicola t=(Bicola)malloc(sizeof(struct AFD_));
	t=nuevaB();
	while(!esNuevaB(q)){
		ImpElem(izquierdo(q));
		t=formarBD(t,izquierdo(q));
		q=desformarBI(q);
	}
	return t;
}	
Bicola ImpBCD2(Bicola q){
	Bicola t=(Bicola)malloc(sizeof(struct AFD_));
	t=nuevaB();
	while(!esNuevaB(q)){
		ImpElem(derecho(q));
		t=formarBI(derecho(q),t);
		q=desformarBD(q);
	}
	return t;
}


Bicola MovimientoDer(Bicola q, int pasos , int posicion, int jugador){
	ApNodo t=q->izq;
	int posactual=1;
	//NOS COLOCAMOS EN LA POSICION DESEADA
	while(posactual!=posicion){
		posactual++;
		t=t->derN;		
	}
	//RESTAMOS EN DONDE ESTAMOS
	if(jugador==2){
		t->dato+=1;
	}
	//AVANZAMOS LAS POSICIONES DESEADAS
	if(posicion==1){
		pasos++;
		while(posactual!=pasos){
			posactual++;
			if(t->derN==NULL /*&& !(valida que de la 1 a la 18 sean >0) y la lista es vacia*/){
				return q;
			}
			t=t->derN;		
		}
		if(jugador==2 && posactual==pasos+posicion &&t->dato==1 ){
			///ALAMACENA FICHA
			t->dato-=2;
		}else if(jugador==2 && posactual==pasos+posicion){
			t->dato-=1;
		}
	}else{
		while(posactual!=pasos+posicion){
			posactual++;
			if(t->derN==NULL /*&& !(valida que de la 1 a la 18 sean >0) y la lista es vacia*/){
				return q;
			}
			t=t->derN;		
		}
		if(jugador==2 && posactual==pasos+posicion &&t->dato==1 ){
			///ALAMACENA FICHA
			t->dato-=2;
		}else if(jugador==2 && posactual==pasos+posicion){
			t->dato-=1;
		}
	}
	return q;
}

Bicola MovimientoIzq(Bicola q, int pasos , int posicion, int jugador){
	ApNodo t=q->der;
	int posactual=1;
	//NOS COLOCAMOS EN LA POSICION DESEADA
	while(posactual!=posicion){
		posactual++;
		t=t->izqN;		
	}
	//RESTAMOS EN DONDE ESTAMOS
	if(jugador==1){
		t->dato-=1;
	}else if(jugador==2){
		t->dato+=1;
	}
	//AVANZAMOS LAS POSICIONES DESEADAS
	if(posicion==1){
		pasos++;
		while(posactual!=pasos){
			posactual++;
			if(t->izqN==NULL /*&& !(valida que de la 1 a la 18 sean <0)  y la lista es vacia*/){
				return q;
			}
			t=t->izqN;		
		}
		if(jugador==1 && posactual==pasos && t->dato==-1){
			///ALAMACENA FICHA
			t->dato+=2;
		}else if(jugador==1 && posactual==pasos){
			t->dato+=1;
		}

	}else{
		while(posactual!=pasos+posicion){
			posactual++;
			if(t->izqN==NULL /*&& !(valida que de la 1 a la 18 sean <0)  y la lista es vacia*/){
				return q;
			}
			t=t->izqN;		
		}
		if(jugador==1 && posactual==pasos+posicion && t->dato==-1){
			///ALAMACENA FICHA
			t->dato+=2;
		}else if(jugador==1 && posactual==pasos+posicion){
			t->dato+=1;
		}
	}
	return q;
}
int validatiroDer(Bicola q, int posicion, int pasos,  int jugador){
	ApNodo t=q->izq;
	int validador=0;
	
	int posactual=1;
	//NOS COLOCAMOS EN LA POSICION DESEADA
	while(posactual!=posicion){
		posactual++;
		t=t->derN;		
	}
	//validamos si es una ficha
	if((t->dato)<0){
		validador++;
	}else{
		printf("Tiro invalido :pierdes turno\n");
		return 0;
	}
	//AVANZAMOS LAS POSICIONES DESEADAS
	if(posicion==1){
		pasos++;
		while(posactual!=pasos){
			posactual++;
			t=t->derN;		
		}
		if((t->dato)<2){
			validador++;
		}else{
			printf("Tiro invalido :pierdes turno\n");
			return 0;
		}
	}else{
		while(posactual!=pasos+posicion){
			posactual++;
			t=t->derN;		
		}
		if((t->dato)<2){
			validador++;
		}else{
			printf("Tiro invalido :pierdes turno\n");
			return 0;
		}
	}
	return validador;
}
int validatiroIzq(Bicola q, int posicion, int pasos,  int jugador){
	ApNodo t=q->der;
	int validador=0;
	
	int posactual=1;
	//NOS COLOCAMOS EN LA POSICION DESEADA
	while(posactual!=posicion){
		posactual++;
		t=t->izqN;		
	}
	//validamos si es una ficha
	if((t->dato)>0){
		validador++;
	}else{
		printf("Tiro invalido :pierdes turno\n");
		return 0;
	}
	//AVANZAMOS LAS POSICIONES DESEADAS
	if(posicion==1){
		pasos++;
		while(posactual!=pasos){
			posactual++;
			t=t->izqN;		
		}
		if((t->dato)>-2){
			validador++;
		}else{
			printf("Tiro invalido :pierdes turno\n");
			return 0;
		}
	}else{
		while(posactual!=pasos+posicion){
			posactual++;
			t=t->izqN;		
		}
		if((t->dato)>-2){
			validador++;
		}else{
			printf("Tiro invalido :pierdes turno\n");
			return 0;
		}
	}
	return validador;
}