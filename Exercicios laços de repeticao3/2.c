#include <stdio.h>

int main (void){
	
int i,c[5],cont=0;
	
	for(i=0;i<=5;i++){
		printf("Digite um num:");
		scanf("%d", &c[i]);
		
	if(c[i]>=1){
		cont++;
	}
		
		
}
	printf("Positivos: %d\n", cont);
		



	
	return 0;
}
