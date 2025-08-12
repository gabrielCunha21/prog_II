// 11) Considere n > 0 e dois números inteiros positivos i e j diferentes de 0, imprimir em ordem
// crescente os n primeiros naturais que são múltiplos de i ou de j e ou de ambos.
// Exemplo: Para n = 6, i = 2 e j = 3 a impressão deve ser : 0, 2, 3, 4, 6, 8.

#include <stdio.h>
#include <string.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL,  "Portuguese_Brazil.UTF-8");

    int numeroN=0, numeroI=0, numeroJ=0, teste=0, num=0;

    printf("Digite o numero N: ");
    scanf("%d", &numeroN);
    printf("Digite o numero I: ");
    scanf("%d", &numeroI);
    printf("Digite o numero J: ");
    scanf("%d", &numeroJ);

    printf("\nMúltiplos: ");

    while (num != numeroN){
        if (teste % numeroI == 0 || teste % numeroJ == 0){
            printf("%d ", teste);
            num++;
        } 
        teste++;
    } 
     
return 0;

}