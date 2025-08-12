// 13) Uma loja de informática registra diariamente durante o mês de agosto a quantidade de
// notebooks vendidos. Determinar em que dia desse mês ocorreu a maior venda e qual foi a
// quantidade de notebooks vendida nesse dia.

#include <stdio.h>
#include <string.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL,  "Portuguese_Brazil.UTF-8");

    int lista[32], maior=0, melhorDia=0;

    for (size_t i = 0; i < 31; i++)
    {
        printf("Digite quantas vendas teve no dia %d de Agosto: ", i+1);
        scanf("%d", &lista[i]);
    }

    for (size_t i = 0; i < 31; i++)  if (lista[i] > maior){
        // printf("\n%d", maior);
        maior = lista[i];
        melhorDia = i;
    } 
    
    printf("Melhor dia de vendas: %d de Agosto", melhorDia+1);

return 0;

}