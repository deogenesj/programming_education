#include<iostream>
using namespace std;

int main(){
    float velocidade, maior, menor;
    int contador = 0, cont_maior_volta = 1, cont_menor_volta = 1;

    cout << "Digite a velocidade para cada volta: ";
    cin >> velocidade;

    maior = velocidade;
    menor = velocidade;
    while(velocidade != -1){
        contador = contador + 1;
        if(velocidade > maior){
            maior = velocidade;
            cont_maior_volta = contador;
        }

        if(velocidade < menor){
            menor = velocidade;
            cont_menor_volta = contador;
        }
        cin >> velocidade;
    }

    if(maior != -1){
        cout << "Total de voltas: " << contador << endl;
        cout << "Volta mais rápida: " << cont_maior_volta << endl;
        cout << "Menor velocidade: " << menor << " km/h (volta " << cont_menor_volta << ")";
    }

    return 0;
}
