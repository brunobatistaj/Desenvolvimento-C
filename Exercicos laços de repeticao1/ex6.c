#include <stdio.h>

int main(){
	int n, i;
	
	for(n=1; n<=10; n++){
		scanf("%d", &i);
		if(i%2==0){
			printf("%d eh par\n",i);
		}else{
			printf("%d eh impar\n",i);
		}

	}
	
	return 0;
}
