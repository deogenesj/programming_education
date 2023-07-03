#include<iostream>
using namespace std;

int main(){
    int n1, n2, x, y, expressao;

    cout << "Digite par de inteiros: ";
    cin >> n1 >> n2;
    if(n1 > n2){
        x = n1;
        y = n2;
    }else{
        x = n2;
        y = n1;
    }
    expressao = (x*x) + (3*y) - 10;
    while(expressao != 0){
        cout << "Resultado: " << expressao << endl;
        cin >> n1 >> n2;
        if(n1 > n2){
            x = n1;
            y = n2;
        }else{
            x = n2;
            y = n1;
        }
        expressao = (x*x) + (3*y) - 10;
    }

    cout << "Resultado = " << expressao;

    return 0;
}
