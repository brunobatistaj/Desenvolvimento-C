#include <stdio.h>

int main(void){
	int valor, cont=0, contf=0;
	
	
	while(1){

	printf("Digite um valor inteiro: \n");
	scanf("%d", &valor);
	
	if(valor%2==0){
		cont++;
	}
		contf++;
	if(cont==3){
	printf("%d numeros pares\n", cont);
	printf("%d numeros digitados\n", contf);
	
	break;
	}
	
	}

	return 0;
	
}
