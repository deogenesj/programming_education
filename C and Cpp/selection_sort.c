#include<stdio.h>

#define N 7

int main(){
	int i, j, min, aux, vet[N] = {7, 6, 5, 4, 3, 2, 1};

	for(i = 0; i< N-1; i++){
		min = i;
		for(j = i+1; j < N; j++){
			if(vet[min] > vet[j]){
				min = j;
			}
		}
		if(i != min){
			aux = vet[i];
			vet[i] = vet[min];
			vet[min] = aux;
		}
	}

	for(i = 0; i < N; i++){
		printf("%d ", vet[i]);
	}


}
