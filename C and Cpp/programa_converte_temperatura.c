/* Programa para conversão de temperatura */

#include <stdio.h>

/*Função auxiliar */
float converte (float c){
	
	/* Declaração de variáveis */
	float f;

	f = 1.8*c + 32;
	return f;
}

/*Função principal */
int main (void){
	
	/* Declaração de variáveis */
	float t1;
	float t2;
	
	/* Mostra mensagem para usuário */
	printf("Digite a temperatura em Celsius: ");

	/* Captura valor digitado via teclado */
	scanf("%f", &t1);

	/* Faz conversão, chamando função auxiliar */
	t2 = converte(t1);

	/* Exibe resultado */
	printf("Temperatura em Fahrenheit: %f\n", t2);
	return 0;
}