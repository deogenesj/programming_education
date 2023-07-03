#include<iostream>
using namespace std;
#define N 5

void troca(int & a, int & b){
    int aux;
    aux = a;
    a = b;
    b = aux;
}

int maior(int vet[]){
    int i, pos, ma;
    ma = vet[0];
    for(i = 1; i < N; i++){
        if(vet[i] > ma){
            ma = vet[i];
            pos = i;
        }
    }
    return pos;
}

int menor(int vet[]){
    int i, pos, me;
    me = vet[0];
    for(i = 1; i < N; i++){
        if(vet[i] < me){
           me = vet[i];
           pos = i;
        }
    }
    return pos;
}

int main(){
    int i, ma, me, vetor[N] = {10, 16, 5, 30, 3};
    pos_me = menor(vetor);
    pos_ma = maior(vetor);
    troca(vetor[pos_me], vetor[0]);
    troca(vetor[pos_ma], vetor[N-1]);
    for(i = 0; i< N; i++)
        cout << vetor[i] << " ";
}
