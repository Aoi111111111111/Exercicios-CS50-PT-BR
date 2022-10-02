#include <ctype.h>
#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


// Pontos atribuídos a cada letra do alfabeto
int PONTOS[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

int contar_pontuacao(string palavra);

int main(void)
{
    //Obter palavras de entrada de ambos os jogadores
    string palavra1 = get_string("Player 1: ");
    string palavra2 = get_string("Player 2: ");

    // Pontue as duas palavras
    int pontuacao1 = contar_pontuacao(palavra1);
    int pontuacao2 = contar_pontuacao(palavra2);

    // TODO: Imprima o vencedor
    if (pontuacao1 > pontuacao2){
        printf("Player 1 wins!\n");
    }
    else if (pontuacao1 == pontuacao2){
        printf("Tie!\n");
    }
    else{
        printf("Player 2 wins!\n");
    }
}

int contar_pontuacao(string palavra)
{
    // TODO: Calcular e retornar pontuação para string
    int pontuacao = 0;
    
 
    
  
    for (int i = 0; i < strlen(palavra); i++){
        if(isupper(palavra[i])){
            
            pontuacao += PONTOS[palavra[i] - 'A'];
            }
            
            
        
        else if(islower(palavra[i])){
            
            pontuacao += PONTOS[palavra[i] - 'a'];
            }
            
        }
         return pontuacao;
    }
  
   
    
