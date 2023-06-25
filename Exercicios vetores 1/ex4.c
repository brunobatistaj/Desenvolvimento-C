#include <stdio.h>

int main(){
	int c[10], i;
	
	for(i=0; i<=10; i++){
		printf("Valor vetor[%d]: ", i);
		scanf("%d", &c[i]);
		
		if(c[i]<0){
			c[i]=0;
		}
	}
	for(i=0; i<=10; i++){
		printf("Valor vetor[%d]: %d\n", i, c[i]);
	}
	
	return 0;
}
