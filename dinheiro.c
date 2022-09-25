include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    float moedas;
    int contar_moedas=0;
    
    // Pergunta enquanto não for respondido da forma correta
    do
    {
       moedas = get_float("Troco: R$");
    }while(moedas <= 0);
    
    int centavos = round(moedas * 100);
    
    // Condição para deduzir o valor das moedas no dinheiro
    while(centavos >= 25){
        centavos -= 25;
        contar_moedas++;
    }
    while(centavos >= 10){
        centavos -= 10;
        contar_moedas++;
    }
    while(centavos >= 5){
        centavos -= 5;
        contar_moedas++;
    }
    while(centavos >= 1){
        centavos-= 1;
        contar_moedas++;
    }
    
  //Mostra o resultado final
    printf("%i\n", contar_moedas);
}

