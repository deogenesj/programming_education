/*
3) Crie uma função para achar os dois maiores valores entre três
números. Passe duas variáveis vazias como referência que devem
guardar o valor dos dois maiores valores
*/

void achaMaior(int a, int b, int c, int & m1, int & m2){

    if(a >= b && a >= c){
        m1 = a;
        if(b >= c){
            m2 = b;
        }else{
            m2 = c;
        }
    }else if (b >= a && b >= c){
        m1 = b;
        if(a >= c){
            m2 = a;
        }else{
            m2 = c;
        }
    }else{
        m1 = c;
        if(a > b){
            m2 = a;
        }else{
            m2 = b;
        }
    }
}
int main(){
    int n1, n2, n3, maior, segundo_maior;
    cin >> n1 >> n2 >> n3;
    achaMaior(n1, n2, n3, maior, segundo_maior);
    cout << "Maior: " << maior << " . Seg. maior: " << segundo_maior;
    return 0;
}

