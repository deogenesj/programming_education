#include <iostream>
using namespace std;

int main (){
    int n1, n2;

    cout << "Digite o n1: ";
    cin >> n1;

    cout << "Digite o n2: ";
    cin >> n2;
    if(n1 <= n2){
        n1 = n1+1; //inicialização
        while(n1 < n2){
            cout  << n1 << endl;
            n1 = n1+1; //incremento
        }
    }else{
        cout << "N1 maior que n2";
    }


    return 0;
}
