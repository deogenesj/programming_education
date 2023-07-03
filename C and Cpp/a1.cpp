#include<iostream>
using namespace std;

void lerVet(int X[], int n){
    int i;
    for(i=0;i<n;i++)
        cin >> X[i];
}

int produto(int A[], int B[], int n){
    int i, soma;
    soma = 0;

    for(i=0;i<n;i++){
        soma = soma + A[i] * B[i];
    }

    return soma;
}
#define TAM 3

int main(){
    int vet1[TAM], vet2[TAM], aux;
    lerVet(vet1, TAM);
    lerVet(vet2, TAM);
    aux = produto(vet1, vet2, TAM);
    cout << aux;
    return 0;
}
