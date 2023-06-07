# include <stdio.h>
# include <stdlib.h>
int main(){
	
	int num1, num2, num3;
	
	printf("Codigo de Gray\n");
	
	printf("Digite um numero inteiro (1 ou 0): \n");
	scanf("%d", &num1);
		printf("Digite um numero inteiro (1 ou 0): \n");
	scanf("%d", &num2);
		printf("Digite um numero inteiro (1 ou 0): \n");
	scanf("%d", &num3);
	
	if((num1 > 1 || num1 < 0) || (num2 > 1 || num2 < 0) || (num3 > 1 || num3 < 0)){
		printf("Erro!");
	}else{
		if((num1 == 0) && (num2 == 0) && (num3 == 0)){
			printf("Resultado: 0");
		}else{
			if((num1 == 0) && (num2 == 0) && (num3 == 1)){
				printf("Resultado: 1");
			}else{
				if((num1 == 0) && (num2 == 1) && (num3 == 1)){
					printf("Resultado: 2");
				}else{
					if((num1 == 0) && (num2 == 1) && (num3 == 0)){
						printf("Resultado: 3");
					}else{
						if((num1 == 1) && (num2 == 1) && (num3 == 0)){
							printf("Resultado: 4");
						}else{
							if((num1 == 1) && (num2 == 1) && (num3 == 1)){
								printf("Resultado: 5");
							}else{
								if((num1 == 1) && (num2 == 0) && (num3 == 1)){
									printf("Resultado: 6");
								}else{
									if((num1 == 1) && (num2 == 0) && (num3 == 0)){
										printf("Resultado: 7");
									}else{
										printf("Erro");
									}
								}
							}
						}
					}
				}
			}
		}
	}

return 0;
}
