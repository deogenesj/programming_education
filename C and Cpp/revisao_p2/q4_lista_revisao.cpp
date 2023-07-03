/*
. (matpermuta) Dizemos que uma matriz inteira A(n×n) é uma matriz de
permutação se em cada linha e em cada coluna houver n − 1 elementos nulos
e um único elemento igual a 1. Dada uma matriz inteira A(n × n) verificar
se A é de permutação. Exemplos:
0 1 0 0
0 0 1 0
1 0 0 0
0 0 0 1
é de permutação, enquanto que:
0 1 0 0
0 0 1 0
1 0 0 0
0 0 0 2
não é.
*/

#include<iostream>
using namespace std;

#define N 4

void calcula_soma(int matriz[][N], int vet[]){
    int i, j, soma;
    //vet é um vetor para guardar a soma de todas as linhas da matriz
    //se houver uma linha com a soma acima de 1, a matriz não é de permutação

    for(i = 0; i < N; i++){
        soma = 0; // a cada repetição da linha, mudar a soma acumulada para 0
        for(j = 0; j < N; j++){
            soma = soma + matriz[i][j];
        }
        vet[i] = soma;//guardar a soma acumulada da linha da matriz nesse vetor auxiliar
    }
}

int main(){
    int matriz[N][N], vetor[N], i, j;

    //leitura da matriz
    for(i = 0; i < N; i++){
        for(j = 0; j < N; j++){
            cin >> matriz[i][j];
        }
    }

    calcula_soma(matriz, vetor);//chamar a funcao

    int permutacao = 1;//vamos assumir inicialmente que a matriz é de permuação
    //procurar se na linha é uma matriz de permutação
    for(i = 0; i < N; i++){
        //anda no vetor e olha as somas das linhas. Se alguma soma for
        //maior que 1, não é uma matriz de permutação
        if(vetor[i] != 1){
            permutacao = 0;//não é permutação!
        }
    }

    if(permutacao != 0){
        cout << "É uma matriz de permutação!";
    }else{
        cout << "Não é uma matriz de permutação!";
    }

    return 0;
}
