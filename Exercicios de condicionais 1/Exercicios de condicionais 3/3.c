# include <stdio.h>

int main(){
	int a, b, c, d, e;

	
	printf("Digite um numero inteiro: \n");
	scanf("%d", &a);
	
	printf("Digite um numero inteiro: \n");
	scanf("%d", &b);
	
	printf("Digite um numero inteiro: \n");
	scanf("%d", &c);
	
	if(a>b && a>c){
		d=(a*a);
		e=(c*c)+(b*b);
	}else{
		if(b>c){
			d=(b*b);
			e=(a*a)+(c*c);
		}else{
			d=(c*c);
			e=(a*a)+(b*b);
		}
	}
	if (e==d){
		printf("Eh um triangulo retangulo \n");
	}else{
		printf("Nao eh um triangulo retangulo \n");
		}

return 0;
}

