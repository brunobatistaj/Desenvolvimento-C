#include <stdio.h>

int main (void){
	
	int i,c[4], resto, par=0,impar=0, positivo=0,negativo=0,neutro=0;

	for(i=0;i<=4;i++){
		printf("Digite um num:");
		scanf("%d", &c[i]);
		
		resto=c[i]%2;
		if(resto==0){
			par++;
		}else{
			impar++;
		}
		
		if(c[i]>0){
			positivo++;
		}else
		if(c[i]<0){
			negativo++;
		}else{
			neutro++;
		}
}

	printf("Pares: %d\n", par);
	printf("Impares: %d\n", impar);
	printf("Positivos: %d\n", positivo);
	printf("Negativos: %d\n", negativo);
	printf("Neutro: %d\n", neutro);
	
	return 0;
}
