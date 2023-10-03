#include <stdio.h>
#include "bruno.h"

int main() {
    int num1, num2, maior, menor;

    printf("Digite dois numeros:\n");
    scanf("%d %d", &num1, &num2);
    
    menor = encontrarMenor(num1, num2);
    
	if(num1==menor){
    	maior = num2;
	}else{
		maior = num1;
	}

    printf("O menor entre %d e %d eh %d.\n", num1, num2, menor);
    printf("O maior entre %d e %d eh %d.\n", num1, num2, maior);

    escreverNumerosPrimosNoIntervalo(num1, num2);

    return 0;
}

