
typedef struct{
	int na;
	char nom[80];
	char simb[80];
}Elem;
Elem recibeElem(int id,char simbolo[50],char nombre[50]){
	Elem a;
	a.na=id;
    strcpy(a.nom,nombre);
    strcpy(a.simb,simbolo);
	return a;
}
void ImpElem(Elem e){
	printf("%d | %s | %s \t\t",e.na,e.nom,e.simb);
}
int EsMenor(Elem e1, Elem e2){
	return e1.na<e2.na;
}
int sonIgual(Elem e1,Elem e2){
	return e1.na==e2.na;
}
int sonIgualEnteros(int e1,int e2){
	return e1==e2;
}
int sonIgualCadena(char temp[50],char temp2[50]){
	return strcmp(temp, temp2)==0;
}
void flag(int n){
	printf("flag: %d\n",n);
}

