# include <stdio.h>

int main(){
	int a;

	
	printf("Digite sua idade \n");
	scanf("%d", &a);
	
	if (a>=18){
		printf("Voce eh maior de idade");
	}else{
		printf("Voce eh menor de idade");
	}
	return 0;
}

