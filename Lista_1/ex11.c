// 11) Considere n > 0 e dois números inteiros positivos i e j diferentes de 0, imprimir em ordem
// crescente os n primeiros naturais que são múltiplos de i ou de j e ou de ambos.
// Exemplo: Para n = 6, i = 2 e j = 3 a impressão deve ser : 0, 2, 3, 4, 6, 8.

#include <stdio.h>
#include <string.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL,  "Portuguese_Brazil.UTF-8");

    int numeroN=0, numeroI=0, numeroJ=0, lista[50], teste=0, s=0;

    printf("Digite o numero N: ");
    scanf("%d", &numeroN);
    printf("\nDigite o numero I: ");
    scanf("%d", &numeroI);
    printf("\nDigite o numero J: ");
    scanf("%d", &numeroJ);

    printf("\nMúltiplos: ");

    for (int i = 0; i < numeroN; i++)
    {
        lista[i] = numeroI * i;
    }

    for (int i = 0; i < numeroN; i++)
    {
        for (int d = 0; d < numeroN; d++)
        {
            if (numeroJ*i == lista[d])
            {
                teste = lista[d];
            }
            
        }

        if (numeroJ*i != teste)
        {
            /* code */
        }
        
        
    }
    
    
    
return 0;

}