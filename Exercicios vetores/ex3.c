#include <stdio.h>

int main() {
    int b[10], x, i;

    printf("Digite 9 valores inteiros:\n");
    for (i = 0; i < 9; i++) {
        scanf("%d", &b[i]);
    }

    printf("Digite o valor de X: ");
    scanf("%d", &x);

    for (i = 8; i >= 0; i--) {
        b[i + 1] = b[i];
    }

    b[0] = x;

    printf("\nVetor B:\n");
    for (i = 0; i < 10; i++) {
        printf("%d ", b[i]);
    }
    printf("\n");

    return 0;
}
