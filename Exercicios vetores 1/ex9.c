#include <stdio.h>

int main(){
	int a[10], i, soma=0;
	
		for(i=0; i<=10; i++){
			printf("Valor vetor A[%d]: ", i);
			scanf("%d", &a[i]);	
			
			if(a[i]<=0){
				break;
			}
			if(a[i]>5){
				soma+=a[i];
			}			
		}
		
		printf("soma dos valores maiores que 5: %d", soma);


	
	return 0;
}
