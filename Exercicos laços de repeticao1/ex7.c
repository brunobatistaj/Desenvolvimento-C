#include <stdio.h>

int main(){
	int n, n1, n2;
	printf("Digite inicio da contagem: \n");
	scanf("%d", &n1);
	
	printf("Digite fim da contagem: \n");
	scanf("%d", &n2);

	if(n2>n1){
	for(n=n1; n<=n2; n++){
		printf("%d \n", n);
		}
	}else{
		for(n=n1; n>=n2; n--){
		printf("%d \n", n);
		}
	}
	
	return 0;
}
