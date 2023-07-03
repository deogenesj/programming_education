#include <iostream>

using namespace std;

int main() {
    int n;
    int primeiro;
    int segundo;
    int terceiro;

    cin >> n;

    if(n>99 && n<1000){
        //tem 3 digitos
        primeiro = n/100;
        segundo = (n%100)/10;
        terceiro = (n%100)%10;
        if ((primeiro < segundo && primeiro < terceiro) && segundo < terceiro){
            cout << n << "é crescente" << endl;
        }else{
            cout << n << "não é crescente" << endl;
        }

    } else {
        //não tem 3 digitos
        cout << "numero invalido" << endl;
    }

    return 0;
}
