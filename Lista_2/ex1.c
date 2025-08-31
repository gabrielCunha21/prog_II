#include <stdio.h>
#include <string.h>
#include <locale.h>

int main() {

    FILE *arquivo;
    int caracter;

    setlocale(LC_ALL,  "Portuguese_Brazil.UTF-8");

    arquivo = fopen("../db/drinks.csv", "r");

    if (arquivo == NULL)
    {
        printf("Erro");
        return 0;
    }

    caracter = getc(arquivo);

    while (caracter != EOF) {
        printf("%c", caracter);
        caracter = getc(arquivo);
    }

    fclose(arquivo);
    

return 0;

}