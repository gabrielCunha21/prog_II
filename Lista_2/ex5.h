// 5) Elabore um programa para ler o conteúdo do arquivo drinks.csv e armazená-lo na
// memória RAM usando estrutura (struct), de modo que seja possível realizar
// posteriormente operações neste conjunto (pesquisa, ordenação, etc...).

#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <stdlib.h>

typedef struct
{
    char nome[30];
    int consumoCerveja;
    int consumoDestilado;
    int consumoVinho;
    float total;
} PaisAlcol;


PaisAlcol dados(int indice) {

    FILE *arquivo;
    int caracter=0,  controle=0, controle2=0, controle3=0, controle4=0;
    char NCerveja[4], Ndestilado[4], Nvinho[4], Ntotal[6], *resto;

    PaisAlcol estrutura[195];

    //setlocale(LC_ALL,  "Portuguese_Brazil.UTF-8");

    arquivo = fopen("../db/drinks.csv", "r");

    caracter = getc(arquivo);

    while (caracter != EOF) {

        caracter = getc(arquivo);

        if (controle != 0)
        {
            if (caracter != 44 && controle3 == 0)
            {
                estrutura[controle4].nome[controle2] = caracter;
                controle2++;
            }
            else if (caracter == 44 && controle3 == 0)
            {
                estrutura[controle4].nome[controle2] = '\0';
                controle3 = 1;
                controle2 = 0;
            }
            else if (caracter != 44 && controle3 == 1)
            {
                NCerveja[controle2] = caracter;
                controle2++;
            }
            else if (caracter == 44 && controle3 == 1){
                NCerveja[controle2] = '\0';
                controle3 = 2;
                controle2 = 0;
            }
            else if (caracter != 44 && controle3 == 2)
            {
                Ndestilado[controle2] = caracter;
                controle2++;
            }
            else if (caracter == 44 && controle3 == 2){
                Ndestilado[controle2] = '\0';
                controle3 = 3;
                controle2 = 0;
            }
            else if (caracter != 44 && controle3 == 3)
            {
                Nvinho[controle2] = caracter;
                controle2++;
            }
            else if (caracter == 44 && controle3 == 3){
                Nvinho[controle2] = '\0';
                controle3 = 4;
                controle2 = 0;
            }
            else if (caracter != 44 && controle3 == 4 && caracter != 10)
            {
                Ntotal[controle2] = caracter;
                controle2++;
            }
            if (caracter == 10)
            {

                Ntotal[controle2] = '\0';

                estrutura[controle4].consumoCerveja = strtol(NCerveja, &resto, 10);
                estrutura[controle4].consumoDestilado = strtol(Ndestilado, &resto, 10);
                estrutura[controle4].consumoVinho = strtol(Nvinho, &resto, 10);
                estrutura[controle4].total = strtof(Ntotal, &resto);

                // printf("N com virgula char %s\n", Ntotal);

                // printf("N com virgula float %f\n", estrutura[controle4].total);

                // NCerveja[0] = '\0';
                // Ndestilado[0] = '\0';
                // Nvinho[0] = '\0';
                // Ntotal[0] = '\0';

                memset(NCerveja,0,sizeof(NCerveja));
                memset(Ndestilado,0,sizeof(Ndestilado));
                memset(Nvinho,0,sizeof(Nvinho));
                memset(Ntotal,0,sizeof(Ntotal));
                
                controle3 = 0;
                controle2 = 0;
                controle4++;
            }
        }

        if (caracter == 10) controle++;

    }

    fclose(arquivo);

    // for (size_t i = 0; i < 193; i++)
    // {
    //     printf("\nNome %s Cerveja %d Destilada %d Vinho %d Total %.2f", estrutura[i].nome, estrutura[i].consumoCerveja, estrutura[i].consumoDestilado, estrutura[i].consumoVinho, estrutura[i].total);
    // }
    

return estrutura[indice-1];

}