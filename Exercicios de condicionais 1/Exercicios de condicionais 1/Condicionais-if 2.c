# include <stdio.h>

int main(){
	int a;
	int b;
	
	printf("Digite um valor: \n");
	scanf("%d", &a);
	
	printf("Digite um valor: \n");
	scanf("%d", &b);
	
	if (a==b){
		printf("Numeros iguais \n");
	}else{
		printf("valor 1: %d \n", a);
		printf("valor 2: %d \n", b);
	}
	
		return 0;
}

