# include <stdio.h>
# include <stdlib.h>
int main(){
	char timea[50], timeb[50];
	int a, b;

	
	printf("Qual nome do time 1: \n");
	scanf("%s", &timea);
	
	printf("Qual nome do time 2: \n");
	scanf("%s", &timeb);
	
	printf("Quantos gols %s fez? \n", timea);
	scanf("%d", &a);
	
	printf("Quantos gols %s fez? \n", timeb);
	scanf("%d", &b);

	if(a<0 || b<0){
		printf("Valores invalidos \n");
	}else{
		if (a>b){
		printf("%s venceu \n", timea);
		}else{
			if(b>a){
			printf("%s venceu \n", timeb);
			}
			else{
			printf("Empate! \n");
	}
	}
	}


return 0;
}
