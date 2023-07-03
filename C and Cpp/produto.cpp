#include<iostream>
using namespace std;

int main(){
    int n = -1;
    while(n < 1){
        cin >> n;
    }

    int a[n], b[n], c[n];

    int i;
    int soma = 0;
    for(i=0;i<3;i++){
        cin >> a[i];
        cin >> b[i];
        c[i] = a[i] * b[i];
    }
    for(i=0;i<3;i++)
        soma = soma + c[i];
    cout << "O produto é: " << soma;
    return 0;
}
