/*
   ▄███████████▄
  ████▀▀▀▀▀██████     🇹🇷 Programa com Argumentos via Linha de Comando
  ████      ██████    Nome: [Gabriel]
  ████▄▄▄▄▄██████▀    Propósito: Saudação personalizada com uso de argc/argv
   ▀█████████▀▀       
   
   ➤ Bandeira da Turquia (versão ASCII estilizada)
   ➤ Programa em C para imprimir uma saudação usando nome via terminal
   ➤ Autor: Gabriel Cunha Nalim

 ██████████████████████████████████████████████████████████████████████
*/

// 5) Atividade prática (slide 15 da aula 5):
// Elabore um programa que:
// a) use main com argc e argv;
// b) receba nome como argumento;
// c) imprima uma mensagem amigável para o usuário;
// d) contenha 3 comentários;
// e) faça uso de um cabeçalho programado por você.

#include <stdio.h>
#include <string.h>
#include <locale.h>

int main(int argc, char *argv[]) {

    setlocale(LC_ALL,  "Portuguese_Brazil.UTF-8");

    printf("Saudação cusão, %s", argv[1]);
    return 0;
}