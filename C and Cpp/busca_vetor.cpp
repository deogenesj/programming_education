#include<iostream>
using namespace std;

#define N 10

void encontra(int vetor[], int x, int tam){
    int i, achou = 0;
    for(i = 0; i < tam; i++){
        if(x == vetor[i]){
            cout << "Achou na " << i+1 << " posicao" << endl;
            achou = 1;
            break;
        }
    }
    if(achou == 0){
        cout << "Não encontrou" << endl;
    }
}

int main(){
    int vet[N], i = 0, aux, busca;

    cin >> aux;
    while(aux >= 0 && i < N){
        vet[i] = aux;
        i++;
        cin >> aux;
    }
    cout << "Digitou " << i << "numeros" << endl;

    cout << "Digite um num: ";
    cin >> busca;
    while(busca >= 0){
        encontra(vet, busca, i);
        cin >> busca;
    }

    return 0;
}
