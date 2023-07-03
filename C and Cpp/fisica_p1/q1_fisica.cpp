#include<iostream>
using namespace std;

int main(){
    float salario;
    char cargo;
    int meses;

    cout << "Digite o valor do salario: ";
    cin >> salario;

    cout << "Qual o seu cargo? ";
    cin >> cargo;

    if(cargo == 'f' || cargo == 'F'){
        salario = salario * 0.9;
    }else if(cargo == 'g' || cargo == 'G'){
        cout << "Quantos meses esta no cargo: ";
        cin >> meses;
        if(meses > 12){
            salario = salario * 0.70;
        }else{
            salario = salario * 0.75;
        }
    }else{
        cout << "Cargo inválido";
    }
    cout << "Valor total do salario a ser pago: ";
    cout << salario;

    return 0;
}
