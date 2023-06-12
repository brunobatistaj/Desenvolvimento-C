#include <stdio.h>

int main() {
	float altura;
	float maior, menor;
	char continuar;
	
	printf("Digite sua altura: \n");
	scanf("%f",&altura);
	
	maior=altura;
	menor=altura;
	
	do{
		printf("Continuar informando altura de outras pessoas? (s/n)\n");
		scanf(" %c", &continuar);
		
		if(continuar=='s' || continuar=='S'){
			printf("Digite sua altura: \n");
			scanf("%f",&altura);
		}
		
		if(altura>maior){
			maior=altura;
		}
		if(altura<menor){
			menor=altura;
		}
	}while(continuar == 's' || continuar == 'S');
	
	printf("Maior altura: %.2f\n", maior);
	printf("Menor altura: %.2f\n", menor);

    return 0;
}
