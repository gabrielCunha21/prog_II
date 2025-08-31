// 15) Grave no arquivo no_drinks.csv somente os nomes dos países que não
// consomem nenhuma das bebidas presentes no dataset. O que podemos afirmar com
// base nas informações do arquivo no_drinks.csv? 

#include <stdio.h>
#include <string.h>
#include <locale.h>
#include "ex5.h"

int main() {

    //setlocale(LC_ALL,  "Portuguese_Brazil.UTF-8");

    FILE *arquivo;

    PaisAlcol pais;

    arquivo = fopen("../db/no_drinks.csv", "w");

    for (size_t i = 1; i <= 193; i++)
    {

        pais = dados(i);
        if (pais.total == 0.0) fprintf(arquivo, "%s \n", pais.nome);
    }
    
    fclose(arquivo);

return 0;

}