#include <stdio.h>

int main(void){
	int i, n, resto;
	
	printf("Digite um numero:\n");
	scanf("%d", &n);
	
	for(i=1;i<=10000;i++){

		resto=i%n;
		
		if(resto==2){
			printf("%d\n",i);
		}

	}
		
	
	
	return 0;
}
