/* Exemplo 5 de uso da estrutura de repeti��o for

   Fluxo de execu��o do for
   1 - inicializacao
   2 - teste
   3 - comandos
   4 - incremento
   5 - teste

   A fun��o printf retorna o total de caracteres impressos, como o printf da condi��o est� dentro
   de um operador tern�rio, e sempre imprimi alguma coisa, o operador tern�rio retorna um n�mero diferente
   de zero, o que faz que somente a condi��o x < 5 interfira no for.
*/

#include<conio.h>
#include<stdio.h>

int main(){
   int x;
   printf("Antes do for: %d\n",x);
   for( x = 0  ,printf("\nApos inicializacao: %d", x) ;
       (x < 5 ? printf("\n\nx < 5 = Verdadeiro") : printf("\nx < 5 = Falso")) && x < 5 ;
        x++    ,printf("\nApos incremento: %d", x)
      )
   {
      printf("\nDentro: %d", x); //Bloco de comandos
   }
   printf("\n\nApos o final do for: %d", x);
   getch();
}
