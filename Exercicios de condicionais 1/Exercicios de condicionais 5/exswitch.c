#include <stdio.h>

int main() {
    int opcao;
    
    printf("Digite uma opcao (com um ou dois digitos): ");
    scanf("%d", &opcao);

    switch(opcao) {
        case 1:
            printf("um\n");
            break;
        case 2:
            printf("dois\n");
            break;
        case 3:
            printf("tres\n");
            break;
        case 4:
            printf("quatro\n");
            break;
        case 5:
            printf("cinco\n");
            break;
        case 6:
            printf("seis\n");
            break;
        case 7:
            printf("sete\n");
            break;
        case 8:
            printf("oito\n");
            break;
        case 9:
            printf("nove\n");
            break;
        case 10:
            printf("dez\n");
            break;
        case 11:
            printf("onze\n");
            break;
        case 12:
            printf("doze\n");
            break;
        case 13:
            printf("treze\n");
            break;
        case 14:
            printf("quatorze\n");
            break;
        case 15:
            printf("quinze\n");
            break;
        case 16:
            printf("dezesseis\n");
            break;
        case 17:
            printf("dezessete\n");
            break;
        case 18:
            printf("dezoito\n");
            break;
        case 19:
            printf("dezenove\n");
            break;
        case 20:
            printf("vinte\n");
            break;
        default:
            printf("OPCAO INVALIDA. REPETINDO OPCOES\n");
            break;
    }

    return 0;
}
