#include <cs50.h>
#include <stdio.h>

int main(void)
{
      // TODO: Solicite o valor inicial ao usuário
      int populacao, populacao_final, anos = 0;
      do
      {
          populacao = get_int("População Inicial: ");
      }while(populacao < 9);

     // TODO: Solicite o valor final ao usuário
      do
      {
          populacao_final = get_int("População Final: ");
      }while(populacao_final < populacao);


     // TODO: Calcule o número de anos até o limite
     
     
     while(populacao_final > populacao){
         populacao = populacao + (populacao / 3) - (populacao/4);
         anos++;
     }

     // TODO: Imprima o número de anos
     printf("Years: %d", anos);
}

