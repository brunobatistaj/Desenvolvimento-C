#include <stdio.h>

int main(void){
	int a[10], i;
	
	for (i=1; i<=10; i++){
		printf("Valor %d: ", i);
		scanf("%d", &a[i]);
		
	}
	
	for(i=1; i<=10;i++){
		if(a[i]<=10){
			printf("A[%d] = %d\n", i, a[i]);
		}		
	}


	return 0;
}
