#include<stdio.h>

#define N 5

int ler_matriz(int matriz[N][3]){//essa função não precisava ser criada na prova
    int i, j;

    printf("Informe tabela de produtos: \n");
    for(i = 0; i < N; i++){
        for(j = 0; j < 3; j++){
            scanf("%d", &matriz[i][j]);
        }
    }
}

int maior(int matriz[N][3]){
    int i, aux, maior, cod_maior;

    //inicializar maior e cod_maior
    maior = matriz[0][1] * matriz[0][2];
    cod_maior = matriz[0][0];

    for(i = 0; i < N; i++){
        aux = matriz[i][1] * matriz[i][2];//calcular o valor_total atual
        if(aux > maior){//comparar se valor atual é maior que maior
            maior = aux;//se for maior, atualizar a variavel maior...
            cod_maior = matriz[i][0];//... e o código do produto maior
        }
    }

    return cod_maior;
}

int main(){
    int mat[N][3], i, j, maior_cod;

    ler_matriz(mat);

    maior_cod = maior(mat);

    printf("Produto com maior valor total: %d", maior_cod);

    return 0;
}
