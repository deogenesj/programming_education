#include<iostream>
using namespace std;

#define N 5

void leitura(int vet[]){
    int i;
    for(i = 0; i < N; i++)
        cin >> vet[i];
}

void imprimir(int vet[]){
    int i;
    for(i = 0; i < 2*N; i++)
        cout << vet[i] << " ";
}

void uniao(int A[], int B[], int C[]){
    int i, cont;
    for(i = 0; i < N; i++)
        C[i] = A[i];

    //outra solução para incluir o vetor B em C
    //for(i = 0; i < N; i++)
    //    C[i+N] = B[i];

    cont = 0;
    for(i = N; i < N*2; i++){
        C[i] = B[cont];
        cont++;
    }
}

int main(){
    int A[N], B[N], C[2*N];
    leitura(A);
    leitura(B);
    uniao(A, B, C);
    imprimir(C);
    return 0;
}
