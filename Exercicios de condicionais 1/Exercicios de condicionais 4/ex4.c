# include <stdio.h>
# include <stdlib.h>
#include <math.h>
int main(){
	int a, b, c;

	printf("Datas \n");
	printf("Digite o dia do ano: \n");
	scanf("%d", &a);
	
	printf("Digite valor equivalente ao mes do ano : \n");
	scanf("%d", &b);
	
	printf("Digite o ano : \n");
	scanf("%d", &c);
	
	if(c<1 || c>2100){
		printf("Data invalida");
	}else{
		if((b==1 || b==3 || b==5 || b==7 || b==8 || b==10 || b==12) && (a>0 && a<=31)){
			printf("Data valida \n");
		}else{
			if ((b==4 || b==6 || b==9 || b==11) && (a>0 && a<=30)){
			printf("Data valida");
			}else{
				if((b==2) && (a>1 && a<=28)){
				printf("Data valida \n");
				}else{
					printf("Data invalida");
				}
				}
				}
				}
return 0;
}
