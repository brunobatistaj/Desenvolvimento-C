#include <stdio.h>

int main() {
    float chico = 1.50;
    float juca = 1.10;
    int anos = 0;

    while (juca <= chico) {
        chico += 0.02;  // Chico cresce 2 cent�metros por ano
        juca += 0.03;  // Juca cresce 3 cent�metros por ano
        anos++;
    }

    printf("Juca se tornara maior que Chico em %d anos.\n", anos);

    return 0;
}
