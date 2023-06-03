# include <stdio.h>

int main(){
	int a;

	
	printf("Digite sua idade: \n");
	scanf("%d", &a);
	
	
	if (a<16){
		printf("Nao eleitor \n");
	}
	if (a>=16 && a<18 || a>65){
		printf("Eleitor facultativo \n");
	}
	if (a>=18 && a<=65){
		printf("Eleitor obrigatorio \n");
	}
	
		return 0;
}

