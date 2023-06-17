#include <stdio.h>

int main(void){
	int i;
	float x, ant, N[100];
	
	printf("Digite um valor ");
	scanf("%f", &x);
	N[0]=x;
	for (i = 1; i < 100; i++) {
		N[i]=N[i-1]/2;
        
        printf("N[%d] = %.2f\n", i, N[i]);
    }
	



	return 0;
}
