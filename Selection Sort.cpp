#include "stdio.h"

int SelectionSort(int A[],int n){
  for (int i =0; i < n-1;i++){
    int iMin = i;
    printf("%d\n",iMin);
    for (int j=i+1; j < n;j++) {
      if(A[j] < A[iMin]) {
        iMin = j;
      }
    }
    int aux;
    aux = A[i];
    A[i] = A[iMin];
    A[iMin] = aux;
  }
  return 0;
}
  
int main(void) {
  int n = 8;
  int Array[8] = {12, 15, 1, 3, 40, 17, 7, 10};
  Array[n] = SelectionSort(Array, n);
  for(int x=0; x<n; x++){
    printf("%d,", Array[x]);
  } 
}
