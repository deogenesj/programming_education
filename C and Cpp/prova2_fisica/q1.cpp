#include<iostream>
using namespace std;

#define N 6
int main(){
    int vetA[N], vetB[N], i, cont = 0;

    cout << "Indique a seq. A: ";
    for(i = 0; i < N; i++)
        cin >> vetA[i];

    cout << "Indique a seq. B: ";
    for(i = 0; i < N; i++)
        cin >> vetB[i];

    for(i = 0; i < N; i++){
        if(vetA[i]%vetB[i] == 0 || vetB[i]%vetA[i] == 0){
            vetB[i] = vetA[i] + vetB[i];
            cont++;
        }
    }

    cout << "Resultados: " << endl;
    for(i = 0; i < N; i++){
        cout << vetB[i] << " ";
    }
    cout << endl << cont << " substituições.";

    return 0;
}
