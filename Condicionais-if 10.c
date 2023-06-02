# include <stdio.h>

int main(){
	float a;
	float b;
	float c;
	float d;
	float e;

	printf("Digite um numero: \n");
	scanf("%f",&a);
	
	printf("Digite outro numero: \n");
	scanf("%f",&b);
	
	printf("Digite outro numero: \n");
	scanf("%f",&c);
	
	if (a>=0){
		d=a*10;
		printf("Primeiro numero multiplicado por 10: %f \n", d);
	}else{
		d=a*a;
		printf("Quadrado do primeiro numero: %f \n", d);
	}
	if(b<0){
		printf("Numero negativo \n");
	}
	if(c<b){
		e=b-c;
		printf("A diferenca entre o terceiro e segundo numero eh de: %f \n", e);
	}else{
		e=c+1;
		printf("Terceiro numero acrescido de 1: %f \n", e);
	}
		
	return 0;
}
