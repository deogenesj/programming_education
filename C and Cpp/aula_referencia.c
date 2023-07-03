#include<stdio.h>

void maiorMenor(int n1, int n2, int n3, int *maior, int *menor){
	int aux;
	if(n1 > n2 && n1 > n3){
		*maior = n1;
		if(n2<n3){
			*menor = n2;
		}else{
			*menor = n3;
		}
	}else if(n2> n1 && n2> n3){
		*maior = n2;
		if(n1<n3){
			*menor = n1;
		}else{
			*menor = n3;
		}
	}else{
		*maior = n3; 
		if(n1<n2){
			*menor = n1;
		}else{
			*menor = n2;
		}
	}
}

int main(){
	int x, y, z, grande, pequeno;
	x = 10;
	y = 0;
	z = 5;
	maiorMenor(x, y, z, &grande, &pequeno);
	printf("Maior = %d e Menor = %d", grande, pequeno);
	return 0;
}

