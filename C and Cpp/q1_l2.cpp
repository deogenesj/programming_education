#include<iostream>
using namespace std;

void lerVet(int vet[], int n){
    int i;
    cout << "Digite o vetor: " << endl;
    for(i=0;i<n;i++)
        cin >> vet[i];
}

int prodEscalar(int A[], int B[], int n){
    int soma, i;
    soma = 0;
    for(i=0;i<n;i++){
        soma = (A[i] * B[i]) + soma;
    }
    return soma;
}
#define TAM 5

int main(){
    int A[TAM], B[TAM];
    lerVet(A, TAM);
    lerVet(B, TAM);
    cout << prodEscalar(A, B, TAM);
    return 0;
}
