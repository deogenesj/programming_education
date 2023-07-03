#include <iostream>
using namespace std;
#define N 5

void lerMat(int X[][3]){
    for(int l = 0; l < N; l++){
        for(int c = 0; c < 3; c++){
            cin >> X[l][c];
        }
    }
}

void imprimeMat(int X[][3]){
    for(int l = 0; l < N; l++){
        for(int c = 0; c < 3; c++){
            cout << X[l][c];
        }
    }
}

int maior(int X[][3]){
    int soma = 0;
    int maior = 0;
    int posicao = 0;
    for(int l = 0; l < N; l++){
        soma = X[l][1] * X[l][2];
        if (soma > maior){
            maior = soma;
            posicao = l;
        }
    }

    return posicao;
}

int main(){
    int A[N][3], maiorEl;
    lerMat(A);
    maiorEl = maior(A);
    cout << "Produto com maior valor total: " << A[maiorEl][0];

    return 0;
}
