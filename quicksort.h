#include <stdio.h>
#include <stdlib.h>

void troca(int* a, int* b){
	int temp = *a;
	*a = *b;
	*b = temp;
}

int particao(int* A, int p, int r){
	int x = A[r];
	int i = p-1;
	for(int j=p;j<r;j++){
		if(A[j] <= x){
			i++;
			troca(&A[i], &A[j]);
		}
	}
	troca(&A[i+1],&A[r]);
	return i+1;
}

void quicksort(int* A, int p, int r){
	if(p<r){
		int q = particao(A, p, r);
		quicksort(A, p, q-1);
		quicksort(A, q+1, r);
	}
}