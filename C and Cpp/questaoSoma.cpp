#include<iostream>
using namespace std;

int maior(int a, int b, int c){
    int m;

    if(a>=b && b>=c){
        m = a;
    }
    else if(b>=c){
        m = b;
    }
    else{
        m = c;
    }

    return m;
}

int main(){
    int n1, n2, n3;
    int maiore;
    cin >> n1 >> n2 >> n3;
    maiore = maior(n1,n2, n3);
    cout << maiore;
    return 0;
}
