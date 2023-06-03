# include <stdio.h>

int main(){
	int a;
	int b;

	
	printf("Digite um valor inteiro: \n");
	scanf("%d", &a);
	
	printf("Digite um valor inteiro: \n");
	scanf("%d", &b);
	
	
	if (a%b==0 || b%a==0){
	printf("Sao multiplos \n");
	}else{
		printf("Nao sao multiplos");
	}
	
		return 0;
}

