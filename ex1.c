#include <stdio.h>

int main(void){
	int x, i,cont=0,resto;
	
	printf("Digite um valor x:\n");
	scanf("%d", &x);
	
	while(cont<=5){
		
		resto=x%2;
		
		if(resto==1){
			cont++;
			printf("%d eh impar\n", x);
		}
		x++;
	}


	return 0;
}
