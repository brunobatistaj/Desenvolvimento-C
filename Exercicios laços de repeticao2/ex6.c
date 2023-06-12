#include <stdio.h>

int main() {
    int valor1, valor2;
    float resultado;
    char continuar;

    do {
        printf("Digite o primeiro valor: \n");
        scanf("%d", &valor1);

        do {
            printf("Digite o segundo valor (diferente de zero): \n");
            scanf("%d", &valor2);

            if (valor2 == 0) {
                printf("Valor inválido! O segundo valor nao pode ser zero.\n");
            }
        } while (valor2 == 0);

        resultado = valor1 / valor2;
        printf("Resultado da divisao: %.2f\n", resultado);

        printf("Deseja continuar? (s/n): \n");
        scanf(" %c", &continuar);

    } while (continuar == 's' || continuar == 'S');

    return 0;
}
