#include <stdio.h>

int main(){
	int a[10], i,b, maior= 0;
	
	
	for(i=0; i<=10; i++){

		printf("Valor vetor A[%d]: ", i);
		scanf("%d", &a[i]);
		
		if(a[i]<0){
			printf("Substituir vetor A[%d]: ", i);
			scanf("%d", &a[i]);
		}
		if(maior<a[i]){
			maior=a[i];
			b=i;
		}
	}

	printf("Maior valor esta no vetor A[%d]: %d\n", b, maior);

	
	return 0;
}
