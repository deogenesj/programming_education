#include<iostream>
using namespace std;
#define M 4
#define N 3

int main(){
    int mat[M][N] = {1, 2, 3, 4, 5, 6, 7,8, 9, 10, 11, 12};
    int mat2[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int i, j;
    for(i = 0; i < M; i++){
        for(j = 0; j < N;j++){
            cin << mat[i][j];
        }
    }

    for(i = 0; i < M; i++){
        for(j = 0; j < N;j++){
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
}
