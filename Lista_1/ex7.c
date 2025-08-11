// 7) Atividade prática (slide 15 da aula 6):
// Faça um programa que:
// a) declare 3 constantes;
// b) use as 3 constantes em cálculos;
// c) exiba ps resultados formatados;
// d) use pelo menos um operador lógico.

#include <stdio.h>
#include <string.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL,  "Portuguese_Brazil.UTF-8");

    int valorA = 5, valorB = 10, valorC = 15;    

    printf("\nResultados: \n 1 - {%.2f}\n 2 - {%d}\n 3 - {%d}", valorA * valorB / valorC*1.0, valorA + 15 * valorB + 10 + valorC +5, valorA + 10 == 15 || valorB == valorC);

return 0;

}