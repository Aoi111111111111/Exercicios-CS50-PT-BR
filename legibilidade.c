#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main()
{
    //Pegar o texto do usuário
    string texto = get_string("Escreva aqui: ");
    
    //Quantidade de letras
               
    int letras = 0;
    int cópia_quantidade_letras = strlen(texto);
    
    for(int i = 0; i < cópia_quantidade_letras; i++)
    {
        if(isalpha(texto[i]))
        {
            letras++;
        } 
    }
    
    //Quantidade de palavras
    int palavras = 1;
    
    for(int i = 0; i < cópia_quantidade_letras; i++){
        if(texto[i] == ' '){
            palavras++;
            
        }
    }
    
    //Quantidade de frases
    int frases = 0;
    for(int i = 0; i < cópia_quantidade_letras; i++){
        if(texto[i] == '!' || texto[i] == '.' || texto[i] == '?'){
            frases++;
        }
    }
    
    //Calculo de Coleman-Liau 
    
    float L = (float)letras * 100 / (float)palavras;
    float S = (float)frases * 100 / (float)palavras;
    
    float index = round(0.0588 * L - 0.296 * S - 15.8);
    
    
    
    
    //imprimindo resultado
    
    if(index < 1){
        printf("Before Grade 1\n");
    }
    else if (index >= 16){
        printf("Grade 16+\n");
    }
    else{
        printf("Grade %i\n", (int)index);
    }
    
}

