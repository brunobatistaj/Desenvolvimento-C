#include <stdio.h>

int main() {
	int n, nd, nu;
	
	printf("Digite numero do atendimento: ");
	scanf("%d", &n);
	
	nd=n/10;
	nu=n%10;
	
	
	if(n>85 || n<=0){
		printf("Codigo invalido\n");
	}else{
		if(nd==2){
			printf("Vinte");
		}
		if(nd==3){
			printf("Trinta");
		}
		if(nd==4){
			printf("Quarenta");
		}
		if(nd==5){
			printf("Cinquenta");
		}
		if(nd==6){
			printf("Sessenta");
		}
		if(nd==7){
			printf("Setenta");
		}
		if(nd==8){
			printf("Oitenta");
		}
		
		
		if(nd>=2 && nu!=0){
		printf(" e ");
		}
		
		
		if((nd==0 && nu==1) || (nd>=2 && nu==1)){
			printf("um");
		}
		if((nd==0 && nu==2) || (nd>=2 && nu==2)){
			printf("dois");
		}
		if((nd==0 && nu==3) || (nd>=2 && nu==3)){
			printf("tres");
		}
		if((nd==0 && nu==4) || (nd>=2 && nu==4)){
			printf("quatro");
		}
		if((nd==0 && nu==5) || (nd>=2 && nu==5)){
			printf("cinco");
		}
		if((nd==0 && nu==6) || (nd>=2 && nu==6)){
			printf("seis");
		}
		if((nd==0 && nu==7) || (nd>=2 && nu==7)){
			printf("sete");
		}
		if((nd==0 && nu==8) || (nd>=2 && nu==8)){
			printf("oito");
		}
		if((nd==0 && nu==9) || (nd>=2 && nu==9)){
			printf("nove");
		}else{

		
		
		if(nd==1 && nu==0){
			printf("dez");
		}
		if(nd==1 && nu==1){
			printf("onze");
		}		
		if(nd==1 && nu==2){
			printf("doze");
		}		
		if(nd==1 && nu==3){
			printf("treze");
		}
		if(nd==1 && nu==4){
			printf("quatorze");
		}
		if(nd==1 && nu==5){
			printf("quinze");
		}		
		if(nd==1 && nu==6){
			printf("dezesseis");
		}		
		if(nd==1 && nu==7){
			printf("dezessete");
		}		
		if(nd==1 && nu==8){
			printf("dezoito");
		}		
		if(nd==1 && nu==9){
			printf("dezenove");
		}
	}							
	}

	
	
	
	return 0;
}



