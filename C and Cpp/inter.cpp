#include<iostream>
using namespace std;
#define N 3

int main(){
    int vet1[3], vet2[3], C[3];
    int i, j, inter = 0;

    for(i=0;i<3;i++){
        cin >> vet1[i];
        cin >> vet2[i];
        C[i] = 0;
    }
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            if(vet1[i] == vet2[j]){
                inter++;
                C[i] = vet1[i];
            }
        }
    }
    if(inter != 0){
        for(i=0;i<3;i++){
            if(C[i] != 0){
                cout << C[i] << " ";
            }
        }
    }else{
        cout << "Não houve intersecção" << endl;
    }
    return 0;
}
