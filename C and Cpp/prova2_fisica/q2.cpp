#include<iostream>
using namespace std;

#define M 3
#define N 4

void ler_matriz(int matriz[][N]){
    int i, j;
    cout << "Informe a matriz" << endl;
    for(i = 0; i < M; i++){
        for(j = 0; j < N; j++){
            cin >> matriz[i][j];
        }
    }
}

int calcula_2maior(int matriz[][N]){
    int i, j, cont = 0;
    for(i = 0; i < M; i++){
        for(j = 0; j < N; j++){
            if(j == 0){
                if(matriz[i][j] > 0 && matriz[i][j] > matriz[i][j+1]){
                    cont++;
                }
            }else if(j == N-1){
                if(matriz[i][j] > 0 && matriz[i][j] > matriz[i][j-1]){
                    cont++;
                }
            }else{
                if(matriz[i][j] > matriz[i][j-1] && matriz[i][j] > matriz[i][j+1]){
                    cont++;
                }
            }
        }
    }

    return cont;
}

int main(){
    int matriz[M][N];
    ler_matriz(matriz);
    cout << "Qtde. elementos 2-maior: " << calcula_2maior(matriz);

    return 0;
}
