#include <stdio.h>

int main(void){
	int n, x, i, resto;
	
	printf("Digite um valor n:\n");
	scanf("%d", &n);

	for(i=1;i<=n;i++){
		printf("Digite um numero:\n");
		scanf("%d", &x);
		
		resto=x%2;
		
		if(resto==0){
			printf("Even ");
		}else{
			printf("Odd ");
		}

	
		if(x>0){
			printf("Positive \n");
		}else{
			if(x<0){
			printf("Negative \n");
		}else{
			printf("Null");
		}
	}
	}
		
	
	
	return 0;
}
