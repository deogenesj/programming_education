#include<iostream>
using namespace std;

int main(){
    int x1, x2, aux, n, cont;

    cin >> n;

    if(n < 3){
        cout << "n deve ser maior ou igual a 3";
    }else{
        cin >> x1 >> x2;
        cont = 2;
        while(cont < n){
            cont = cont + 1;
            if(cont % 2 != 0){
                aux = x1 * x2;
            }else{
                aux = x1 + x2;
            }
            cout << "[" << cont << "] : " << aux << endl;
            x1 = x2;
            x2 = aux;
        }
    }

    return 0;
}
