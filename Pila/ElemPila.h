typedef char Elem;
void ImpElem(Elem e){
	printf("%c",e);
}
void aviso(int arg){
	printf("Llegue aqui %d \n",arg);
}
int prior(Elem c){
	switch(c){
		case '^':
			return 4;
		break;
		case '*':
			return 3;
		break;
		case '/':
			return 3;
		break;
		case '+':
			return 2;
		break;
		case '-':
			return 2;
		break;
		case '(':
			return 1;
		break;
	}
}
int esParI(Elem c1){
	if (c1=='('){
		return 1;
	}else{
		return 0;
	}
}
int esParD(Elem c2){
	if (c2==')'){
		return 1;
	}else{
		return 0;
	}
}
int esOps(Elem c){
	if (c=='^'||c=='*'||c=='-'||c=='+'||c=='/'){
		return 1;
	}else{
		return 0;
	}
}