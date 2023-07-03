#include<iostream>
using namespace std;

#define M 4

int smenorColLin(int mat[][M], int k){
    int menorL = mat[k][0], menorC = mat[0][k];
    for(int l = 0; l < M; l++){
        if(mat[k][l] < menorL){
            menorL = mat[k][l];
        }
        if(mat[l][k] < menorC){
            menorC = mat[l][k];
        }
    }
    return menorL + menorC;
}

int main(){
    int mat[M][M];
    for(int l = 0; l < M; l++){
        for(int c = 0; c < M; c++){
            cin >> mat[l][c];
        }
    }
    int soma = 0;
    for(int k = 0; k<M; k++){
        soma = soma + smenorLinCol(mat, k);
    }
    cout << "Soma dos menores" << soma;
    return 0;
}
