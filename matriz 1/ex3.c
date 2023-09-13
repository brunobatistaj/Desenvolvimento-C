#include <stdio.h>

#define DIMENSAO 5

int main() {
    int matriz[DIMENSAO][DIMENSAO];
    int simetrica = 1; // Assume inicialmente que a matriz � sim�trica
    int i, j;

    // Preenchendo a matriz com os valores informados pelo usu�rio
    printf("Digite os valores da matriz:\n");
    for (i = 0; i < DIMENSAO; i++) {
        for (j = 0; j < DIMENSAO; j++) {
            printf("Digite o valor para a posicao [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    // Verificando se a matriz � sim�trica
    for (i = 0; i < DIMENSAO; i++) {
        for (j = 0; j < DIMENSAO; j++) {
            if (matriz[i][j] != matriz[j][i]) {
                simetrica = 0; // A matriz n�o � sim�trica
                break;
            }
        }
        if (!simetrica) {
            break;
        }
    }

    // Imprimindo o resultado
    if (simetrica) {
        printf("A matriz e simetrica.\n");
    } else {
        printf("A matriz nao e simetrica.\n");
    }

    return 0;
}

