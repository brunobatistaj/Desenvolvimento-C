#include <stdio.h>
#include <stdlib.h>
#include "bruno.h"

bool isPrimo(int numero) {
	int i;
    if (numero <= 1) {
        return false;
    }
    
    if (numero <= 3) {
        return true;
    }
    
    if (numero % 2 == 0 || numero % 3 == 0) {
        return false;
    }
    
    for (i = 5; i * i <= numero; i += 6) {
        if (numero % i == 0 || numero % (i + 2) == 0) {
            return false;
        }
    }
    
    return true;
}


int encontrarMenor(int num1, int num2) {
    if (num1 < num2) {
        return num1;
    } else {
        return num2;
    }
}

void escreverNumerosPrimosNoIntervalo(int inicio, int fim) {
    int menor = encontrarMenor(inicio, fim);
    int maior, i;
    
	if(inicio==menor){
    	maior = fim;
	}else{
		maior = inicio;
	}

    printf("Numeros primos no intervalo de %d a %d:\n", menor, maior);
    for (i = menor; i <= maior; i++) {
        if (isPrimo(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");
}
