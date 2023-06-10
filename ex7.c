#include <stdio.h>

int main(void){
	int i, n;
	float a,b,c, media;
	
	printf("Digite um numero:\n");
	scanf("%d", &n);
	
	for(i=1;i<=n;i++){

		printf("Valor de amostra 1: \n");
		scanf("%f", &a);
		
		printf("Valor de amostra 2: \n");
		scanf("%f", &b);
		
		printf("Valor de amostra 3: \n");
		scanf("%f", &c);
		
		media = ((a*2)+(b*3)+(c*5))/(2+3+5);
		printf("Media ponderada de %.1f\n", media);

	}
		
	
	
	return 0;
}
