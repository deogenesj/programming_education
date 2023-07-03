#include<iostream>
#include <iomanip>
using namespace std;

int main(){
    float media;

    cin >> media;
    cout<<setprecision(2)<<fixed;

    if(media >= 7.0){
        cout << media << "Aprovado";
    }else{
        cout << media << "Reprovado";
    }

}
