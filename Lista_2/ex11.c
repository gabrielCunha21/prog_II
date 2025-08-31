// 11) Grave no arquivo beer_servings_top_10.csv somente os nomes dos países e os
// números sobre cerveja dos 10 países que mais consomem esta bebida.

#include <stdio.h>
#include <string.h>
#include <locale.h>
#include "ex5.h"

PaisAlcol pais;


char maioresNomes[10] [30];
int maiores[10], controle=0;

void atualizarValor(int posicao){

    for (int i = 9; i > posicao; i--)
    {
        maiores[i] = maiores[i-1];
        //maioresNomes[posicao+1] [0] = '\0';
        for (size_t d = 0; d < 30; d++)
        {
            maioresNomes[i] [d] = maioresNomes[i-1] [d];
        }
    }
    

    maiores[posicao] = pais.consumoCerveja;
    //maioresNomes[posicao] [0] = '\0';
    for (size_t i = 0; i < 30; i++)
    {
        maioresNomes[posicao] [i] = pais.nome[i];
    }

}

int main() {

    setlocale(LC_ALL,  "Portuguese_Brazil.UTF-8");

    FILE *arquivo;

    arquivo = fopen("../db/beer_servings_top_10.csv", "w");

    for (size_t i = 0; i < 10; i++) maiores[i] = 0;
    
    
    for (int i = 2; i <= 193; i++)
    {
        pais = dados(i);

        if (pais.consumoCerveja > maiores[0]) atualizarValor(0);

        else if (pais.consumoCerveja > maiores[1]) atualizarValor(1);

        else if (pais.consumoCerveja > maiores[2]) atualizarValor(2);

        else if (pais.consumoCerveja > maiores[3]) atualizarValor(3);

        else if (pais.consumoCerveja > maiores[4]) atualizarValor(4);

        else if (pais.consumoCerveja > maiores[5]) atualizarValor(5);

        else if (pais.consumoCerveja > maiores[6]) atualizarValor(6);

        else if (pais.consumoCerveja > maiores[7]) atualizarValor(7);

        else if (pais.consumoCerveja > maiores[8]) atualizarValor(8);

        else if (pais.consumoCerveja > maiores[9]) atualizarValor(9);
        
    }

    for (size_t i = 0; i < 10; i++)
    {
        fprintf(arquivo, "%s - %d\n", maioresNomes[i], maiores[i]);
    }
    

    fclose(arquivo);

return 0;

}