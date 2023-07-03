#include<stdio.h>
#include<string.h>

typedef struct{
    int matricula;
    char nome[10];
    float salario;
}Funcionario;

int main(){
    Funcionario joao;
    char aux[10];

    scanf("%d%*c", &joao.matricula);

    fgets(joao.nome, 10, stdin);

    scanf("%f", &joao.salario);

    printf("%d\n", joao.matricula);
    printf("%s\n", joao.nome);
    printf("%f\n", joao.salario);

    return 0;
}
