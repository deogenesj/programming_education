#include<stdio.h>
int fatorial(int n){
	int contador = 1, result = 1;

	if(n == 0){
		return 1;
	}else{
		result = n * fatorial(n-1);
	}
	return result;
}

int main(){
	int n, resultado;
	scanf("%d", &n);

	resultado = fatorial(n);
	printf("O fatorial eh: %d", resultado);
	return 0;
}

