#include <stdio.h>

int main(){
	int c[10], d[10], cont=0, i;
	
	for(i=0; i<10; i++){
		printf("Valor vetor[%d]: ", i);
		scanf("%d", &c[i]);
		
		if(c[i]<0){
			d[cont]=c[i];
			cont++;
		}
	}
	for(i=0; i<cont; i++){
		printf("Valor vetor[%d]: %d\n", i, d[i]);
	}
	
	return 0;
}
