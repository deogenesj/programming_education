/*
Faça um programa que imprima a soma dos elementos
à esquerda e à direita de um elemento i de uma
matriz MxN. Se não houver algo à direita ou
esquerda, some 0 no lugar.

|1 2 3 4|
|5 6 7 8|
|9 10 11 12|

*/
#include<iostream>
using namespace std;
#define M 3
#define N 4
int main(){
    int matriz[M][N] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    int i, j;
    int x, y;

    for(i = 0; i < M; i++){
        for(j = 0; j < N; j++){
            if(j == 0){
                cout << matriz[i][j] + matriz[i][j+1];
            }else if(j == N-1){
                cout << matriz[i][j] + matriz[i][j-1];
            }else{
                cout << matriz[i][j] + matriz[i][j-1] + matriz[i][j+1];
            }
        }
    }
    return 0;
}
