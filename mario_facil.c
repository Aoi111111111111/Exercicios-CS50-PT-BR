#include <stdio.h>
#include <cs50.h>


int main(void)
{
  int altura, contador = 1;
  
  // Pega o valor da altura
  do
  {
     altura = get_int("Altura: ");
  }while(altura <=0 || altura > 8);

  //Escada da esquerda
  while(contador <= altura){
     int espaco = altura - contador;
     for(int i = 0; i < espaco; i++){
        printf(" ");
     }
     for(int j = 0; j < contador; j++){
        printf("#");
     }
     
     contador++;
     printf("\n");
  }
}
