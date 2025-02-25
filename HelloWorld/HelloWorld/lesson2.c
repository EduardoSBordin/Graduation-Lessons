#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

struct Paciente {
	char nome[50];
	int idade;
	char telefone[15];
};
int main2() {
	struct Paciente pacientes[3];
	int i;

	strcpy(pacientes[0].nome, "Luciana");
	pacientes[0].idade = 40;
	strcpy(pacientes[0].telefone, "1234-3234");

	strcpy(pacientes[1].nome, "Eduardo");
	pacientes[1].idade = 50;
	strcpy(pacientes[1].telefone, "1234-2344");

	strcpy(pacientes[2].nome, "Nathalia");
	pacientes[2].idade = 20;
	strcpy(pacientes[2].telefone, "1111-9999");

	for (i = 0; i < 3; i++) {
		printf("Paciente: %d", i + 1);
		printf("Nome: %s\n", pacientes[i].nome);
		printf("Idade: %d\n", pacientes[i].idade);
		printf("Telefone: %s\n\n", pacientes[i].telefone);
	}
	return 0;
}