#include <stdio.h>

int main(){
	int M[15][15] = {{16, 2, 14, 13, 12, 9, 1, 7, 10, 15, 19, 11, 17, 8, 3},
                 {16, 19, 4, 12, 14, 6, 5, 10, 3, 7, 2, 20, 15, 9, 13},
                 {14, 6, 8, 18, 5, 6, 14, 9, 10, 4, 18, 19, 15, 5, 2},
                 {20, 7, 20, 2, 11, 17, 2, 17, 1, 13, 1, 15, 19, 3, 19},
                 {11, 3, 6, 17, 3, 20, 20, 8, 5, 14, 10, 5, 7, 8, 7},
                 {20, 12, 7, 9, 15, 5, 20, 19, 15, 17, 16, 18, 2, 7, 16},
                 {18, 16, 11, 1, 18, 16, 17, 11, 11, 14, 9, 13, 15, 14, 13},
                 {11, 10, 12, 16, 14, 17, 15, 13, 3, 19, 10, 7, 10, 17, 18},
                 {7, 14, 3, 3, 2, 7, 15, 20, 2, 8, 9, 18, 20, 4, 12},
                 {1, 4, 16, 20, 14, 1, 15, 18, 8, 4, 12, 3, 18, 6, 3},
                 {14, 6, 18, 3, 15, 17, 11, 8, 9, 7, 13, 10, 8, 16, 7},
                 {10, 14, 2, 4, 7, 10, 1, 12, 5, 4, 1, 1, 9, 13, 6},
                 {12, 3, 19, 12, 10, 20, 1, 10, 8, 7, 11, 17, 3, 19, 6},
                 {13, 19, 2, 1, 20, 1, 3, 12, 16, 8, 12, 13, 17, 18, 13},
                 {15, 3, 6, 16, 6, 20, 11, 12, 10, 3, 13, 7, 1, 14, 16}};
                 
       int i,j, menor;
       
	   menor = M[0][0];
	   
	   for(i=0; i<15;i++){
	   		for(j=0; j<15; j++){
	   			if(M[i][j]<menor){
	   				menor = M[i][j];
				   }
			   }
	   } 

	printf("%d", menor);
	
	return 0;
}
