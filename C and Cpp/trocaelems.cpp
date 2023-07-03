#include<iostream>
using namespace std;
#define N 3

void lerMat(int X[][N], int lin, int col){
    for(int l = 0;l<lin;l++){
        for(int c = 0;c<col;c++){
            cin >> X[l][c];
        }
    }
}

void imprimeMat(int X[][N], int lin, int col){
    for(int l = 0;l<lin;l++){
        for(int c = 0;c<col;c++){
            cout << X[l][c];
        }
        cout << endl;
    }
}

void maior(int M[], int X[][N], int lin, int col){
    int maior;
    for(int l = 0; l < lin; l++){
        maior  = X[l][0];
        for(int c = 0; c < col; c++){
            if(maior < X[l][c]){
                maior = X[l][c];
            }
        }
        M[l] = maior;
    }
}


void troca(int A[][N], int M[], int lin, int col){
    int aux;
    for(int l = 0; l< lin; l++){
        for(int c = 0; c< col; c++){
            if(A[l][c] == M[l]){
                aux = A[l][c];
                A[l][c] = A[l][l];
                A[l][l] = aux;
            }
        }
    }
}

int main(){
    int mat[3][3], vet[3];
    lerMat(mat, 3, 3);
    maior(vet, mat, 3, 3);
    troca(mat, vet, 3, 3);
    imprimeMat(mat, 3, 3);
    return 0;
}



