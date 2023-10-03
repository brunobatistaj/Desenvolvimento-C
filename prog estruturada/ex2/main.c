#include <stdio.h>
#include "bruno.h"

int main() {
    double raio, diametro, circunferencia, area;

    printf("Digite o raio do circulo: ");
    scanf("%lf", &raio);

    diametro = calcularDiametro(raio);
    circunferencia = calcularCircunferencia(raio);
    area = calcularArea(raio);

    printf("Diametro: %.2lf\n", diametro);
    printf("Circunferencia: %.2lf\n", circunferencia);
    printf("Area: %.2lf\n", area);

    return 0;
}

