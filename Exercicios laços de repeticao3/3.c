#include <stdio.h>

int main (void){
	
	int i, cont=0;
	float c[5],soma=0, media;
	
	for(i=0;i<=5;i++){
		printf("Digite um num:");
		scanf("%f", &c[i]);
		
		if(c[i]>=1){
			cont++;
		}
		soma+=c[i];		
}

	media=soma/i;
	printf("media: %f\n", media);
	printf("Positivos: %d\n", cont);
	
	return 0;
}
