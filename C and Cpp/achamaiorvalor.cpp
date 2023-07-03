#include<iostream>
using namespace std;

#define NLIN 3
#define NCOL 3

void ler_mat(int X[][NCOL], int lin, int col){
    for(int l = 0;l<lin;l++){
        for(int c = 0; c < col; c++){
            cin >> X[l][c];
        }
    }
}

int maior(int X[][NCOL], int lin, int col){
    int m = X[0][0];
    for(int l = 0; l<lin; l++){
        for(int c = 0;c < col; c++){
            if(m < X[l][c]){
                m = X[l][c];
            }
        }
    }
    return m;
}

int main(){
    int aux;
    int mat[NLIN][NCOL];
    ler_mat(mat, NLIN, NCOL);
    cout << maior(mat, NLIN, NCOL);
    return 0;
}


