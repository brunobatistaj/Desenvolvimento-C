# include <stdio.h>

int main(){
	int a, b,c,menor;

	
	printf("Digite um numero inteiro: \n");
	scanf("%d", &a);
	
	printf("Digite um numero inteiro: \n");
	scanf("%d", &b);
	
	printf("Digite um numero inteiro: \n");
	scanf("%d", &c);
	
	if (a<b && a<c){
		menor=a;
		printf("%d eh o menor valor \n", a);
	}else{
		if (b<c){
			menor=b;
			printf("%d eh o menor valor \n", b);
		}else{
		menor=c;
	printf("%d eh o menor valor \n", c);
	}
	}
	
	if (menor>100){
	printf("Menor valor eh maior que 100 \n", menor);
	}	
	return 0;
}

