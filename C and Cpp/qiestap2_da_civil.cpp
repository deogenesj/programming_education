#include<iostream>
using namespace std;

#define N 5

int maior(int mat[][3]){
    int maior = 0, pos = 0;
    for(int l = 0; l < nlin; l++){
        if(maior < mat[l][1] * mat[l][2]){
            maior = mat[l][1] * mat[l][2];
            pos = mat[l][0];
        }
    }
    return pos;
}

int main(){
    int X[N][3];
    lerMat(X);
    cout << maior(X);
    return 0;
}
