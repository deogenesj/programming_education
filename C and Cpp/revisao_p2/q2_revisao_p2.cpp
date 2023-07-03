/*
. (flipvert) Faça um programa que leia do usuário uma matriz N × M (N e M definidos via diretiva #define),
e altere a matriz lida invertendo a ordem dos elementos de cada coluna,
imprimindo a matriz resultante na tela. A inversão deve ser feita na
própria matriz lida, sem auxílio de matrizes auxiliares.
*/
#include<iostream>
using namespace std;

#define M 3
#define N 3

int main(){
    int matriz[M][N], i, j;

    //Leitura da matriz na ordem invertida
    for(i = N-1; i >= 0; i--){
        for(j = 0; j < N; j++){
            cin >> matriz[i][j];
        }
    }

    //impressao da matriz
    for(i = 0; i < M; i++){
        for(j = 0; j < N; j++){
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
