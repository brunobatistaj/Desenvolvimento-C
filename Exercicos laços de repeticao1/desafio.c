#include <stdio.h>

int main(){
	int n, n1, nmaior, nmenor;

	for(n=1; n<=5; n++){
		printf("valor: \n");
		scanf("%d", &n1);
		if(n==1){
			nmaior=n1;
			nmenor=n1;
		}
		if(n1>nmaior){
			nmaior=n1;
		}
		
		if(n1<nmenor){
			nmenor=n1;
		}
	}
	
		printf("maior: %d\n", nmaior);
		printf("menor: %d\n", nmenor);
	
	return 0;
}

