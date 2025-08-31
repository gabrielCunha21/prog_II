// 4) Faça um programa para ler o conteúdo do arquivo drinks.csv e imprimir seu
// conteúdo de modo que cada campo esteja numa linha, como ocorre na Figura 2.


#include <stdio.h>
#include <string.h>
#include <locale.h>

int main() {

    FILE *arquivo;
    int caracter=0, controle=0;

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
            if ( caracter != 44)
            {
                printf("%c", caracter);
            }
            else{
                printf("\n");
            }        
            
        }

        if (caracter == 10) controle++;
     
    }

    fclose(arquivo);    

return 0;

}