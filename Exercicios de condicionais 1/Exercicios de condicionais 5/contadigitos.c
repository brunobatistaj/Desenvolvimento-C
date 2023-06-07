#include <stdio.h>

int main(void){
    int contaDigitos = 0, valor;
    scanf("%d", &valor);
    
	do
     {
        contaDigitos = contaDigitos + 1;
         valor = valor / 10;
      }
      
      while (valor != 0);
      printf("%d\n", contaDigitos);
      
 return 0;
}
