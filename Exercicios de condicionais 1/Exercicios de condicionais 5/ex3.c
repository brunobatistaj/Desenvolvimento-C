# include <stdio.h>
# include <stdlib.h>
int main(){
	
	int dia, mes, hoje, diasATT;
	
	printf("Contador para o Natal\n");
	
	printf("Digite dois numeros que representam o dia e o mes atual: \n");
	scanf("%d %d", &dia, &mes);
	
	if((dia > 30 || dia < 1) || (mes > 12 || mes < 1)){
		printf("Data inexistente");
	}else{
		if(dia < 25  || mes < 12 ){
			
			diasATT = ((mes - 1) * 30) + dia;
			hoje = 355 - diasATT;
						
			printf("Faltam %d dias para o Natal! \n", hoje);
		}else{
			if(dia > 25 && mes == 12){				
				printf("O Natal ja passou \n");
			}else{
				if(dia == 25 && mes == 12){
					printf("Feliz Natal");
				}
			}
		}
	}

return 0;
}
