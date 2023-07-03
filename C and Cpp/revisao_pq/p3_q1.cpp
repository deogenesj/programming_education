#include<iostream>
using namespace std;

int main(){
    int n1, n2, n3;

    cout << "Informe três valores: " << endl;
    cin >> n1 >> n2 >> n3;

    if(n1 > n2 && n2 > n3){
        cout << "DECRESCENTE";
    }else if(n1 < n2 && n2 < n3){
        cout << "CRESCENTE";
    }else{
        cout << "OUTRA";
    }

    return 0;
}
