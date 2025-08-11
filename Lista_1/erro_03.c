#include <stdio.h>
#include <locale.h> // atualiza para aceitar caracter especial

int main() {
    setlocale(LC_ALL, "Portuguese_Brazil.UTF-8"); // atualiza para aceitar caracter especial

    int idade = 18;
    if (idade >= 18) { //invertido sinal para acertar a logica de idade
        printf("Você é maior de idade.\n"); 
    } else {
        printf("Você é menor de idade.\n");
    }
    return 0;
}
