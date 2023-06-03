# include <stdio.h>

int main(){
	int a;

	printf("Digite um valor: \n");
	scanf("%d", &a);
	
	if (a%2==0 && a%a==0){
	printf("Eh numero par \n");
	}else{
		printf("Eh numero impar \n");
	}
	return 0;
}

