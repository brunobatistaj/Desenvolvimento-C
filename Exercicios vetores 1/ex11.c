#include <stdio.h>

int main() {
    float temperaturas[12];
    float temperaturaMaxima = -9999.0;
    float temperaturaMinima = 9999.0;
    int mesMaxima, mesMinima;
    int i;

    // Lendo as temperaturas médias de cada mês
    for (i = 0; i < 12; i++) {
        printf("Digite a temperatura media do mes %d: ", i + 1);
        scanf("%f", &temperaturas[i]);

        // Verificando se é a temperatura máxima
        if (temperaturas[i] > temperaturaMaxima) {
            temperaturaMaxima = temperaturas[i];
            mesMaxima = i + 1;
        }

        // Verificando se é a temperatura mínima
        if (temperaturas[i] < temperaturaMinima) {
            temperaturaMinima = temperaturas[i];
            mesMinima = i + 1;
        }
    }

    // Imprimindo as temperaturas médias de cada mês
    printf("\nTemperaturas medias de cada mes:\n");
    for (i = 0; i < 12; i++) {
        printf("Mes %d: %.2f\n", i + 1, temperaturas[i]);
    }

    // Imprimindo a maior temperatura registrada e em qual mês ocorreu
    printf("\nMaior temperatura registrada: %.2f (mes %d)\n", temperaturaMaxima, mesMaxima);

    // Imprimindo a menor temperatura registrada e em qual mês ocorreu
    printf("Menor temperatura registrada: %.2f (mes %d)\n", temperaturaMinima, mesMinima);

    return 0;
}

