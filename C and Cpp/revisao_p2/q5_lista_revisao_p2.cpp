/*
5. (lincolnulas) Dada uma matriz A(n × m) imprimir o número de linhas
e o número de colunas nulas da matriz. Exemplo:
0 0 0 0
1 0 2 2
4 0 5 6
0 0 0 0
tem duas linhas nulas e uma coluna nulas
*/
#include<iostream>
using namespace std;

#define M 4
#define N 4

int main(){
    int i, j, matriz[M][N], vet[M], vet2[M], soma;
    int linhas_nulas = 0, colunas_nulas = 0;//contar quantidade de nulas

    //leitura da matriz
    for(i = 0; i < M; i++){
        for(j = 0; j < N; j++){
            cin >> matriz[i][j];
        }
    }

    //procurar linhas nulas
    //como saber se uma linha é nula? Só somar todos os elementos da linha
    //se a soma final for 0, a linha é nula!

    //repeticao para encontrar o numero de linhas nulas
    for(i = 0; i < M; i++){
        soma = 0; // a cada repetição da linha, mudar a soma acumulada para 0
        for(j = 0; j < N; j++){
            soma = soma + matriz[i][j];
        }
        vet[i] = soma;//guardar a soma acumulada da linha da matriz nesse vetor auxiliar
    }

    //repeticao para encontrar o numero de colunas nulas
    for(i = 0; i < M; i++){
        soma = 0; // a cada repetição da coluna, mudar a soma acumulada para 0
        for(j = 0; j < N; j++){
            soma = soma + matriz[j][i];
        }
        vet2[i] = soma;//guardar a soma acumulada da coluna da matriz nesse vetor auxiliar
    }

    //agora vamos contar quantos linhas e colunas nulas temos
    for(i = 0; i < M; i++){
        //ver a linha nula no vetor de linhas
        if(vet[i] == 0){
            linhas_nulas++;
        }

        //ver se há coluna nula no vetor de colunas
        if(vet2[i] == 0){
            colunas_nulas++;
        }
    }

    cout << linhas_nulas << " linhas nulas e " << colunas_nulas << " colunas nulas";

    return 0;
}
