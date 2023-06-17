#include <stdio.h>

int main(void){
	int N[500], i, t, j=0;
	
	do{
		printf("Digite um valor T: ");
		scanf("%d", &t);
	}while(t<2 || t>50);
	
	for (i = 1; i <= 500; i++) {
        N[i] = j;
        j++;
        
        if (j == t) {
            j = 0;
        }
        
        printf("N[%d] = %d\n", i, N[i]);
    }
	



	return 0;
}
