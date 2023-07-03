/*Faça um programa que leia dois vetores A e B de tamanho N e calcule
a soma vetorial somente dos numeros que estão em uma posição
par do vetor. Altere o vetor B, com o valor da soma vetorial
(X[i] + Y[i]). Considere que a posição 0 é par.
*/

#include<iostream>
using namespace std;
#define N 10

int main(){
    int A[N], B[N], i;

    for(i = 0; i < N; i++){
        cin >> A[i];
        cin >> B[i];
    }

    for(i = 0; i < N; i++){
        if(i%2 == 0){
            B[i] = A[i]+B[i];
        }
    }
/* Uma outra maneira de fazer:
    for(i = 0; i < N; i = i+2){
        B[i] = A[i]+B[i];
    }
*/
}
