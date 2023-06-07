#include <stdio.h>
int main(){
	int mes, dia, ano, soma, soma2,soma3,soma4,us1,ds1, uano, dano, cano, mano, resto, resto2, ud, uu,fn,ff,fff,somaf;
	
	printf("Digite dia em que nasceu: \n");
	scanf("%d", &dia);
	
	printf("Digite mes em que nasceu: \n");
	scanf("%d", &mes);
	
	printf("Digite ano em que nasceu: \n");
	scanf("%d", &ano);
	
	//soma mes com dia
	soma=dia+mes;
	
	//separa soma anterior em dezena e unidade
	us1=soma%10;
	ds1=soma/10;
	
	//soma dezena com unidade
	soma2=us1+ds1;
	
	//separa algorismos de ano
	uano=ano%10;
	resto=ano/10;
	dano=resto%10;
	resto2=resto/10;
	cano=resto2%10;
	mano=resto2/10;
	
	//soma algarismos de ano
	soma3=uano+dano+cano+mano;
	
	//separa soma3
	uu=soma3%10;
	ud=soma3/10;
	
	//soma ultima separaçao de algorismos
	soma4=uu+ud;
	
	//resp final das somas
	fn=soma2+soma4;
	
		if(fn>9 || fn!=11 || fn!=22){
	ff=fn%10;
	fff=fn/10;
	somaf=ff+fff;

	if(somaf == 1){
		printf("Criativo");
	}else{
		if(somaf == 2){
		printf("Sentimental");
	}else{
		if(somaf == 3){
		printf("Mente agil");
	}else{
		if(somaf == 5){
		printf("Aberto a mudanças");
	}else{
		if(somaf == 6){
		printf("Familiar");
	}else{
		if(somaf == 7){
		printf("Possui mediunidade");
	}else{
		if(somaf == 8){
		printf("Pratico");
	}else{
		if(somaf == 9){
		printf("Solitário");
	}else{
		if(somaf == 11){
		printf("Ambicioso");
	}else{
		if(somaf == 22){
		printf("Humanitario");
	}}}}}}}}}}
	}else{
	if(fn == 1){
		printf("Criativo");
	}else{
		if(fn == 2){
		printf("Sentimental");
	}else{
		if(fn == 3){
		printf("Mente agil");
	}else{
		if(fn == 5){
		printf("Aberto a mudanças");
	}else{
		if(fn == 6){
		printf("Familiar");
	}else{
		if(fn == 7){
		printf("Possui mediunidade");
	}else{
		if(fn == 8){
		printf("Pratico");
	}else{
		if(fn == 9){
		printf("Solitário");
	}else{
		if(fn == 11){
		printf("Ambicioso");
	}else{
		if(fn == 22){
		printf("Humanitario");
	}
	
}
}
}
}
}
}
}
}
}}





	
		
		
	return 0;
}
