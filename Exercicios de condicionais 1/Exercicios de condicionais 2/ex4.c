# include <stdio.h>

int main(){
	float a, c, d,e,f;
	int b;

	
	printf("Informe valor da hora trabalhada: \n");
	scanf("%f", &a);
	
	printf("Informe a quantidade de horas trabalhadas: \n");
	scanf("%d", &b);
	
	c=a*40;
	d=a*b;
	
	printf("Salario normal: %f\n", c);
	printf("Salario semanal trabalhado de: %f \n", d);
	if(b>40){
		e=(b-40)*(a*1.5);
		f=e+d;
		printf("Salario com extra: %f \n", f);
	}

		return 0;
}

