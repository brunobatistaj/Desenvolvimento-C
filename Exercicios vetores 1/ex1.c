#include <stdio.h>

int main(){
	int a[10], i, b;
	
	b=0;
	
	for(i=0; i<=10; i++){
		b+=10;
		printf("Vetor[%d]: %d\n", i, b);
	}
	
	return 0;
}
