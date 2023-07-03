#include<iostream>
using namespace std;

int soma1(int x, int y){
    return x+y;
}

void soma(int & a, int & b, int & result){
    cin >> a >> b;
    result = a + b;
}

int main(){
    int n1, n2, resultado;
    soma(n1, n2, resultado);
    cout << a << b << resultado;
}
