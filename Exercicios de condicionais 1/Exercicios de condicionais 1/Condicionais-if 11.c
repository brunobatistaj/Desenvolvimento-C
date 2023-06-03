# include <stdio.h>

int main(){
	int a;
	float b;
	float c;
	float d;

	printf("Digite ano de fabricacao do carro: \n");
	scanf("%d",&a);
	
	printf("Digite valor de tabela do carro: \n");
	scanf("%f",&b);
	
	

	if(a>1900 && a<1990){
		c=b*1.1;
		d=c-b;
		printf("Imposto de %.2f", d);
	}
	if(a>=1990 && a<=2023){
		c=b*1.15;
		d=c-b;
		printf("Imposto de %.2f", d);
	}
	if(a<1900 || a>2023){
		printf("Ano invalido");
	}

	
	return 0;
}
