/*2) Crie um algoritmo para encontrar o maior valor de um
vetor de 10 posições
*/
#include<iostream>
using namespace std;
int main(){
    int numeros[10], cont, maior;

    cont = 0;
    while(cont < 10){
        cin >> numeros[cont];
        cont++;
    }

    maior = numeros[0];
    cont = 1
    while(cont < 10){
        if(numeros[cont] > maior){
            maior = numeros[cont];
        }
        cont++;
    }
    cout << "O maior é: " << maior;
    return 0;
}
