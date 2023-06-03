# include <stdio.h>

int main(){
	int a,b,c;

	
	printf("Informe ano de nascimento: \n");
	scanf("%d", &a);
	
	printf("Informe ano atual em que estamos: \n");
	scanf("%d", &b);
	
	if(a<0 || b-a>125 || a>b){
		printf("Datas invalidas\n");
	}else{
		c=b-a;
		printf("Idade: %d", c);
	}
		return 0;
}

