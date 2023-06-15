#include <stdio.h>

int main() {
    int i, n[10], mult;

    printf("Digite um valor inteiro:\n");
    scanf("%d", &n[0]);
    
    
    for (i=1; i<=10; i++){
		n[i]=n[i-1]*2;
    	printf("N[%d] = %d \n", i, n[i]);
	}

    return 0;
}
