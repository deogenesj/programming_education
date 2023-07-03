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

void maior(int X[][NCOL], int lin, int col, int & l_m, int & c_m){
    int m = X[0][0];
    l_m = 0;
    c_m = 0;
    for(int l = 0; l<lin; l++){
        for(int c = 0;c < col; c++){
            if(m < X[l][c]){
                l_m = l;
                c_m = c;
            }
        }
    }
}
int main(){
    int aux, l_m, c_m;
    int mat[NLIN][NCOL];
    ler_mat(mat, NLIN, NCOL);
    maior(mat, NLIN, NCOL, l_m, c_m);
    cout << "posicao linha " << l_m << endl;
    cout << "posicao col " << c_m << endl;
    cout << "o maior valor é " << mat[l_m][c_m] << endl;
    return 0;
}



