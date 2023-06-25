#include <stdio.h>

int main(){
	int d[10], i, cont=0;
	float media, somai;
	
	for(i=1; i<=10; i++){
		printf("Nota do aluno[%d]: ", i);
		scanf("%d", &d[i]);
		
		if(d[i]>=6){
		cont++;			
		}
		
		somai += d[i];
	}
	
	media= somai/10;
	
	printf("Media: %.2f\n", media);
	printf("Alunos acima da media: %d\n", cont);
	
	return 0;
}
