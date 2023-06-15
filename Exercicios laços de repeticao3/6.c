#include <stdio.h>

int main (void){
	int i, x;
	
	printf("digite um num entre 1 e mil: \n");
	scanf("%d", &x);
	
	if(x>1 && x<=1000){
	for(i=0;i<=x;i++){
		if(i%2==1){
			printf("%d impar\n", i);
		}
	}
	}
	printf("Digitou numero menor que 1 ou maior que mil");
	
	
	

	
	return 0;
}
