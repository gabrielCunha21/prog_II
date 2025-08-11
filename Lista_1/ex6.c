// Produza um programa que:
// a) declare variáveis int, float e char;
// b) atribua valores às variáveis criadas;
// c) faça uso de expressões usando operadores aritméticos e lógicos;
// d) imprima os resultados com printf.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include<time.h>

int main() {

    srand(time(NULL));
    setlocale(LC_ALL,  "Portuguese_Brazil.UTF-8");

    int valorint=0;
    float valorfloat=0;
    char valorchar, alfabeto[27]="ABCDEFGHIJKLMNOPQRSTUVWXYZ";

    valorint = rand() % 100;

    valorfloat = rand() % 100 / 5.5;

    valorchar = alfabeto[rand() % 25];

    printf("Valor int: %d\nvalor float: %.2f\nvalor char: %c",valorint, valorfloat, valorchar);
    

    printf("\nResultados: \n 1 - {%d}\n 2 - {%d}\n 3 - {%.2f}\n 4 - {%d}\n 5 - {%d}\n", valorint * 3, valorint + rand() % 100, valorfloat / 2.0, valorint && !1, valorchar == 'A' || valorchar == 'E' || valorchar == 'I' || valorchar == 'O' || valorchar == 'U');

return 0;

}