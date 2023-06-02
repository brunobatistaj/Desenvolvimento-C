# include <stdio.h>

int main(){
	int a;
	int b;
	int c;
	
	printf("Digite ano de nascimento: \n");
	scanf("%d", &a);
	
	printf("Digite ano atual em que estamos: \n");
	scanf("%d", &b);
	
	if (a>2023){
		printf("Ano de nascimento incorreto");
	}else{
		c=b-a;
		printf("Sua idade eh: %d", c);
	}
	return 0;
}

