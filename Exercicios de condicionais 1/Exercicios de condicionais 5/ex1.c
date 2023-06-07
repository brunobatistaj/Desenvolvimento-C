#include <stdio.h>

int main() {
    int cpf1, cpf2, cpf3, cpf4, cpf1U, cpf1D, cpf1C, cpf2U, cpf2D, cpf2C, cpf3U, cpf3D, cpf3C, cpf4U, cpf4D;
    int r, r2, resto1, resto2, resto3, d1, d2;

    printf("Digite quatro valores inteiros correspontes ao seu cpf: \n");
    scanf("%d %d %d %d", &cpf1, &cpf2, &cpf3, &cpf4);
	//verifica 3 centenas positivas e menores q 1000 e ultima dezena ate 99
    if ((cpf1 < 0 || cpf1 > 999) || (cpf2 < 0 || cpf2 > 999) || (cpf3 < 0 || cpf3 > 999) || (cpf4 < 0 || cpf4 > 99)) {
        printf("Cpf incorreto!.\n");
    }
    
    //divide centena em unidade - dezena - centena e os armazena ------- ex:123 se transforma em 1, 2, 3
    cpf1U=cpf1%10;
    resto1=cpf1/10;
    cpf1D=resto1%10;
    cpf1C=resto1/10; 
    
    cpf2U=cpf2%10;
    resto2=cpf2/10;
    cpf2D=resto2%10;
    cpf2C=resto2/10;

    cpf3U=cpf3%10;
    resto3=cpf3/10;
    cpf3D=resto3%10;
    cpf3C=resto3/10;

    cpf4U=cpf4%10;
    cpf4D=cpf4/10;
	//verifica se primeiro digito dos dois ultimos sao verdadeiros
	d1=cpf1C*10+cpf1D*9+cpf1U*8+cpf2C*7+cpf2D*6+cpf2U*5+cpf3C*4+cpf3D*3+cpf3U*2;
	r=d1%11;
	if(r==0 || r==1){
		d1=0;
	}else{
		d1=(11-r);
	}
	//verifica sesegundo digito dos dois ultimos sao verdadeiros
	d2=cpf1D*10+cpf1U*9+cpf2C*8+cpf2D*7+cpf2U*6+cpf3C*5+cpf3D*4+cpf3U*3+cpf4D*2;
	r2=d2%11;
	if(r2==0 || r2==1){
		d2=0;
	}else{
		d2=(11-r2);
	}
	//verifica se ultima dezena digitada corresponde a d1e d2
	if (cpf4D == d1 && cpf4U == d2){
		printf("Cpf valido!");
	}else{
		printf("Cpf invalido");
	}

    return 0;
}
