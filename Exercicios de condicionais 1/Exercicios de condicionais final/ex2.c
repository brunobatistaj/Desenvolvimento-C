#include <stdio.h>
int main(){
	int jogador1, jogador2;
	
	printf("Jogador 1 seleciona entre: 1-Pedra, 2-Papel, 3-Tesoura, 4-Spock e 5 para lagarto\n");
	scanf("%d", &jogador1);
	
	printf("Jogador 2 seleciona entre: 1-Pedra, 2-Papel, 3-Tesoura, 4-Spock e 5 para lagarto\n");
	scanf("%d", &jogador2);
	
	
	
	if(jogador1==1 && jogador2==5){
		printf("jogador 1 venceu!");
	}else{
		if(jogador1==1 && jogador2==3){
			printf("jogador 1 venceu!");
		}else{
			if(jogador1==2 && jogador2==1){
						printf("jogador 1 venceu!");
			}else{
				if(jogador1==2 && jogador2==4){
							printf("jogador 1 venceu!");
				}else{
					if(jogador1==3 && jogador2==2){
								printf("jogador 1 venceu!");
					}else{
						if(jogador1==3 && jogador2==5){
							printf("jogador 1 venceu!");
					}else{
						if(jogador1==4 && jogador2==3){
							printf("jogador 1 venceu!");
					}else{
						if(jogador1==4 && jogador2==1){
							printf("jogador 1 venceu!");
					}else{
						if(jogador1==5 && jogador2==4){
							printf("jogador 1 venceu!");
					}else{
						if(jogador1==5 && jogador2==2){
							printf("jogador 1 venceu!");	
					}else{
						if(jogador1==jogador2){
							printf("empate!");
						}else{
							printf("jogado2 venceu!");
						}
					}
				}
			}
		}
	}}}}}}
	
	
	
	return 0;
}
