#include <stdio.h>

int main(){
	int n, i;
	
	printf("informe um numero:\n");
	scanf("%d", &i);
	
	for(n=1; n<=i; n++){
		printf("%d\n",n);
	}
	
	return 0;
}
