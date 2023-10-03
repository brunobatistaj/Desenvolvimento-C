#include <stdio.h>
#include "bruno.h"

double calcularDiametro(double raio) {
    return 2.0 * raio;
}

double calcularCircunferencia(double raio) {
    return 2.0 * PI * raio;
}

double calcularArea(double raio) {
    return PI * raio * raio;
}
