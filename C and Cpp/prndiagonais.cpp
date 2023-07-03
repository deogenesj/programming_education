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

void diagonalPrin(int X[][N], int lin, int col){
    cout << "Diagonal Principal: " << endl;
    for(int l = 0; l<lin;l++){
        for(int c = 0; c<col;c++){
            if(l == c){
                cout << X[l][c] << " ";
            }
        }
        cout << endl;
    }
}

void diagonalSec(int X[][N], int lin, int col){
    cout << "Diagonal Secundária: " << endl;
    for(int l = 0; l < lin; l++){
        cout << X[l][col-l-1];
    }
}

int main(){
    int A[3][3];
    lerMat(A, 3, 3);
    diagonalPrin(A, 3, 3);
    diagonalSec(A, 3, 3);
    return 0;
}




