# include <stdio.h>

int main(){
	int a;

	
	printf("Digite sua idade: \n");
	scanf("%d", &a);
	
	
	if (a<18){
		printf("Menor de idade \n");
	}
	if (a>=18 && a<65){
		printf("Maior de idade \n");
	}else{
		if (a>=65){
			printf("Maior de 65 anos \n");
		}
	}
		return 0;
}

