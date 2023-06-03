# include <stdio.h>

int main(){
	int a;
	int b;
	
	printf("Digite um valor: \n");
	scanf("%d", &a);
	
	if (a%5==0){
	printf("Eh divisivel por 5 \n");
	}else{
		printf("Nao eh divisivel por 5 \n");
	}
	return 0;
}

