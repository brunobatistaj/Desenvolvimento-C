# include <stdio.h>
# include <stdlib.h>
int main(){
	int r, g, b;

	printf("Cores RGB \n");
	printf("Digite valor 1 ou 0 para R: \n");
	scanf("%d", &r);
	
	printf("Digite valor 1 ou 0 para G: \n");
	scanf("%d", &g);
	
	printf("Digite valor 1 ou 0 para B: \n");
	scanf("%d", &b);
	

	if((r<0 || r>1) || (g<0 || g>1) || (b<0 || b>1)){
		printf("Valores invalidos \n");
	}else{
		if (r==0 && g==0 && b==0){
		printf("Preto \n");
		}else{
			if(r==1 && g==0 && b==0){
			printf("Vermelho \n");
			}else{
				if(r==0 && g==1 && b==0){
				printf("Verde \n");
				}else{
					if(r==0 && g==0 && b==1){
					printf("Azul \n");
					}else{
						if(r==1 && g==1 && b==0){
						printf("Amarelo \n");
						}else{
							if(r==1 && g==0 && b==1){
							printf("Rosa \n");
							}else{
								if(r==0 && g==1 && b==1){
								printf("Ciano \n");
								}else{
									if(r==1 && g==1 && b==1){
									printf("branco \n");
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
