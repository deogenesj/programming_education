//Programa IMC
#include<iostream>
using namespace std;


float imc(float altura, float peso){
    float resultado;

    resultado = peso / (altura * altura);

    return resultado;
}

int main(){
    float alt, kilo;
    float result;
    cin >> alt >> kilo;

    result = imc(alt, kilo);
    cout << result;
    return 0;
}
