/* Leia um vetor A de N posicoes definidas por #define
Imprima metade do vetor e a outra metade imprima como zero (0)
*/
#include<iostream>
using namespace std;
#define N 10

void lerVet(int A[], int n){
    for(int i = 0;i<n;i++){
        cin >> A[i];
    }
}

void imprimeVet(int A[N], int n){
    for(int i = 0;i<n;i++){
        if(i < n/2){
            cout << A[i] << " ";
        }else{
            cout << '0' << " ";
        }
    }
}

void imprimeVet2(int A[], int n){
    for(int i = 0;i<n/2;i++){
        cout << A[i] << " ";
    }

    for(int i = n/2; i< n;i++){
        cout << '0' << " ";
    }
}

int main(){
    int vet[N];
    lerVet(vet, N);
    imprimeVet(vet, N);
    return 0;
}

