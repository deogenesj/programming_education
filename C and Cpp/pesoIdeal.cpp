#include<iostream>
using namespace std;

float pesoIdeal(float alt, float peso, char s){
    float result = 0.0;

    if(s == 'M'){
        result = (72.7 * alt) - peso;
    }
    else if (s == 'F'){
        result = (62.1 * alt) - peso;
    }

    return result;
}


int main(){
    float altura, kilos, pesoId;
    char sexo;

    cin >> altura >> kilos;
    cin >> sexo;
    pesoId = pesoIdeal(altura, kilos, sexo);
    cout << pesoId;
    return 0;
}
