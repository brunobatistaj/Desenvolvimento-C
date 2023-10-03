#include <stdio.h>
#include "bruno.h"


int main() {
    int numero, quadrado, cubo;

    printf("Digite um numero: ");
    scanf("%d", &numero);
    
	quadrado = calcularQuadrado(numero);
    cubo = calcularCubo(numero);

    printf("O quadrado de %d eh %d\n", numero, quadrado);
    printf("O cubo de %d eh %d\n", numero, cubo);

    return 0;
}

