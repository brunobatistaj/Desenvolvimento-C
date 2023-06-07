#include <stdio.h>
int main(){
	int a, b, c;
	float media;
	
	printf("Digite o valor das tres tentativas de arremesso: ");
	scanf("%d %d %d", &a, &b, &c);
	
	media=(a+b+c)/3;
	printf("Media de: %.1f \n", media);
	
	if(a>b && a>c){
		printf("Maior distancia: %d", a);
	}else{
		if(b>c){
			printf("Maior distancia: %d", b);
		}else{
			if(a==b && b==c){
				printf("Empate!");
			}else{
				printf("Maior distancia: %d", c);
			}
		}
	}
	
	
	return 0;
}
