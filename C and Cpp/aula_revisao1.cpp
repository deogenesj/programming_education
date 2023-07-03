#include<iostream>
using namespace std;

float salarioBruto(int horas, int extra){
     float salario;

     salario = (horas*40) + (extra*50);
     return salario;
}

float salarioLiquido(float dinheiro){
    float liquido;

    liquido = dinheiro - (dinheiro * 0.10);
    return liquido;
}

void bonus(float &salario){
    if(salario < 4000){
        salario = (salario*0.15) + salario;
    }else if (salario > 4000 & salario < 6000){
        salario = (salario*0.7) + salario;
    }else{
        salario = (salario*0.3) + salario;
    }
}

void entrada(int & p, int & m, int & g){
    cin >> p >> m >> g;
}

void calculo(int p, int m, int g, int & valor){
    valor = p*10 + m*12 + g*15;
}

int main(){
    int a, b, c, valor;
    entrada(a, b, c);
    calculo(a, b, c, valor);
    cout << valor;
    return 0;
}
