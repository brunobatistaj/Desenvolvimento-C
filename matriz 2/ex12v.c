#include <stdio.h>

int main(){
int V[100] = {19, 19, 6,  20, 5,  3,  10, 10, 18, 9,  16, 8,  5,  19, 20,
              14, 5,  1,  17, 4,  13, 19, 13, 5,  16, 2,  19, 4,  5,  15,
              17, 9,  9,  16, 8,  11, 13, 6,  16, 16, 7,  7,  10, 15, 18,
              7,  12, 17, 17, 4,  1,  14, 16, 19, 20, 12, 13, 10, 10, 10,
              1,  8,  14, 1,  5,  7,  16, 9,  5,  17, 9,  15, 5,  14, 16,
              18, 10, 10, 5,  15, 2,  7,  17, 3,  12, 16, 5,  18, 9,  4,
              17, 16, 14, 18, 16, 12, 20, 15, 7,  9};
                 
       int i, j, cont=0;

	   for(i=0; i<100; i++){	
			for(j=0; j<100; j++){
				if(V[i]==V[j]){
					cont++;
				}
	   }
	}
	   
	   
	printf("%d", cont);
	
	return 0;
}
