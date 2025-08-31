// 10) Grave no arquivo total_litres_of_pure_alcohol.csv somente os números sobre
// consumo de álcool que estão na struct dados (struct que tem os dados do dataset
// drinks.csv).

#include <stdio.h>
#include <string.h>
#include <locale.h>
#include "ex5.h"

int main() {

    //setlocale(LC_ALL,  "Portuguese_Brazil.UTF-8");
    
    PaisAlcol pais;

    FILE *arquivo;

    arquivo = fopen("../db/total_litres_of_pure_alcohol.csv", "w");

    for (int i = 1; i <= 193; i++)
    {
        pais = dados(i);

        fprintf(arquivo, "%.2f\n", pais.total);
    }

    fclose(arquivo);

return 0;

}