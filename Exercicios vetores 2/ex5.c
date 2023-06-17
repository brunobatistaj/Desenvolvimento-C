#include <stdio.h>

int main(void){
	int n; 
	printf("Digite um valor para tamanho do vetor: ");
	scanf("%d", &n);
	
	int x[n], i, menor = x[0], posicao_menor=0; 
	
	for (i = 0; i < n; i++) {
		printf("Digite um valor: ");
		scanf("%d", &x[i]);
		
		if(x[i]<menor){
			menor=x[i];
			posicao_menor=i;
		}
    }
	
    printf("Menor elemento: %d\n", menor);
    printf("Posição do menor elemento: %d\n", posicao_menor);

	return 0;
}
