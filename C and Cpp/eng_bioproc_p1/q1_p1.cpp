#include<iostream>
using namespace std;

float calcula_imposto(){
    int cont = 0;
    float lucro;
    float venda, float compra;
        cout << "Entre o valor de compra: ";
        cin >> compra;
        cout << "Entre o valor de venda: ";
        cin >> venda;

        lucro = venda - compra;

        if(lucro < 1000.0){
            imposto = 0;
        }else if(lucro > 1000.0 && lucro <= 3729.0){
            imposto = lucro * 0.1;
        }else{
            imposto = lucro * 0.25;
        }

        cout << "Seu lucro foi: " << lucro << endl;
        return imposto;
    }

}


int main(){
    float compra, venda, lucro, imposto;
    int cont = 0;
    cout << "Setor de alimentos: ";
    while(cont <=100){
        imposto = calcula_imposto();
        cout << "Imposto eh: " << imposto;
        cont++;
    }

    cout << "Setor de maquinários: ";
    imposto = calcula_imposto();
    cout << "Imposto eh: " << imposto;

    cout << "Setor de materiais de manufatura: ";
    imposto = calcula_imposto();
    cout << "Imposto eh: " << imposto;

        return 0;
}
