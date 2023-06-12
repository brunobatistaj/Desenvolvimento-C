#include <stdio.h>

int main(){
	int n;
	
	do{
		printf("Digite a senha: ");
		scanf("%d", &n);

	}
	while(n!=2008);

	printf("Senha correta \n");
	
	return 0;
}

