// 4) Atividade prática (slide 14 da aula 5):
// Criar um .h com a função saudacao(). Faça a implementação de main() r no .c. Deixe
// comentários no código em trecho que achar pertinente. Compile e teste o código gerado.

#include <stdio.h>
#include <string.h>
#include <locale.h>
#include "ex4.h"

int main() {

    setlocale(LC_ALL,  "Portuguese_Brazil.UTF-8");

    char nome[50];

    printf("Digite seu nome de cria: ");
    scanf("%s", nome);

    saudacao(nome); //função do arquivo ex4.h

    return 0;

}