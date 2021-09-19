#include <stdio.h>

int BubbleSort(int n) {
	int i,aux,k;
	int a[8] = {26, 12, 51, 32, 17, 4, 22, 6};
	for (k = 0; k < n-1; k++) {
		for (i = 0; i < n-k-1; i ++) {
			if (a[i]>a[i+1]) {
				aux = a[i];
				a[i] = a[i+1];
				a[i+1] = aux;
			}
		}
		for ( n = 0; n < 8; n++) {
			printf("%d,", a[n]);
		}
		printf("\n");
	}
	return 0;

}

int SelectionSort(int n) {
	int A[8] = {26, 12, 51, 32, 17, 4, 22, 6};
	for (int i =0; i < n-1; i++) {
		int iMin = i;
		for (int j=i+1; j < n; j++) {
			if(A[j] < A[iMin]) {
				iMin = j;
			}
		}
		int aux;
		aux = A[i];
		A[i] = A[iMin];
		A[iMin] = aux;
		for ( n = 0; n < 8; n++) {
			printf("%d,", A[n]);
		}
		printf("\n");
	}
	return 0;
}

int InsertionSort(int n) {
	int i, key, value;
	int A[8] = {26, 12, 51, 32, 17, 4, 22, 6};
	for (i= 0; i < n; i++) {
		value = A[i];
		key = i;
		while(key>0 && A[key - 1] > value) {
			A[key] = A[key - 1];
			key = key - 1;
		}
		A[key]=value;
		for ( n = 0; n < 8; n++) {
			printf("%d,",A[n]);
		}
		printf("\n");
	}
}

int main(void) {
	int opcao;
	int n=8;
	while(opcao != 0) {
		printf("\nMENU DE opcoes");
		printf("\n1-Bubble Sort");
		printf("\n2-Selection Sort");
		printf("\n3-InsertionSort");
		printf("\n0-Finalizar\n");
		scanf("%d",&opcao);
		if(opcao == 1) {
			BubbleSort(n);
		} else if(opcao == 2) {
			SelectionSort(n);
		} else if(opcao ==3) {
			InsertionSort(n);
		} else {
			return 0;
		}
	}
}
