// 9) Dada uma sequência de números inteiros diferentes de zero, terminada por zero, calcular a
// somatória dos números da sequência. 

#include <stdio.h>
#include <string.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL,  "Portuguese_Brazil.UTF-8");

    int numero=1, soma=0;

    do
    {
        printf("\nDigite um numero: ");
        scanf("%d", &numero);

        soma = soma + numero;

    }while (numero != 0);

    printf("\nsoma: %d\n", soma);
    
return 0;

}