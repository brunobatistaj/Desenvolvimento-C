#include <stdio.h>

int main(){
	int n, n1, tab;

	printf("Digite numero para receber sua tabuada: \n");
	scanf("%d", &n1);


	for(n=1; n<=10; n++){
		tab=n*n1;
		printf("%d vezes %d eh %d \n",n1,n,tab);
	}

	
	return 0;
}
