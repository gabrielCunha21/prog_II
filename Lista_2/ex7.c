// 7) Grave no arquivo beer_servings.csv somente os números sobre consumo de
// cerveja que estão na struct dados (struct que tem os dados do dataset drinks.csv).

#include <stdio.h>
#include <string.h>
#include <locale.h>
#include "ex5.h"

int main() {

    setlocale(LC_ALL,  "Portuguese_Brazil.UTF-8");

    PaisAlcol pais;

    FILE *arquivo;

    arquivo = fopen("../db/beer_servings.csv", "w");

    for (int i = 1; i <= 193; i++)
    {
        pais = dados(i);

        fprintf(arquivo, "%d\n", pais.consumoCerveja);
    }

    fclose(arquivo);

return 0;

}