#include <stdio.h>

int main(void){
	int resto,n,i,qdr;
	
	printf("Digite um valor n:\n");
	scanf("%d", &n);

	for(i=1;i<=n;i++){
		resto=i%2;
		
		if(resto==0){
			qdr=i*i;
			printf("Quadrado de %d eh %d\n", i, qdr);
		}
	}
	
	
	return 0;
}
