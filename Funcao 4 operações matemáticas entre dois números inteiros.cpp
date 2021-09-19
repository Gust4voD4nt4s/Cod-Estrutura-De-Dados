#include <stdio.h>
int result;

int soma(int a, int b) {
	return a+b;
}

int sub(int a, int b) {
	return a-b;
}

int multi(int a, int b) {
	return a*b;
}

int div(int a, int b) {
	return a/b;
}

int main() {
	int opcao,num1,num2,somar,dividir,multiplicar,subtrair;
	opcao = 9;
	while(opcao != 0) {
		printf("Operacoes matematicas\n");
		printf("1- soma\n");
		printf("2- subtracao\n");
		printf("3- multiplicacao\n");
		printf("4- divisao\n");
		printf("0- finalizar\n");
		scanf("%d",&opcao);
		while(opcao <0 || opcao >4) {
			printf("Valor invalido!\nDigite novamente: ");
			scanf("%d",&opcao);
		}
		if (opcao != 0) {
			printf("Digite o primeiro numero: ");
			scanf("%d",&num1);
			printf("Digite o segundo numero: ");
			scanf("%d",&num2);
		}
		if(opcao == 1) {
			somar = soma(num1, num2);
			printf("A soma eh %d\n", somar);
		} else if(opcao == 2) {
			subtrair = sub(num1, num2);
			printf("A soma eh %d\n", subtrair);
		} else if(opcao == 3) {
			multiplicar = multi(num1, num2);
			printf("A soma eh %d\n", multiplicar);
		} else if(opcao == 4) {
			dividir = div(num1, num2);
			printf("A soma eh %d\n", dividir);
		}
	}
	return 0;
}
