/*
Faça um programa para compara números (igual, menor ou maior) de um
vetor de 5 posições. Conte, para cada número do vetor, quantos
números são menores que ele, guardando essa info em um vetor.
Imprima a comparação para cada número, depois imprima o vetor
original e o vetor que guarda a info do maior.
*/

#include<iostream>
using namespace std;

#define N 5

int main(){
    int i, j, cont = 0;
    float vet[N], maior[N];

    for(i = 0; i < N; i++){
        cin >> vet[i];
    }

    for(i = 0; i < N; i++){
        cont = 0;
        for(j = 0; j < N; j++){
            if(vet[i] == vet[j]){
                cout << vet[i] << " é igual a " << vet[j] << endl;
            }else if(vet[i] < vet[j]){
                cout << vet[i] << " é menor que " << vet[j] << endl;
            }else{
                cont++;
                cout << vet[i] << " é maior que " << vet[j] << endl;
            }
        }
        maior[i] = cont;
    }
    for (i  = 0; i < N; i++)
        cout << maior[i] << " ";
}
