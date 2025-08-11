#include <stdio.h>
#include <locale.h> // atualiza para aceitar caracter especial

int main() {
    setlocale(LC_ALL, "Portuguese_Brazil.UTF-8"); // atualiza para aceitar caracter especial

    printf("Este código tem erro sintático"); // ; adicionado no final da linha
    return 0;
}


