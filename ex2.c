#include <stdio.h>

int main(void){
	int x,x1,y,i,soma=0,resto;
	
	printf("Digite um valor x:\n");
	scanf("%d", &x);
	x1=x+1;
	printf("Digite um valor y:\n");
	scanf("%d", &y);
	
	for(i=x1;i<y;i++){
		resto=i%2;
		
		if(resto==1){
			soma+=i;
		}
	}
	printf("A soma de numeros impares eh: %d", soma);

	return 0;
}
