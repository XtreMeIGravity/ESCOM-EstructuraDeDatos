typedef struct{
    int NumPeor;
    char Caracter;
}ElemCola;
ElemCola CreaElemColaP(int NumPeor,char Caracter){
    ElemCola t;
    t.NumPeor=NumPeor;
    t.Caracter=Caracter;
    return t;
}
void ImpElemCola(ElemCola e){
	printf("%d  %c\t", e.NumPeor ,e.Caracter);
}
int sonIgual(ElemCola e1, ElemCola e2){
	return  e1.NumPeor==e2.NumPeor;
}
int sonIgualEstricto(ElemCola e1, ElemCola e2){
	return  e1.NumPeor==e2.NumPeor && e1.Caracter==e2.Caracter;
}
int EsMayorIgual(ElemCola e1, ElemCola e2){
	return  e1.NumPeor>=e2.NumPeor;
}
int EsMenor(ElemCola e1, ElemCola e2){
	return  e1.NumPeor<e2.NumPeor;
}
