#include <stdio.h>

int main(){
	int n, n1;
	float nota1, nota2, media;

	printf("Digite numero de alunos: \n");
	scanf("%d", &n1);


	for(n=1; n<=n1; n++){
		printf("Digite nota 1 do aluno %d: \n", n);
		scanf("%f", &nota1);
		
		printf("Digite nota 2 do aluno %d: \n", n);
		scanf("%f", &nota2);
		
		media=(nota1+nota2)/2;
		
		if(media>=6){
			printf("aluno %d aprovado \n",n);
		}else{
			printf("aluno %d reprovado \n",n);	
		}

	}

	
	return 0;
}
