/*
Calcule os termos da série a seguir:
1 2 3 5 8 13 21 34 55
*/
#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int N, t_atual, t_anterior, aux, k;
    k = 1;
    cin >> t_anterior;
    cin >> t_atual;

    cin >> N;
    while(k <= N){
        aux = t_atual + t_anterior;
        cout << aux << " " ;
        t_anterior = t_atual;
        t_atual = aux;
        k = k+1;
    }
    return 0;
}











