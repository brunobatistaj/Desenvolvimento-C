#include <stdio.h>

int main(void){
	int i;
	long double soma=1, mult=1;
	
	for(i=2; i<=64; i++){
		mult=mult*2;
		soma+=mult;
		printf("%d valor: %Lf\n",i, mult);
		__mingw_printf("%d valor: %Lf\n",i, mult);
	}
	printf("Valor: %Lf\n", soma);
	__mingw_printf("valor: %Lf\n", soma);
	

	return 0;
	
}
