#include<stdio.h>
#include<stdlib.h>
typedef struct{
	int valor;
	struct No *prox;
}No;

typedef struct{
	No *inicio;
}Lista;

void inserir_inicio(Lista *lista, int valor){
	No *novo = (No*) malloc(sizeof(No));
	novo->valor = valor;
	novo->prox = lista->inicio;
	lista->inicio = novo;
}

void imprimir(Lista lista){
	No *percorrer;
	percorrer = lista.inicio;
	while(percorrer != NULL){
		printf("|%d \n", percorrer->valor);
		percorrer = percorrer->prox;
	}
	printf("__\n");
}

int remover_inicio(Lista *lista){
    int salvar;
	if(lista->inicio != NULL){
        No *p = lista->inicio;
        salvar = p->valor;
		lista->inicio = p->prox;
		free(p);
		return salvar;
	}else{
		printf("Lista esta vazia!");
	}
}

int main(){
	Lista A, B, C;
	A.inicio = NULL;
	B.inicio = NULL;
	C.inicio = NULL;
    int num;
    char entrada, saida;
	inserir_inicio(&A, 1);
	inserir_inicio(&A, 2);
	inserir_inicio(&A, 3);

	while(0 == 0){
        printf("----A---\n");
        imprimir(A);
        printf("----B---\n");
        imprimir(B);
        printf("----C---\n");
        imprimir(C);

        printf("Digite a lista de entrada e a lista de saída (A, B, C): ");
        scanf("%c%*c", &entrada);
        scanf("%c%*c", &saida);
        if(saida == 'A'){
            num = remover_inicio(&A);
            if(entrada == 'B'){
                inserir_inicio(&B, num);
            }else{
                inserir_inicio(&C, num);
            }
        }else if(saida == 'B'){
            num = remover_inicio(&B);
            if(entrada == 'A'){
                inserir_inicio(&A, num);
            }else{
                inserir_inicio(&C, num);
            }
        }else{
            num = remover_inicio(&C);
            if(entrada == 'A'){
                inserir_inicio(&A, num);
            }else{
                inserir_inicio(&B, num);
            }
        }

	}
}
