// 3) Desenvolva um programa para ler o conteúdo do arquivo drinks.csv e imprimir o
// nome do país e o tamanho em letras deste nome, como demonstra a Figura 1. O
// programa ao final do processamento deve imprimir o maior nome de país encontrado.


#include <stdio.h>
#include <string.h>
#include <locale.h>

int main() {

    FILE *arquivo;
    int caracter=0, controle=0, controle2=0, controle3=0, maior=0;
    char nome[30], nomeMaior[30];

    setlocale(LC_ALL,  "Portuguese_Brazil.UTF-8");

    arquivo = fopen("../db/drinks.csv", "r");

    if (arquivo == NULL)
    {
        printf("Erro");
        return 0;
    }

    caracter = getc(arquivo);

    while (caracter != EOF) {

        caracter = getc(arquivo);

        if (controle != 0)
        {
            if ( caracter != 44 && controle3 == 0)
            {
                printf("%c", caracter);
                nome[controle2] = caracter;
                controle2++;
            }
            else{
                if (controle3 == 0){
                    controle3 = 1;

                    if (controle2 > maior) {
                        maior = controle2;
                        for (size_t i = 0; i < 30; i++) nomeMaior[i] = nome[i];
                    }
                    
                    printf(" %d\n", controle2);
                    controle2 = 0;
                }
            }

            if (caracter == 10) controle3 = 0;
            
            
        }

        if (caracter == 10) controle++;
     
    }

    fclose(arquivo);    

    printf("\n Maior nome %s ", nomeMaior);
    printf(" com %d letras", maior);

return 0;

}