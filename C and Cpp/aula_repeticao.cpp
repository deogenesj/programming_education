#include<iostream>
using namespace std;

int main(){
    int n1, n2, k;

    cout << "Digite dois num o primeiro menor que o segundo:" << endl;
    cin >> n1;
    cin >> n2;

    if(n1 < n2){
        k = n1+1;//Inicialização
        while(k < n2){
            cout << k << endl;//pdrão repetitivo
            k = k+1;//incremento
        }
    }
    return 0;
}
