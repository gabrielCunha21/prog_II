// 10) Dado um número inteiro n >= 0, calcular o fatorial de n (n!).

#include <stdio.h>
#include <string.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL,  "Portuguese_Brazil.UTF-8");

    int numero=0, fatorial=1;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    if (numero >= 0)
    {
        for (int i = 1; i < numero; i++)
        {
            fatorial *= i;
        }

        fatorial *= numero;

        printf("Fatorial de %d: %d", numero, fatorial);
    
    }
    else{
        printf("Numero invalido");
    }

return 0;

}