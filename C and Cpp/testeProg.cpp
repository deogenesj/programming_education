#include<iostream>
using namespace std;

int main(){
    int num;
    cout << "Digite um número: " << endl;
    cin >> num;
    if(num%2 == 0){
        cout << "É par" << endl;
    }else{
        cout << "É ímpar" << endl;
    }

    return 0;
}
