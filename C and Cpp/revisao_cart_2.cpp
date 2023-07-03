/* Calcule a média da diagonal secundária de uma matriz*/

#include<iostream>
using namespace std;

#define N 3

float calculaMedia(int X[][N]){
    int soma = 0;

    for(int l = 0; l < N; l++){
        soma = soma + X[l][N-1-l];
    }

    return soma/N;
}

int main(){
    int mat[N][N];
    for(int l = 0; l < N; l++){
        for(int c = 0;  c< N; c++){
            cin >> mat[l][c];
        }
    }
    cout << "A media é: " << calculaMedia(mat);
    return 0;
}
