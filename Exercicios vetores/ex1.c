#include <stdio.h>

int main(void){
	int vetor[20], i,soma, media, cont=0, par, somaimpar;
	
	for (i=1; i<=20; i++){
		printf("Digite um valor: ");
		scanf("%d", &vetor[i]);
		
		par=i%2;
		if(par==0){
			soma +=vetor[i];
			cont++;
		}else{
			somaimpar +=vetor[i];
		}		
	}
	
	media = soma/cont;
	printf("Media dos valores nos vetores pares eh: %d \n", media);
	printf("Soma dos valores em vetores impares: %d\n", somaimpar);
	return 0;
}
