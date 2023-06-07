# include <stdio.h>
# include <stdlib.h>
#include <math.h>
int main(){
	int a, b, c,pot;

	printf("Calculadora \n");
	printf("Digite valor 1: \n");
	scanf("%d", &a);
	
	printf("Digite valor 1 para divisao inteira, 2 para conhecer resto de divisao, 3 para raiz quadrada e 4 para potenciacao : \n");
	scanf("%d", &c);
	
	if(c==3){
		printf("Valor de raiz quadrada eh: %f ", sqrt(a));	
	}else{
	printf("Digite valor 2 : \n");
	scanf("%d", &b);
	}
	
	if(c<1 || c>4 ){
		printf("Valores invalidos \n");
	}else{
		if (c==1){
		printf("Valor da divisao inteira eh: %d \n",a/b);
		}else{
			if(c==2){
			printf("Valor de resto da divisao eh: %d \n", a%b);
			}else{
				if(c==4){
					pot = pow(a,b);
				printf("Potencia de %d elevado a %d eh: %d\n",a , b , pot);
				}}}}
return 0;
}
