#include <stdio.h>
#include <stdlib.h>
#include "bruno.h"

int calcularQuadrado(int numero) {
    return numero * numero;
}

int calcularCubo(int numero) {
    int quadrado = calcularQuadrado(numero);
    return numero * quadrado;
}

