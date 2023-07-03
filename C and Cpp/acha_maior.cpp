/*
Faça uma função que receba três valores inteiros e retorne o
maior deles. No main, faça a leitura dos valores, chame a função
e imprima o maior valor.
*/
#include<iostream>
using namespace std;

float troca(int & n1, int & n2){
    int aux;
    aux = n1+10;
    n1 = n2+10;
    n2 = aux;
    return n1/n2;
}

int main(){
    int a, b, res;
    cin >> a >> b;
    cout << a << " e "<< b << endl;
    res = troca(a, b);
    cout << a << " e "<< b << res;
    return 0;
}

