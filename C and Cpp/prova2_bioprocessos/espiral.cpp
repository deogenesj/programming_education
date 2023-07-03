#include<iostream>
using namespace std;
#define N 4
/*
|1   2  3 4|
|12 13 14 5|
|11 16 15 6|
|10  9  8 7|
*/
int main(){
    int i, j, matriz[N][N] = {0, 0, 0, 0,0, 0, 0, 0,0, 0, 0, 0,0, 0, 0, 0};

    //leitura da primeira linha
    for(i = 0; i < N; i++){
        cin >> matriz[0][i];
    }

    //leitura da última coluna
    for(i = 1; i < N-1; i++){
        cin >> matriz[i][N-1];
    }

    //leitura da última linha
    for(i = N-1; i >= 0; i--){
        cin >> matriz[N-1][i];
    }

    //leitura da primeira coluna
    for(i = N-2; i >= 1; i--){
        cin >> matriz[i][0];
    }

     //leitura da primeira linha
    for(i = 1; i < N-1; i++){
        cin >> matriz[1][i];
    }

    for(i = 2; i < N-2; i++){
        cin >> matriz[i][N-2];
    }


    for(i = 0; i < N; i++){
        for(j = 0; j < N; j++){
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
}
