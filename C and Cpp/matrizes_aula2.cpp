#include<iostream>
using namespace std;

#define M 3
#define N 3

void imprimir(int X[M][N], int nl, int nc){
    int i, j;
    for(i = 0; i < nl; i++){
        for(j = 0; j < nc; j++){
            cout << X[i][j];
        }
        cout << endl;
    }
}

void imprimir3(int X[3][3]){
    int i, j;
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            cout << X[i][j];
        }
        cout << endl;
    }
}
void leitura(int X[][N]){
    int i, j;
    for(i = 0; i < M; i++)
        for(j = 0; j < N-1; j++)
            cin >> X[i][j];
}
//Fazer a soma acumulada de todos os elementos da matriz
int soma_total(int X[M][N]){
    int soma = 0, i, j;
    for(i = 0; i < M; i++){
        for(j = 0; j < N; j++){
            soma = soma + X[i][j];
        }
    }
    return soma;
}

void calcula(int X[][N]){
    int i = 0;
    while(i < N){
        X[i][2] = (X[i][0] + X[i][1])/2
        i++;
    }

    //for(i = 0; i < N; i++)
    //    X[i][2] = (X[i][0] + X[i][1])/2
}

int main(){
    int matriz[M][N];
    leitura(matriz);
    cout << "A soma eh: " << soma_total(matriz);
    return 0;
}
