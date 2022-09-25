#include <cs50.h>
#include <stdio.h>

int main(void)
{
   //NÃO está FUNCIONANDO corretamente. Tentarei corrigir em breve!
   long cartao;

   // pegar valor do cartao
   cartao = get_long("Número do cartão:");
   
   //variaveis que serão usadas para contar o total de numeros 
   long copia_cartao = cartao; 
   int contador = 0;
   
   //Contador da quantidade de numeros
   while(copia_cartao > 0){
       contador++;
       copia_cartao /= 10;
   }
   
   //pegando os primeiros numeros
   
   int numeros_iniciais;
   
   if(contador == 16){
       numeros_iniciais = cartao/1000000000000000;
   }
   else if(contador == 15){
       numeros_iniciais = cartao/100000000000000;
   }
   else if(contador == 13){
       numeros_iniciais = cartao/1000000000000;
   }
   
   //Cálculo, de Hans Peter Luhn, para validar o cartao
   int soma_total = 0;
   
   
   for (int pos = 0; copia_cartao > 0; pos++) 
    { 
        if (pos % 2 == 0) 
        { 
            soma_total += copia_cartao % 10; 
            copia_cartao /= 10; 
        } 
        else 
        { 
            int ímpar = (copia_cartao % 10) * 2; 
            copia_cartao += (ímpar / 10 + ímpar% 10); 
            copia_cartao /= 10; 
        } 
    } 
   
   
   //Pegando o valor do resto
   int resto;
   resto = soma_total % 10;
   
   //Verificando se é valido e/ou o nome do cartão
   if(resto == 0){
       if(contador == 16){
          if(numeros_iniciais == 51 || numeros_iniciais == 52 || numeros_iniciais == 53 || numeros_iniciais == 54 || numeros_iniciais == 55){
           printf("MASTERCARD\n");
         }
          if(numeros_iniciais == 4 || contador == 13){
           printf("VISA\n");
         } 
       }
       if(numeros_iniciais == 34 || numeros_iniciais == 37 || contador == 15){
           printf(" AMEX\n");
       }
       
   }
   else{
        printf("INVALID\n");
   }
   
   
   
   
   
}
