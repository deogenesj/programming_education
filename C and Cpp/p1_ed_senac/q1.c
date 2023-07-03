#include<stdio.h>

int main(){
    int vetor[5], i, maior, menor;

    printf("Digite o vetor inicial: \n");
    for(i = 0; i < 5; i++){
        scanf("%d", &vetor[i]);
    }

    maior = vetor[0];
    menor = vetor[0];
    for(i = 0; i < 5; i++){
        if(maior < vetor[i]){
            maior = vetor[i];
        }
        if(menor > vetor[i]){
            menor = vetor[i];
        }
    }

    for(i = 0; i < 5; i++){
        if(vetor[i] > 0){
            vetor[i] = vetor[i] - maior;
        }else if(vetor[i] < 0){
            vetor[i] = vetor[i] + menor;
        }
    }

    printf("Novo vetor: ");
    for(i = 0; i < 5; i++){
        printf("%d ", vetor[i]);
    }

    return 0;
}
