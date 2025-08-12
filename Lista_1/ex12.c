// 12) Um matemático italiano da idade média conseguiu modelar o ritmo de crescimento da
// população de coelhos através de uma sequência de números naturais que passou a ser conhecida
// como sequência de Fibo. O n-ésimo número da sequência de Fibo Fn é dado pela
// seguinte fórmula de recorrência:
// F1 = 1
// F2 = 1
// Fn = Fn-1 + Fn-2 para n > 2
// Faça um programa que leia o número de termos e, a seguir, imprima a sequência de Fibo

#include <stdio.h>
#include <string.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL,  "Portuguese_Brazil.UTF-8");

    int nTermo=0, fibo=1, lista[100];

    printf("Digite o número de termos: ");
    scanf("%d", &nTermo);

    for (int i = 0; i < nTermo; i++)
    {
        if (i==0){
            lista[i] = 0;
            printf("0 - 1 - ");
        }
        
        else{
            lista[i] = fibo;
            fibo = fibo + lista[i-1];
            printf("%d - ",fibo);
        }
    }
    
    printf("Resultado: %d", fibo);

return 0;

}