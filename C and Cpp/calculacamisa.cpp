#include<iostream>
using namespace std;

void entrada2(int & a, int & b, int & c){
    cin >> a >> b >> c;
}

void calculo2(int x, int y, int z, int & v){
    v = x*10 + y*12 + z*15;
}

int main(){
    int p, m, g, total;
    entrada2(p, m, g);
    calculo2(p, m, g, total);
    cout << total;
    return 0;
}
