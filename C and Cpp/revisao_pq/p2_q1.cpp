#include<iostream>
using namespace std;

int main(){
    int num, n1, n2, n3, soma;

    cout << "Digite valor de 3 dígitos: ";
    cin >> num;

    n1 = num/100;
    n2 = (num%100)/10;
    n3 = (num%100)%10;
    soma = n1+n2+n3;
    if(soma%2 == 0){
        cout << "Soma par = " << soma;
    }else{
        cout << "Soma impar. Produto = " << n1*n2*n3;
    }
}
