# include <stdio.h>

int main(){
	int x, y;

	
	printf("Digite um valor para cordenada X (0 ou 1): \n");
	scanf("%d", &x);
	
	printf("Digite um valor para cordenada y (0 ou 1): \n");
	scanf("%d", &y);

	
	if (x==0 && y==0){
		printf("Origem \n");
	}else{
		if(x==1 && y==0 ){
			printf("Eixo x \n");
		}else{
			if(x==0 && y==1 ){
			printf("Eixo y \n");
			}else{
				if(x==1 && y==1){
			printf("Posicao Q1 \n");	
			}else{
				if(x==-1 && y==-1){
			printf("Posicao Q3 \n");
			}else{
				if(x==-1 && y==1){
			printf("Posicao Q2 \n");	
			}else{
				if(x==1 && y==-1){
			printf("Posicao Q4 \n");	
				}
			}
		}
		}
		}
		}
	}
	
	if (x!=1 && x!=0 && x!=-1){printf("posicao x invalida\n");
	}
	if (y!=1 && y!=0 && y!=-1){printf("posicao y invalida");
	}


return 0;
}





