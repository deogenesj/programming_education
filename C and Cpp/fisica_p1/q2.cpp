#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int x1, x2, cont, n;
    string cargo;
    cin >> n;
    cin >> x1 >> x2;
    cin >> cargo;

    if(n < 3){
        cout << "n deve ser maior ou igual a 3";
    }
    for(int i = 3; i<=n;i++){
        if(i%2 == 0){
            cout << x1+x2 << endl;;
            x2 = x1+x2;
        }else{
            cout << x1*x2 << endl;
            x1 = x1*x2;
        }
    }

    return 0;
}
