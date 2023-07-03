#include<iostream>
using namespace std;

#define M 2
#define N 3

int main(){
    int i, j;
    int matriz[M][N] = {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}};

    for(i = 0; i < M; i++){
        for(j = 0; j < N; j++){
            cin >> matriz[i][j];
        }
    }

    int soma = 0;
    for(i = 0; i < M; i++){
        for(j = 0; j < N; j++){
            soma = soma + matriz[i][j];
        }
    }

    for(i = 0; i < M; i++){
        for(j = 0; j < N; j++){
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }

    for(i = M-1; i >= 0; i--){
        for(j = N-1; j >= 0; j--){
            cin >> matriz[i][j];
        }
    }


}
