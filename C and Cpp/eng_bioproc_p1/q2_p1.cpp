#include<iostream>
using namespace std;

int main(){
    float n1, n2, num;
    int inf = 0, entre = 0, sup = 0, cont = 1;

    cout << "Limites (inferior e superior): ";
    cin >> n1 >> n2;

    if(n1 > n2){
        cout << "Limites inválidos!";
    }else{
        cout << "Lista de números ('0' - Fim): " << endl << "[1]: ";
        cin >> num;
        while(num != 0){
            cont = cont + 1;
            if(num < n1){
                inf = inf + 1;
            }else if(num > n2){
                sup = sup + 1;
            }else{
                entre = entre + 1;
            }
            cout << "[" << cont << "] : ";

            cin >> num;
        }
        cout << "Nos. abaixo de " << n1 << " : "<< inf << endl;
        cout << "Nos. de " << n1 << " a " << n2 << ": " << entre << endl;
        cout << "Nos. acima de " << n2 << " : " << sup<< endl;
    }

    return 0;
}
