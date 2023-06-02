# include <stdio.h>

int main(){
	int a;
	int b;
	int c;
	
	printf("Digite um valor: \n");
	scanf("%d", &a);
	
	printf("Digite um valor: \n");
	scanf("%d", &b);
	
	if (a>=b){
		c=a-b;
		printf("A diferenca do maior para o menor eh: %d \n", c);
	}
	if (a<b){
		c=b-a;
		printf("A diferenca do maior para o menor eh: %d \n", c);
	}
	
	
		return 0;
}

