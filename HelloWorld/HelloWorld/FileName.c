#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

struct Pessoa {
    char nome[50];
    int idade;
    char telefone[15];

};

int main1() {
    struct Pessoa lista[3];
    int i;

    // Preenchendo as informacões para cada pessoa

    strcpy(lista[0].nome, "Alana");
    lista[0].idade = 18;
    strcpy(lista[0].telefone, "12345-6789");

    strcpy(lista[1].nome, "Lucas");
    lista[1].idade = 14;
    strcpy(lista[1].telefone, "9876-5432");

    strcpy(lista[2].nome, "Julia");
    lista[2].idade = 8;
    strcpy(lista[2].telefone, "6534-3493");

    // Imprimindo as informações

    for (i = 0; i < 3; i++) {
        printf("Nome: %s\n", lista[i].nome);
        printf("Idade: %d\n", lista[i].idade);
        printf("Telefone: %s\n\n", lista[i].telefone);
    }
    return 0;
}



