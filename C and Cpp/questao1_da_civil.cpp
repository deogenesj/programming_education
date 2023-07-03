#include<iostream>
using namespace std;

int main(){
    int vetA[20], vetB[20], vetC[40];
    int aux = 0;
    cin >> aux;
    for(int i = 0; i<20 && aux >= 0; i++){
        vetA[i] = aux;
        cin >> aux;
    }

    aux = 0;
    cin >> aux;
    for(int j = 0; j < 20 && aux >= 0; j++){
        vetB[j] = aux;
        cin >> aux;
    }

    int ia = 0, ib = 0;
    for(int c = 0; c < 40; c++){
        if(vetA[ia] <= vetB[ib]){
            vetC[c] = vetA[ia];
            ia++;
        }else{
            vetC[c] = vetB[ib];
            ib++;
        }
    }

    for(int c = 0; c < 40; c++){
        cout << vetC[c] << " ";
    }
    return 0;
}






