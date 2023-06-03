# include <stdio.h>

int main(){
	int a;

	
	printf("Digite uma senha com numero inteiro \n");
	scanf("%d", &a);
	
	if (a==1234){
		printf("Acesso permitido");
	}else{
		printf("Acesso negado");
	}
	return 0;
}

