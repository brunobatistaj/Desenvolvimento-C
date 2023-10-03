#include <stdio.h>
#include "bruno.h"

int main() {
    char escolha;

    do {
        mostrarMenu();
        scanf(" %c", &escolha);

        switch (escolha) {
            case 'a':
                mostrarSaldo();
                break;
            case 'b':
                saque();
                break;
            case 'c':
                deposito();
                break;
            case 'd':
                printf("Saindo do programa.\n");
                break;
            default:
                printf("Opcao invalida.\n");
        }
    } while (escolha != 'd');

    return 0;
}

