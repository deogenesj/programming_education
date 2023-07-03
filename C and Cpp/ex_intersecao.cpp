#include<iostream>
using namespace std;

#define N 5

int main(){
    int A[N], B[N], C[N], i, j;

    for(i = 0; i < N; i++){
        cin >> A[i];
        cin >> B[i];
    }

    for(i = 0; i < N; i++){
        for(cont2 = 0; cont2 < N; cont2++){
            if(A[i] == B[cont2]){
                C[i] = A[i];
                break;
            }
        }


        if(A[i] == B[0]){
            C[i] = A[i];
            break;
        }else if(A[i] == B[1]){
            C[i] = A[i];
            break;
        }else if(A[i] == B[2]){
            C[i] = A[i];
            break;
        }else if(A[i] == B[3]){
            C[i] = A[i];
            break;
        }

    }











    for(i = 0; i < N; i++){
        for(j = 0; j < N; j++){
            if(A[i] == B[j]){
                C[i] = A[i];
                break;
            }
        }
    }

    for(i = 0; i < N; i++)
        cout << C[i] << " ";

    return 0;
}
