#include <stdio.h>

int main(){
	int n, i;
	
	for(n=1; n<=10; n++){
		scanf("%d", &i);
		if(i%3==0){
			printf("%d eh divisivel por 3\n",i);
		}else{
			printf("%d nao eh divisivel por 3\n",i);
		}

	}
	
	return 0;
}
