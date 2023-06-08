#include <stdio.h>

int main(){
	int n, i, s;
	
	for(n=1; n<=10; n++){
		scanf("%d", &i);
		s=i*2;
		printf("O dobro de %d eh %d\n", i, s);
	}
	
	return 0;
}
