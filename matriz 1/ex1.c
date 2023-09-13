#include <stdio.h>
//problema no menores valores
int main(){
	int i, j;
	float m[10][3]; 
	float soma[10];
	float maior=0, menor=10;
	
	for(i=1; i<=10; i++){
		for(j=1; j<=3; j++){
			printf("Nota %d do aluno %d: ", j, i);
			scanf("%f", &m[i][j]);	
			
			soma[i] += m[i][j];
			
			if(m[i][j]>maior){
				maior=m[i][j];
			}
			if(m[i][j]<menor){
				menor=m[i][j];
			}
		}
		soma[i] /= 3;
	}
	
	for(i=1; i<=10; i++){
	printf("Aluno %d\n", i);
	printf("Media: %.2f\n", soma[i]);
	
		if(soma[i]>=6){
			printf("Aluno Aprovado!\n");
		}else{
			printf("Aluno Reprovado!\n");
		}
	
	//notas maiores e menores individuais
	float maiorporaluno = m[i][0];
	float menorporaluno = m[i][0];
		for(j=1; j<=3; j++){
			if(m[i][j]>maiorporaluno){
				maiorporaluno = m[i][j];
			}
			
			if(m[i][j]<menorporaluno){
				menorporaluno = m[i][j];
			}
		}
		
		printf("Maior nota do aluno %d: %.2f\n", i, maiorporaluno);
		printf("Menor nota do aluno %d: %.2f\n", i, menorporaluno);	
	}	
	
	printf("Maior nota entre todos alunos: %.2f\n", maior);
	printf("Menor nota entre todos alunos: %.2f\n", menor);	
	
	return 0;
}
