#include<iostream>
using namespace std;

int maior(int n1, int n2, int n3){
    int m;

    m = n1;
    if(n2>= n1 && n2 >= n3){
        m = n2;
    }else if(n3 >= n1 && n3 >= n2){
        m = n3;
    }
    return m;
}

int main(){
    int a, b, c, maiornum, cont;
    cin >> a >> b >> c;
    maiornum = maior(a, b, c);
    cont = 1;
    while(cont < 3){
        cin >> a >> b >> c;
        if(maiornum < maior(a, b, c)){
            maiornum = maior(a, b, c);
        }
        cont = cont + 1;
    }

    cout << "O maior num é: " << maiornum;
    return 0;
}
