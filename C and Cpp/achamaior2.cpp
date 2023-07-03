#include<iostream>
using namespace std;
#define NLIN 3
#define NCOL 3

void lerMat(int X[][NCOL], int nl, int nc){
    for(int l = 0; l < nl;l++){
        for(int c = 0; c < nc; c++){
            cin >> X[l][c];
        }
    }
}

int achaMaior(int X[][NCOL], int nl, int nc){
    int maior = X[0][0];
    for(int l = 0;l<nl;l++){
        for(int c = 0;c<nc;c++){
            if(maior < X[l][c]){
                maior = X[l][c];
            }
        }
    }
    return maior;
}

float media(float X[][NCOL], int nl, int nc){
    float soma = 0;
    for(int l = 0; l < nl; l++){
        for(int c = 0; c < nc; c++){
            soma = soma + X[l][c];
        }
    }
    return soma/(nl*nc);
}







int main(){
    int A[NLIN][NCOL];
    lerMat(A, NLIN, NCOL);

    cout << achaMaior(A, NLIN, NCOL);

    return 0;
}


