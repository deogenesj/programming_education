#include<iostream>
using namespace std;
#define N 6
void lerVet(int X[], int n){
    for(int i = 0; i < n;i++){
        cin >> X[i];
    }
}

void imprimirVet(int X[], int n){
    for(int i = 0; i < n;i++){
        cout << X[i] << " ";
    }
}

void codNota(int A[], int B[], int C[], int n, int n2){
    int i = 0;
    int j = 0;
    while(i<n){
        C[j] = A[i];
        j++;
        C[j] = B[i];
        i++;
        j++;
    }
}

int main(){
    int A[N], B[N], C[12];

    lerVet(A, N);
    lerVet(B, N);
    codNota(A, B, C, N, N);
    imprimirVet(C, 12);
    return 0;
}
