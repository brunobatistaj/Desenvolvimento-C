#include <stdio.h>

int main(){
	int d[10], i, b, j, f[10];
	
	for(i=0; i<=10; i++){
		printf("Vetor[%d]:", i);
		scanf("%d", &d[i]);
		
		f[i]=d[i];
	}

	for(i=0;i<=10;i++){

		printf("Vetor F[%d]: %d\n", i, f[i]);	
	}

	
	return 0;
}
