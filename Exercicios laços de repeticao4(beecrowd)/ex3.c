#include <stdio.h>

int main(void){
	int x,in=0,out=0,n,i;
	
	printf("Digite um valor n:\n");
	scanf("%d", &n);

	for(i=0;i<n;i++){
		printf("Digite valor de x: \n");
		scanf("%d", &x);
		
		if(x>=10 && x<=20){
			in++;
		}else{
			out++;
		}
	}
	
	printf("%d in\n", in);
	printf("%d out\n", out);
	
	return 0;
}
