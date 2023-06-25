#include <stdio.h>

int main(){
	int r[5], a[10], i,j, pt=0;
	
		for(i=0; i<5; i++){
			printf("gabarito R[%d]: ", i);
			scanf("%d", &r[i]);	
		}
		
		for(i=0; i<10; i++){
			printf("Valor apostado a[%d]: ", i);
			scanf("%d", &a[i]);	
		}
		
		for(i=0; i<10; i++){
			for(j=0; j<5;j++){
				if(a[i]==r[j]){
					pt++;
				}
			}	
		}		
		
		printf("Fez %d pontos", pt);

	
	return 0;
}
