/*
(segmento) Crie uma função chamada ehSegmento que recebe como parâmetros
os seguintes ítens: um vetor de inteiros a, um vetor de inteiros b,
um valor inteiro n que representa o tamanho do vetor a,
um valor inteiro m que representa o tamanho do vetor b, e um inteiro p
que representa uma posição do vetor a. A função deve retornar 1
caso o vetor b seja um segmento do vetor a iniciado na posição p de a,
ou retornar 0 caso contrário. Por exemplo, considere p = 2,
e o vetor a (com n = 6) 6 5 4 3 8 9
Se o vetor b (com m = 3) for 4 3 8
o retorno da função deve ser 1.
Por outro lado, se o vetor b (com m = 3) for
4 8 3 o retorno da função deve ser 0.
*/

#include<iostream>
using namespace std;

#define N 5
#define M 3

int segmento(int A[], int B[], int p){
    int i, j;
    int sequencia = 1; //variável para controlar se existe uma sequencia ou não
    //vamos assumir que 1 significa tem a sequencia B dentro de A
    //0 significa que não tem a sequencia B dentro de A

    //inicializar os contadores
    i = p;
    j = 0;
    while(i < N && j < M){//enquanto não chegar no final de algum vetor
        cout << A[i] << " - " << B[j] << "- pos: " << j << endl;
        if(A[i] == B[j]){
            //não precisa fazer nada, sequencia continua com 1...
        }else{
            sequencia = 0;
        }

        //atualizar os contadores
        i++;
        j++;
    }

    if(j != M){
        //se j for diferente de M, quer dizer que não achou TODO o segmento
        sequencia = 0;
    }

    return sequencia;
}

int main(){
    int vet1[N], vet2[M], i, pos, res;

    //leitura do vetor A
    cout << "Digite o vetor A, são " << N << " elementos: ";
    for(i = 0; i < N; i++){
        cin >> vet1[i];
    }

    //leitura do vetor B
    cout << "Digite o vetor B, são " << M << " elementos: ";
    for(i = 0; i < M; i++){
        cin >> vet2[i];
    }

    cout << "Digite de onde quer começar a buscar o segmento: ";
    cin >> pos;
    res = segmento(vet1, vet2, pos);

    if(res == 1){
        cout << "Achou o segmento!" << endl;
    }else{
        cout << "Não achou o segmento!" << endl;
    }

    return 0;
}
