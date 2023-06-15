#include <stdio.h>

int main() {
    int i, X[10];

    printf("Digite 10 valores inteiros:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &X[i]);

        if (X[i] <= 0) {
            X[i] = 1;
        }
    }

    printf("\nVetor X:\n");
    for (i = 0; i < 10; i++) {
        printf("%d ", X[i]);
    }
    printf("\n");

    return 0;
}
