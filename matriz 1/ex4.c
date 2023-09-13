#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int matriz[5][5];
    int i, j;
    int tentativas = 3;
    int numero;
    int encontrado = 0;

    //gerador de números aleatórios
    srand(time(NULL));
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            matriz[i][j] = rand() % 100;
        }
    }

    printf("Matriz:\n");
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            printf("%2d ", matriz[i][j]);
        }
        printf("\n");
    }

    // Loop das tentativas
    while (tentativas > 0) {
        printf("\nTentativas restantes: %d\n", tentativas);
        printf("Digite um numero: ");
        scanf("%d", &numero);

        // Verifica se o número está na matriz
        for (i = 0; i < 5; i++) {
            for (j = 0; j < 5; j++) {
                if (matriz[i][j] == numero) {
                    encontrado = 1;
                    break;
                }
            }
            if (encontrado)
                break;
        }

        // Verifica o resultado da tentativa
        if (encontrado) {
            if (tentativas == 3) {
                printf("PARABENS, jogue na MEGA-SENA!\n");
            } else if (tentativas == 2) {
                printf("BOA! Voce pode ate concorrer com a mae Dina!\n");
            } else {
                printf("UFA! Aos 45 do segundo tempo!\n");
            }
            break;
        } else {
            printf("Numero nao encontrado. Tente novamente.\n");
            tentativas--;
        }
    }

    if (tentativas == 0) {
        printf("Azar no jogo, sorte no Amor. Tente conquistar a pessoa amada!\n");
    }

    return 0;
}

