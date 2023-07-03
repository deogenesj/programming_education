#include<iostream>
using namespace std;

int maior(int a, int b, int c){
    int result;

    if (a >= b && a >= c){
        result = a;
    }else if (b >= a && b >= c){
        result = b;
    } else {
        result = c;
    }

    return result;
}

int main(){
    int n1, n2, n3;
    cin >> n1 >> n2 >> n3;
    cout << maior(n1, n2, n3);
    return 0;
}
