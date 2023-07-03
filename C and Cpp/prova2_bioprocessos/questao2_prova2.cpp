#include<iostream>
using namespace std;
#define N 4

float mediaDiag(int matriz[][N]){
    int i, j, soma = 0;

    //diagonal principal
    for(i = 0; i < N; i++){
        soma = soma + matriz[i][i];
    }

    //diagonal secundária
    for(i = 0; i < N; i++){
        soma = soma + matriz[i][N-i-1];
    }
    return soma/(N*2);
}

void ler_matriz(int matriz[][N]){
    int i, j;
    cout << "Informe a matriz: ";
    for(i = 0; i < N; i++){
        for(j = 0; j < N; j++){
            cin >> matriz[i][j];
        }
    }
}

int main(){
    int matriz[N][N];
    float media;

    ler_matriz(matriz);

    media = mediaDiag(matriz);

    cout << "Media = " << media;
}
