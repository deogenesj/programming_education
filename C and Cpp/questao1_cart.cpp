#include<iostream>
using namespace std;

#define N 5

void lerMat(int vet[]){
    for(int i = 0; i< N; i++){
        cin >> vet[i];
    }
}

void imprimeVetor(int vet[]){
    for(int i = 0; i < N; i++){
        cout << vet[i] << " ";
    }
}

int main(){
    int A[N], eli;
    lerMat(A);
    cin >> eli;
    cout << "Valor eliminado" << A[eli];
    for(int i = eli;i<N-1;i++){
        A[i] = A[i+1];
    }
    A[N-1] = 0;
    imprimeVetor(A);
    return 0;
}
