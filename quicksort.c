#include <stdio.h>
#include <stdlib.h>
#include "quicksort.h"

int main(){
	int* m;
	int n=0;
	printf("Tamanho do vetor\n");
	scanf("%d",&n);
	m = (int*) malloc(n*sizeof(int));
	for(int i=0;i<n;i++){ //preenchendo o vetor
		printf("m[%d]=",i);
		scanf("%d",&m[i]);
	}
	printf("\nVetor pre ordenacao ");
	for(int i=0;i<n;i++){
		printf("m[%d]=%d ", i, m[i]);
	}
	quicksort(m,0,n);
	printf("\nVetor pos ordenacao ");
	for(int i=0;i<n;i++){
		printf("m[%d]=%d ", i, m[i]);
	}
	return 0;
}