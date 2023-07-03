/*
quadradomagico) Dizemos que uma matriz quadrada inteira é um quadrado mágico se a soma
dos elementos de cada linha, a soma dos elementos de cada coluna e a soma dos elementos das
diagonais principal e secundária são todos iguais. Exemplo:
8 0 7
4 5 6
3 10 2
é um quadrado mágico pois
*/

#include<iostream>
using namespace std;
#define N 3

int calcula_soma(int vetor[]){
    int i, soma = 0;
    for(i = 0; i < N; i++){
        soma = soma + vetor[i];
    }
    return soma;
}

int main(){
    int i, j, soma, matriz[N][N];
    int soma_linhas[N], soma_colunas[N], diagonal = 0, diagonal_secundaria = 0;

    //leitura da matriz
    for(i = 0; i < N; i++){
        for(j = 0; j < N; j++){
            cin >> matriz[i][j];
        }
    }

    cout << "--------------------" << endl;

    //repeticao para encontrar a soma das linhas
    for(i = 0; i < N; i++){
        soma = 0; // a cada repetição da linha, mudar a soma acumulada para 0
        for(j = 0; j < N; j++){
            soma = soma + matriz[i][j];
        }
        soma_linhas[i] = soma;//guardar a soma acumulada da linha da matriz nesse vetor auxiliar
    }

    //repeticao para encontrar a soma das colunas
    for(i = 0; i < N; i++){
        soma = 0; // a cada repetição da coluna, mudar a soma acumulada para 0
        for(j = 0; j < N; j++){
            soma = soma + matriz[j][i];
        }
        soma_colunas[i] = soma;//guardar a soma acumulada da coluna da matriz nesse vetor auxiliar
    }

    //impressao da matriz
    for(i = 0; i < N; i++){
        for(j = 0; j < N; j++){
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }

    //calcular a soma da diagonal principal
    diagonal = 0;
    for(i = 0; i < N; i++){
        diagonal = diagonal + matriz[i][i];
    }

    //calcular a soma da diagonal secundária
    diagonal_secundaria = 0;
    for(i = 0; i < N; i++){
        diagonal_secundaria = diagonal_secundaria + matriz[i][N-i-1];
    }

    //para saber se é um quadrado mágico, todos as somas das linhas, das colunas e das diagonais tem que ser igual
    int igual = 1;

    //calculo para saber se todas as linhas tem valor igual
    if(soma_linhas[0] != (calcula_soma(soma_linhas)/N)){
        igual = 0;
    }

    //calculo para saber se todas as linhas tem valor igual
    if(soma_colunas[0] != (calcula_soma(soma_colunas)/N)){
        igual = 0;
    }

    int soma_total = diagonal + diagonal_secundaria + soma_colunas[0] + soma_linhas[0];

    if(soma_total/4 == diagonal && igual == 1){
        cout << "É quadrado mágico!";
    }else{
        cout << "Não é quadrado mágico!";
    }

    return 0;
}
