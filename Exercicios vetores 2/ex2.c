#include <stdio.h>

int main(void){
	int N[20], i, j, alt;
	
	for (i=1; i<=20; i++){
		printf("Valor %d: ", i);
		scanf("%d", &N[i]);

	}
	
	for (i=1, j=20; i<=10; i++, j--){
		alt=N[i];
		N[i]=N[j];
		N[j]=alt;

	}	
	
	for(i=1; i<=20;i++){
		printf("N[%d]: %d\n", i, N[i]);
	}


	return 0;
}
