Faça uma função que lê dois numeros int
e retorne a soma. Chame a função no main
e imprima o resultado na tela

#include<iostream>
using namespace std;

int soma(){
    int a, b;
    cout << "Digite dois numeros: ";
    cin >> a >> b;
    return a+b;
}

int main(){
    cout << soma();
    return 0;
}
