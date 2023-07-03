#include<iostream>
using namespace std;

void compara(int n1, int n2){
    if(n1 == n2){
        cout << "São iguais";
    }
    else{
        cout << "São diferentes";
    }
}

int main(){
    int numero1, numero2;
    cout << "Por favor digite dois números: ";
    cin >> numero1 >> numero2;
    compara(numero1, numero2);

    return 0;
}
