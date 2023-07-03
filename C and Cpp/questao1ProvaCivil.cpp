#include<iostream>
using namespace std;

#define N 20

void lerVet(int X[], int n, int & tam){
    int ler;
    tam = 0;
    cin >> ler;
    for(int i = 0; ler >= 0 && i<N;i++){
        X[i] = ler;
        tam++;
        cin >> ler;
    }
}

void intercala(int X[], int Y[], int C[], int tamA, int tamB){
    int i = 0, j = 0, c = 0;

    while(i < tamA || j < tamB){
        if(i < tamA){
            if (tamA != 0){
                if(tamB == j){
                    C[c] = X[i];
                    i++;
                    c++;
                }else{
                    if(X[i] <= Y[j]){
                        C[c] = X[i];
                        i++;
                        c++;
                    }
                }
            }
        }
        if (j < tamB){
            if(tamB != 0){
                if(tamA == i){
                    C[c] = Y[j];
                    j++;
                    c++;
                }else{
                    if(Y[j] < X[i]){
                        C[c] = Y[j];
                        j++;
                        c++;
                    }
                }
            }
        }
    }
}

int main(){
    int A[N], B[N], C[40];
    int tamA, tamB;
    lerVet(A, N, tamA);
    lerVet(B, N, tamB);
    intercala(A, B, C, tamA, tamB);

    for(int i = 0; i < tamA+tamB; i++){
        cout << C[i] << " ";
    }
    return 0;
}

