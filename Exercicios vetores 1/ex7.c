#include <stdio.h>

int main(){
	int a[5], b[5], i;
	
	for(i=0; i<=5; i++){

		printf("Valor vetor A[%d]: ", i);
		scanf("%d", &a[i]);
		
		printf("Valor vetor B[%d]: ", i);
		scanf("%d", &b[i]);
	}
	
	for(i=0; i<=5; i++){
		int soma[i];
		soma[i]=a[i]+b[i];
		printf("Soma de A[%d] e B[%d] eh: %d\n", i, i, soma[i]);
	}
	
	return 0;
}
