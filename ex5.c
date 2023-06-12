#include <stdio.h>

int main(){
	int n, sim;
	float n1, n2, resp;
	
	do{
		
	printf("Digite 1 para somar, 2 para subtracao, 3 para multiplicar e 4 para dividir: ");
	scanf("%d", &n);
	if(n==1){
		scanf("%f", &n1);
		scanf("%f", &n2);
		resp=n1+n2;
		printf("A soma eh: %.3f\n", resp);
	}
	
	if(n==2){
		scanf("%f", &n1);
		scanf("%f", &n2);
		resp=n1-n2;
		printf("A subtracao eh: %.3f\n", resp);
	}
	
	if(n==3){
		scanf("%f", &n1);
		scanf("%f", &n2);
		resp=n1*n2;
		printf("A multiplicacao eh: %.3f\n", resp);
	}
	
	if(n==4){
		scanf("%f", &n1);
		scanf("%f", &n2);
		resp=n1/n2;
		printf("A divisao eh: %.3f\n", resp);
	}
	
	}
	while(n==1 || n==2 || n==3 || n==4);
	
	
	return 0;
}

