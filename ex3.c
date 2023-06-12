#include <stdio.h>

int main(){
	int n;
	int cont=0;
	int cont1=0;
	
	do{
		printf("Digite idade: ");
		scanf("%d", &n);
		if(n>=18){
			cont++;
		}else{
			cont1++;
		}
	}
	while(n>0);
	
	printf("%d adultos \n",cont);
	printf("%d menores \n",cont1);	
	
	return 0;
}

