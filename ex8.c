#include <stdio.h>

int main(void){
	int num1 = 1, num2 = 60;
  
    for(num1=1; num1<=num2; num1+=3){
        
		printf("I=%d\n",num1);
        
		if(num1==37){
        	break;
		}
	}
     for(num2=60; num2<=60; num2-=5){
        
		printf("J=%d\n",num2);
        
		if(num2==0){
        	break;
		}        
    
	}
	
	return 0;
}
