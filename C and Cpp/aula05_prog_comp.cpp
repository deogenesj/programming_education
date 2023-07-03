#include<iostream>
using namespace std;

int main(){
    int freq;
    float nota;

    cout << "Digite a frequencia depois a nota: " << endl;
    cin >> freq >> nota;

    if(freq >= 45 && nota >= 70.0){
        cout << "Aprovada";
    }else if(freq >= 45 && (nota <= 69.9 && nota>=40.0)){
        cout << "Exame";
    }else{
        cout << "Reprovação";
    }
    return 0;
}
