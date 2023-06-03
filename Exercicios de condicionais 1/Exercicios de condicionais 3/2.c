# include <stdio.h>

int main(){
	int a, b, c, d, e, f;

	
	printf("Digite um numero inteiro: \n");
	scanf("%d", &a);
	
	printf("Digite um numero inteiro: \n");
	scanf("%d", &b);
	
	printf("Digite um numero inteiro: \n");
	scanf("%d", &c);
	
	printf("Digite um numero inteiro: \n");
	scanf("%d", &d);
	e=c+d;
	f=a+b;
	
	if (b>c && d>a && e>f && c>0 && d>0 && a%2==0){
		printf("Valores aceitos \n");
	}else{
		printf("Valores nao aceitos \n");
		}


}

