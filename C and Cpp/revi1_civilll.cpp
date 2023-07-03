/* Faça um programa que desempenhe um menu de um supermercado
Faça um vetor que armazene produtos de supermercado.
As opções do menu serão: adicionar produtos (a), vender produtos (v),
mostrar produtos (m). O programa termina quando o usuário digita -1
*/
#include<iostream>
using namespace std;
#define N 4

int main(){
    int vet[N], opcao;
    for(int i = 0; i < N; i++){
        cin >> vet[i];
    }
    int pos, qtde;
    opcao = 0;
    while(opcao != -1){
        cout << "Digite a opção: a para add, v para vender..." << endl;
        cin >> opcao;
        if(opcao == 'a'){
            cin >> pos;
            cin >> qtde;
            vet[pos] = vet[pos] + qtde;
        }else if (opcao == 'v'){
            cin >> pos;
            cin >> qtde;
            vet[pos] = vet[pos] - qtde;
        }else if (opcao == 'm'){
            for(int i = 0; i < N; i++){
                cout << vet[i];
            }
        }
        return 0;
    }

}
