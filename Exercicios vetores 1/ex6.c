#include <stdio.h>

int main(){
	int c[10], x, i;
	
	for(i=0; i<10; i++){
		printf("Valor vetor[%d]: ", i);
		scanf("%d", &c[i]);
	}
	
	printf("Digite uma variavel x: ");
	scanf("%d", &x);
	
	
	for(i=0; i<10; i++){
		if(c[i]==x){
		printf("Valor vetor[%d]: %d\n", i, c[i]);
		}

	}
	
	return 0;
}
