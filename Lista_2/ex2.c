// 2) Escreva um programa para ler o conteúdo do arquivo drinks.csv e imprimir o
// conteúdo de cada linha. Não imprima a primeira linha do arquivo (cabeçalho). Ao
// final do processamento, o programa deve informar o número de linhas impressas.


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
            printf("%c", caracter);
        }

        if (caracter == 10) controle++;
        
         
    }

    fclose(arquivo);

    printf("\nNumero de linhas: %d", controle-1);
    

return 0;

}