typedef int Elem1;
void ImpElemP(Elem1 e){
	printf("%d",e);
}
/*
int EsMenor(Elem e1, Elem e2){
	return strcmp(e1,e2)<0;
}*/
int EsMenorP(Elem1 e1, Elem1 e2){
	return e1<e2;
}
int sonIgualP(Elem1 e1,Elem1 e2){
	return e1==e2;
}
