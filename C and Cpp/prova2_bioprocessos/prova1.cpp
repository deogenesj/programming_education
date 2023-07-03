#include<iostream>
using namespace std;

#define N 8

int main(){
    int i, j, cont;
    float vet[N], vet_R[N];

    for(i = 0; i < N; i++){
        cin >> vet[i];
    }

    for(i = 0; i < N; i++){
        cont = 0;
        for(j = 0; j < N; j++){
            if(vet[i] == vet[j]){
                cont++;
            }
        }
        vet_R[i] = cont;
    }

    for(i = 0; i < N; i++){
        cout << vet_R[i] << " ";
    }

}
