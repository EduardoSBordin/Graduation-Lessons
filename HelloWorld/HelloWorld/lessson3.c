#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

struct Paciente {
	char nome[50];
	int idade;
	char telefone[15];
};
void exibirPaciente(struct Paciente p) {
	printf("Nome: %s\n", p.nome);
	printf("Idade: %d\n", p.idade);
	printf("Telefone: %s\n\n", p.telefone);
}
int main3() {
	struct Paciente paciente1 = {"Fernando", 22, "7777-7777"};
	struct Paciente paciente2 = { "Eduardo", 27, "8888-8888" };

	exibirPaciente(paciente1);
	exibirPaciente(paciente2);
	return 0;
}