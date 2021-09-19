#include <stdio.h>
	
int FatorialRecursiva(int n, int n1) {
	if (n == 1) {
		return n1;
	}
	n1 = n1*--n;
	FatorialRecursiva(n,n1);
}

int main() {
		int num,fac;
	printf("Digite um numero");
	scanf("%d",&num);
	fac = FatorialRecursiva(num, num);
	printf("O fatorial de %d eh %d",num, fac);
}
