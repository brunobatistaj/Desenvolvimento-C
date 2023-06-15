#include <stdio.h>

int main() {
    int vetor[10],i,fat;
    
    printf("Digite 10 valores inteiros positivos:\n");
    
    for (i = 1; i <= 10; i++) {
        do {
            printf("Valor %d: ", i);
            scanf("%d", &vetor[i]);
            
            if (vetor[i] <= 0)
                printf("Digite apenas valores positivos.\n");
                
        } while (vetor[i] <= 0);
        	
		for(fat=1; vetor[i]>1; vetor[i] = vetor[i]-1){
		fat = fat * vetor[i];
	}		
    printf("Fatorial eh %d\n", fat);
    }

    


    return 0;
}
