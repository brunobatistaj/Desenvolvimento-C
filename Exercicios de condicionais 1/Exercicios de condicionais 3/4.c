# include <stdio.h>

int main(){
	int a, b, c, d, e;

	
	printf("Digite um numero inteiro: \n");
	scanf("%d", &a);
	
	printf("Digite um numero inteiro: \n");
	scanf("%d", &b);
	
	printf("Digite um numero inteiro: \n");
	scanf("%d", &c);
	
	
	if (a==b && c==a && b==c){
		printf("Eh um triangulo equilatero \n");
	}else{
		if(a==b || b==c || a==c){
		printf("Eh um triangulo esosceles \n");
	}
}
	if (a!=b && a!=c && b!=c){
		printf("Eh um triangulo escaleno \n");
}

return 0;
}

