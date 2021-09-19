#include <stdio.h>
#include <stdlib.h>

int main() {
	char nome[50];
	int dia, mes, ano, telefone;
	
	printf("Digite seu nome: ");
	gets(nome);
	
	printf("Data de nacimento\n");
	printf("Dia: ");
	scanf("%d",&dia);
	printf("mes: ");
	scanf("%d",&mes);
	printf("ano: ");
	scanf("%d",&ano);
	
	printf("Digite seu telefone: ");
	scanf("%d",&telefone);
	system("cls");
	printf("Nome: %s\nData de nacimento: %d/%d/%d\nTelefone: %d",nome,dia,mes,ano,telefone);
}
