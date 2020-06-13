
int diferenteZero(int d){return d!=0;}
int esPar(int d){
	if (d%2==0){
		return 1;
	}
	return 0;
}
int esImpar(int d){	return (!esPar(d)&&diferenteZero(d));}
int esRojo(int i){
	if (i==1||i==3||i==5||i==7||i==9||i==12||i==14||i==16||i==18||i==19||i==21||i==23||i==25||i==27||i==30||i==32||i==34||i==36){
		return 1;
	}
	return 0;
}
int esNegro(int d){	return (!esRojo(d)&&diferenteZero(d));}
int esTerna(int numApost,int ternaSelecionada){
	if (ternaSelecionada==1){
		if (numApost==1||numApost==2||numApost==3){
			return 1;
		}
	}else if (ternaSelecionada==2){
		if (numApost==4||numApost==5||numApost==6){
			return 1;
		}
	}else if (ternaSelecionada==3){
		if (numApost==7||numApost==8||numApost==9){
			return 1;
		}
	}else if (ternaSelecionada==4){
		if (numApost==10||numApost==11||numApost==12){
			return 1;
		}
	}else if (ternaSelecionada==5){
		if (numApost==13||numApost==14||numApost==15){
			return 1;
		}
	}else if (ternaSelecionada==6){
		if (numApost==16||numApost==16||numApost==18){
			return 1;
		}
	}else if (ternaSelecionada==7){
		if (numApost==19||numApost==20||numApost==21){
			return 1;
		}
	}else if (ternaSelecionada==8){
		if (numApost==22||numApost==23||numApost==24){
			return 1;
		}
	}else if (ternaSelecionada==9){
		if (numApost==25||numApost==26||numApost==27){
			return 1;
		}
	}else if (ternaSelecionada==10){
		if (numApost==28||numApost==29||numApost==30){
			return 1;
		}
	}else if (ternaSelecionada==11){
		if (numApost==31||numApost==32||numApost==33){
			return 1;
		}
	}else if (ternaSelecionada==12){
		if (numApost==34||numApost==35||numApost==36){
			return 1;
		}
	}
	return 0;
}
int esDocena(int numApost,int docenaSelecionada){
	if (docenaSelecionada==1){
		if (numApost>=1 && numApost<=12){
			return 1;
		}
	}else if (docenaSelecionada==2){
		if (numApost>=13 && numApost<=24){
			return 1;
		}
	}else if (docenaSelecionada==3){
		if (numApost>=25 && numApost<=36){
			return 1;
		}
	}
	return 0;
}