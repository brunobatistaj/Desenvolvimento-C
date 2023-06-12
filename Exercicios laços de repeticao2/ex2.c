#include <stdio.h>

int main(){
	int n;
	int cont=0;
	
	do{
		printf("Digite um número: ");
		scanf("%d", &n);
		if(n>=100 && n<=200){
			cont++;
		}
	}
	while(n!=0);
	
	printf("%d \n",cont);	
	
	return 0;
}

