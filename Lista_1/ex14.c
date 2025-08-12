// 14) Faça um programa que leia um nome, que é informado pelo usuário, e imprima este nome de
// forma inversa (de trás para frente).
// Exemplo: Se o usuário digitar o nome AUGUSTO, deve ser impresso OTSUGUA

#include <stdio.h>
#include <string.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL,  "Portuguese_Brazil.UTF-8");

    char nome[50];

    printf("Digite seu nome: ");
    scanf("%s", nome);

    for (int i = strlen(nome); i >= 0; i--) printf("%c", nome[i-1]);
    
return 0;

}