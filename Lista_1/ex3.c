// 3) Atividade prática (slide 10 da aula 5):
/* 
Desenvolva um programa que:
 a) mostre nome e idade;
 b) use um comentário de linha e um de múltiplas linhas;
 c) utilize <stdio.h>.*/


 #include <stdio.h>
 #include <string.h>
 #include <locale.h>
 
 int main() {

    char nome[50];
    short idade=0;
 
    setlocale(LC_ALL, "Portuguese_Brazil.UTF-8");

    puts("Digite seu nome: ");
    scanf("%s", nome);
    puts("Digite sua idade: ");
    scanf("%d", &idade);

    printf("%s tem %d anos");

    //Liberdade
    /*Ai que prazer
    Não cumprir um dever,
    Ter um livro para ler
    E não fazer!
    Ler é maçada,
    Estudar é nada.
    Sol doira
    Sem literatura
    O rio corre, bem ou mal,
    Sem edição original.
    E a brisa, essa,
    De tão naturalmente matinal,
    Como o tempo não tem pressa...
    Livros são papéis pintados com tinta.
    Estudar é uma coisa em que está indistinta
    A distinção entre nada e coisa nenhuma.
    Quanto é melhor, quanto há bruma,
    Esperar por D.Sebastião,
    Quer venha ou não!
    Grande é a poesia, a bondade e as danças...
    Mas o melhor do mundo são as crianças,
    Flores, música, o luar, e o sol, que peca
    Só quando, em vez de criar, seca.
    Mais que isto
    É Jesus Cristo,
    Que não sabia nada de finanças
    Nem consta que tivesse biblioteca...
    Fernando Pessoa, in "Cancioneiro"*/

    return 0;
}