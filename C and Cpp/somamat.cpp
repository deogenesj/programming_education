#include<iostream>
using namespace std;

#define NLIN 2
#define NCOL 2

void lerMat(int X[][NCOL], int lin, int col){
    for(int l = 0;l<lin;l++){
        for(int c = 0;c<col;c++){
            cin >> X[l][c];
        }
    }
}

void soma(int A[][NCOL], int B[][NCOL], int C[][NCOL],
    int lin, int col){
        for(int l = 0; l < lin; l++){
            for(int c = 0; c < col; c++){
                C[l][c] = A[l][c] + B[l][c];
            }
        }
}

void imprimir(int X[][NCOL], int lin, int col){
    cout << endl;
    for(int l = 0;l<lin;l++){
        for(int c = 0;c<col;c++){
            cout << X[l][c] << " ";
        }
        cout << endl;
    }
}

void encontra(int A[][NCOL], int lin, int col,
 int valor, int & pl, int & pc){
    for(int l = lin-1; l < lin;l++){
        for(int c = col-1; c < col;c++){
            if(valor == A[l][c]){
                pl = l;
                pc = c;
            }
    }
}

int main(){
    int A[NLIN][NCOL];
    int valor, pl = -1, pc = -1;
    cin >> valor;
    lerMat(A, NLIN, NCOL);
    encontra(A, NLIN, NCOL, valor, pl, pc);
    if(pl == -1){
        cout << "Não encontrado";
    }else{
        cout << pl << pc;
    }
    return 0;
}
