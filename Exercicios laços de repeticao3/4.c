#include <stdio.h>

int main (void){
	
	int i,c[4], resto, cont=0;

	for(i=0;i<=4;i++){
		printf("Digite um num:");
		scanf("%d", &c[i]);
		
		resto=c[i]%2;
		if(resto==0){
			cont++;
		}
	
}

	printf("Pares: %d\n", cont);
	
	return 0;
}
