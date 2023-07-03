/*
(maxcols) Faça um programa que leia do usuário uma matriz N × M (N e M definidos via
diretiva #define) e preencha um vetor de M elementos, tal que a posição i do vetor contenha o
maior valor da coluna i da matriz. Ao final, o programa deve imprimir o vetor
*/
#include<iostream>
using namespace std;

#define M 3
#define N 3

int main(){
    int matriz[M][N];
    int vetor[M], i, j, maior;

    //Leitura da matriz
    for(i = 0; i < M; i++){
        for(j = 0; j < N; j++){
            cin >> matriz[i][j];
        }
    }

    for(i = 0; i < M; i++){
        //iniciar a variável que guardará o maior valor com o primeiro valor da primeira coluna
        maior = matriz[0][i];

        //for para "andar" em uma coluna fixa da matriz
        for(j = 0; j < N; j++){
            if(matriz[j][i] > maior){
                maior = matriz[j][i];
            }
        }
        //adicionar o maior valor da coluna no vetor, depois que terminou de andar na coluna
        vetor[i] = maior;
    }

    for(i = 0; i < M; i++){
        cout << vetor[i] << " ";
    }

    return 0;
}
