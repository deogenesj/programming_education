#include<iostream>
using namespace std;
#define N 6

void lerVet(int X[], int n){
    for(int i = 0;i<n;i++){
        cin >> X[i];
    }
}

void nota(int A[], int B[], int C[], int n){
    int i = 0;
    int j = 0;
    while(i < n){
        C[j] = A[i];
        j++;
        C[j] = B[i];
        j++;
        i++;
    }
}

void imprime(int X[], int n){
    for(int i =0;i<n;i++){
        cout << X[i] << " ";
    }
}

int main(){
    int A[N], B[N], C[N*2];
    lerVet(A, N);
    lerVet(B, N);
    nota(A, B, C, N);
    imprime(C, N*2);
    return 0;
}



