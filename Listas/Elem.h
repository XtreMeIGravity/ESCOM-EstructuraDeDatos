//no se tiene que modificar la lista solo estos parametros si quieres cambiar el tipo de dato
typedef char *Elem;
void ImpElem(Elem e){
	printf("%s \n",e);
}
int EsMenor(Elem e1, Elem e2){
	return strcmp(e1,e2)<0;
}
int sonIgual(Elem e1,Elem e2){
	return strcmp(e1,e2)==0;
}
