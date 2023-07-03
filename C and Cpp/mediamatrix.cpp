#include<iostream>
using namespace std;

#define NLIN 3
#define NCOL 3

void lerMatriz(int A[][NCOL], int lin, int col){
    for(int l = 0; l < lin; l++){
        for(int c = 0; c < col; c++){
            cin >> A[l][c];
        }
    }
}

float media(int A[][NCOL], int lin, int col){
    float media = 0;
    for(int l = 0; l<lin;l++){
        for(int c = 0; c< col;c++){
                media = media + A[l][c];
        }
    }
    media = media / (lin*col);
    return media;
}

int main(){
    int M[NLIN][NCOL];
    lerMatriz(M, NLIN, NCOL);
    cout << media(M, NLIN, NCOL);
    return 0;
}


