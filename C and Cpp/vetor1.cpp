#include<iostream>

using namespace std;

#define N 5
int main(){
    int n, i;
    cin >> n;
    int a[n], b[n];

    for(i=0; i< n; i++){
        cin >> a[i];
        cin >> b[i];
    }

    for(i=0;i<n;i++){
        cout << a[i] * b[i] << endl;
    }

    return 0;
}
