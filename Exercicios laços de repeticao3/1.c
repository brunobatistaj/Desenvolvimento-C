#include <stdio.h>

int main (void){
	
	int i,valor;
	
	for(i=0;i<=100;i++){
		valor=i+2;
		if(valor%2==0 && valor<101){
		
		printf("%d\n", valor);
		}
	}
	
	return 0;
}
