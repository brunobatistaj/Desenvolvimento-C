#include <stdio.h>

#define DIMENSAO 5

int main() {
    int matriz[DIMENSAO][DIMENSAO];
    int menorElemento = 0;
    int linhaMin = 0;
    int colunaMin = 0;
    int i, j;

    // Preenchendo a matriz com os valores informados pelo usuário
    printf("Digite os valores da matriz:\n");
    for (i = 0; i < DIMENSAO; i++) {
        for (j = 0; j < DIMENSAO; j++) {
            printf("Digite o valor para a posicao [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);

            // Verificando o menor elemento da matriz
            if (i == 0 && j == 0) {
                menorElemento = matriz[i][j];
            } else if (matriz[i][j] < menorElemento) {
                menorElemento = matriz[i][j];
                linhaMin = i;
                colunaMin = j;
            }
        }
    }

    // Encontrando o elemento MINMAX e sua linha e coluna correspondentes
    int elementoMinmax = matriz[linhaMin][0];
    for (j = 1; j < DIMENSAO; j++) {
        if (matriz[linhaMin][j] > elementoMinmax) {
            elementoMinmax = matriz[linhaMin][j];
        }
    }

    // Imprimindo o elemento MINMAX e sua posição
    printf("\n");
    printf("Elemento MINMAX: %d\n", elementoMinmax);
    printf("Posicao: [%d][%d]\n", linhaMin, colunaMin);

    return 0;
}

