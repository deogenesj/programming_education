#include<iostream>
using namespace std;

int main(){
    int num, n1, n2, n3, controle;

    cout << "Digite valor de 3 dígitos: ";
    cin >> num;

    if(num > 99 && num < 1000){ //verifica se o número tem três digitos
        n1 = num/100;
        n2 = (num%100)/10;
        n3 = (num%100)%10;

        controle = (n1+ (n2 * 3) + (n3 * 5)) % 7; //calcula digito de controle
        if(controle%2 == 0){ //se o digito de controle for par, adiciona + 1
            controle = controle+1;
        }

        cout << "Numero obtido: " << num << controle;
    }else{
        cout << "Entrada inválida" << endl;
    }

    return 0;
}
