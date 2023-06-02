# include <stdio.h>

int main(){
	char a;
	float b;
	float c;

	printf("Digite Homem ou Mulher (H ou M): ");
	scanf("%c",&a);
	
	printf("Digite sua altura em metros (separar com metros.centimetros): ");
	scanf("%f",&b);
	
	if (a=='m'){
		c=(62.1*(b/100))-44.7;
		printf("Seu peso ideal eh: %f", c);
	}
	if (a=='h'){
		c=(72.7*(b/100))-58;
		printf("Seu peso ideal eh: %f", c);
	}

		
	return 0;
}
