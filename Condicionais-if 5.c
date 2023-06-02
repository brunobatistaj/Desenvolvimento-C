# include <stdio.h>

int main(){
	int a;

	
	printf("Digite um valor: \n");
	scanf("%d", &a);
	
	if (a==20){
		printf("Igual a 20 \n");
	}
	if (a>20){
		printf("Maior que 20");
	}
	if(a<20){
		printf("Menor que 20");
	}
	return 0;
}

