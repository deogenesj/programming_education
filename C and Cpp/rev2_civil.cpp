/* Faça um programa que leia uma matriz de notas de aluno (P1, P2, T)
e identifique nessa matriz o aluno com a menor média.
Além disso, peça para o usuário digitar qual aluno ela quer analisar:
quantos pontos acima ou abaixo da média o aluno está na P2.
*/
#define N 4

int menor(int V[][3]){
    int aux = V[0][0] + V[0][1] + V[0][2];
    int pos = 0;
    for(int l = 1; l < N; l++){
        soma = V[l][0] + V[l][1] + V[l][2];
        if (soma < aux){
            pos = l;
            aux = soma;
        }
    }
    return pos;
}

int menor2(int V[][3]){
    int aux = 40, pos = 0, soma = 0;
    for(int l = 0; l < N; l++){
        for(int c = 0; c < 3; c++){
           soma = soma + V[l][c];
        }
        if (soma < aux){
            pos = l;
            aux = soma;
        }
        soma = 0;
    }
    return pos;
}

void analisa(int X[][3]){
    for(int l = 0; l < N; l++){
        if(X[l][1] - 7 < 0){
            cout << X[l][1] - 7 << " pontos abaixo da média";
        }else if(X[l][1] - 7 >= 0){
            cout << X[l][1] - 7 << " pontos da média";
        }
    }
}

int main(){
    int X[N][3];
    lerMat(X);
    cout << menor(X);
    analisa(X);
    return 0;
}
