/*questao 2 da prova de cartográfica*/

#include <iostream>

using namespace std;

int main (){

int n, soma;

cout << "Digite um numero: " << endl;
cin >> n;

soma = 0;

while (n != 0 && soma <= n){
    soma = soma + n;
    cout << "Digite um outro numero: " << endl;
    cin >> numero;
}

if(n != 0){
    cout << "A soma é cumulativa" << soma << endl;
} else {
    cout << "A soma não é cumulativa" << quantidade << endl;
}

return 0;
}
