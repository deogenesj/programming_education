/*
Faça um programa para ler uma matriz e enviar a matriz para uma funcao
que faz a impressão na tela da diagonal principal de uma matriz
assim como sua diagonal secundária.
A matriz tem NxN elementos, definidos pelo programador.
O programa deve funcionar para matrizes com qualquer valor de N


*/


#include<iostream>
using namespace std;

#define N 4

int main(){
    int i, cont;
    float matriz[N][N] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16};

    cout << "Diagonal principal: " << endl;
    for(i = 0; i < N; i++){
        cout << matriz[i][i] << " ";
    }

    cout << "\n Diagonal secundária: " << endl;
    for(i = 0; i < N; i++)
        cout << matriz[i][N-i-1] << " ";

    //outra maneira de fazer a d. secundária
    cont = N-1;
    for(i = 0; i < N; i++){
        cout << matriz[i][cont] << " ";
        cont--;
    }

}
