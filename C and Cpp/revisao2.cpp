/* Faça um programa que leia uma matriz quadrada de N posições.
 Faça uma função que envie a matriz e retorne a soma
de cada linha. Mostre a soma de cada linha na main. */

#include <iostream>
using namespace std;

#define N 3

void lerMat(int A[][N], int lin, int col){
    for(int l = 0; l< lin;l++){
        for(int c = 0;c<col;c++){
            cin >> A[l][c];
        }
    }
}

int soma(int A[][N], int lin, int col, int k){
    int soma = 0;
    for(int c = 0; c < col; c++){
        soma = soma + A[k][c];
    }
    return soma;
}

int main(){
    int mat[N][N], k;
    cin >> k;
    lerMat(mat, N, N);
    cout << soma(mat, N, N, k);
    return 0;
}



