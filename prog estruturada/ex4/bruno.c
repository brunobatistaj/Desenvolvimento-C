#include <stdio.h>
#include "bruno.h"
double saldo = 0.0;

void mostrarSaldo() {
    printf("Saldo atual: R$%.2lf\n", saldo);
}

void saque() {
    double valor;
    printf("Digite o valor a ser sacado: R$");
    scanf("%lf", &valor);

    if (valor > saldo) {
        printf("Saldo insuficiente. Operacao cancelada.\n");
    } else {
        saldo -= valor;
        printf("Saque de R$%.2lf realizado com sucesso.\n", valor);
    }
}

void deposito() {
    double valor;
    printf("Digite o valor a ser depositado: R$");
    scanf("%lf", &valor);

    if (valor <= 0) {
        printf("Valor invalido. Operacao cancelada.\n");
    } else {
        saldo += valor;
        printf("Deposito de R$%.2lf realizado com sucesso.\n", valor);
    }
}

void mostrarMenu() {
    printf("Menu:\n");
    printf("a - Consultar saldo\n");
    printf("b - Realizar saque\n");
    printf("c - Realizar deposito\n");
    printf("d - Sair do programa\n");
    printf("Escolha uma opcao: ");
}


