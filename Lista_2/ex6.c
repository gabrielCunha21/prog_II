// 6) Grave no arquivo country.csv somente os nomes dos países que estão na struct
// dados (struct que tem os dados do dataset drinks.csv).

#include <stdio.h>
#include <string.h>
#include <locale.h>
#include "ex5.h"

int main() {

    setlocale(LC_ALL,  "Portuguese_Brazil.UTF-8");

    PaisAlcol pais;

    FILE *arquivo;

    arquivo = fopen("../db/country.csv", "w");

    for (int i = 1; i <= 193; i++)
    {
        pais = dados(i);

        fprintf(arquivo, "%s\n", pais.nome);
    }

    fclose(arquivo);

return 0;

}