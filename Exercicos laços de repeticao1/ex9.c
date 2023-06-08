#include <stdio.h>

int main(){
	int n, n1;

	printf("Digite numero para receber contagem decrescente: \n");
	scanf("%d", &n1);


	for(n=n1; n>=1; n--){
		printf("%d \n",n);
	}

	
	return 0;
}
