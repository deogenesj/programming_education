/*Leia uma matriz A em que a primeira coluna guarde a qtde de livros,
e a segunda coluna guarde os valores dos livros
Escreva uma função que calcule o preço de livros
de acordo com a quantidade e o preço*/
#include<iostream>
using namespace std;

#define NLIN 3
#define NCOL 2

void lerMat(int X[][NCOL], int lin, int col){
    for(int l = 0; l < lin; l++){
        for(int c = 0; c < col; c++){
            cin >> X[l][c];
        }
    }
}

int calcula(int X[][NCOL], int lin, int col){
    int soma = 0;
    for(int l = 0; l< lin;l++){
        soma = soma + (X[l][0] * X[l][1]);
    }
    return soma;
}





