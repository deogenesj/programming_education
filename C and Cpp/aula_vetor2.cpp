#include<iostream>
using namespace std;

#define N 5

int main(){
    int i, soma = 0, A[N], B[N], C[N];

    for(i = 0; i < N; i++){
        cin >> A[i];
        cin >> B[i];
    }

    for(i = 0; i < N; i++){
        C[i] = A[i] * B[i];
        cout << C[i] << " ";
        soma = soma + C[i];
    }

    cout << endl << soma;

    return 0;
}
