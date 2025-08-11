// 8) Dada uma sequência de números inteiros diferentes de zero, terminada por um zero, imprima o
// quadrado de cada número da sequência.

#include <stdio.h>
#include <string.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL,  "Portuguese_Brazil.UTF-8");

    int numero=1;

    do
    {
        printf("\nDigite um numero: ");
        scanf("%d", &numero);

        printf("\nQuadrado: %d\n", numero * numero);
    }while (numero != 0);
    
return 0;

}