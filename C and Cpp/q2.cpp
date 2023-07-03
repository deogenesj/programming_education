#include<iostream>
using namespace std;

#define N 200

int main(){
    int vet[N];
    int i, aux;
    i = 0;
    aux = 0;

    while(aux >= 0 && i < N){
        cin >> aux;
        if(aux >= 0){
            vet[i] = aux;
            i++;
        }
    }
    if(i != 0)
        cout << "o vetor tem " << i+1 << " posições";

    i = 0;
    aux = 0;
    while(aux >= 0){
        cin >> aux;
        if(aux >= 0){
            for(i=0;i<N;i++){
            if(aux == vet[i]){
                cout << "Está no vetor";
                break;
            }else{
                cout << "Não está";
            }
        }
        }

    }



}
