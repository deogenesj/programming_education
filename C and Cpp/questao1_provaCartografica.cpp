/* Crie um programa em C++ para ler o ano de nas- cimento de uma pessoa e escrever na tela se o voto é obrigatório para ela, 
se o voto é optativo ou se ela ainda não pode votar. No caso do voto ser obrigatório, informe em quan- tos 1 os turnos de eleições presidenciais, 
que ocor- rem a cada 4 anos, esta pessoa deveria ter votado, considerando que o último 1o turno de eleição pre- sidencial foi em 2018. 
Considere que no Brasil o voto é obrigatório para pessoas com idade entre 18 e 69 anos e é optativo para pessoas com idade entre 16 e 18 anos, 
e igual ou acima de 70 anos. Desconsidere os meses de nascimento e de votação. Desconsidere os perío- dos sem votação direta para presidente.*/

#include <iostream>

using namespace std;

int main (){

    int ano_nasc, idade, ano_18, qtde_votacoes;

    cout << "Digite seu ano de nascimento: " << endl;
    cin >> ano_nasc;

    idade = 2018 - ano_nasc;

    //checar se voto é obrigatório ou opcional
    if(idade >=16 && idade <18){
        cout << "Voto opcional \n";
    }
    else if(idade>18 && idade < 70){
        cout << "Voto obrigatório \n";
    }
    else if(idade >= 70){
        cout << "Voto opcional \n";
    }
    else{
        cout << "Não pode votar \n";
    }

    //Identificar o ano que a pessoa fez 18 anos
    ano_18 = ano_nasc + 18;

    //Identificar a quantidade de votos que a pessoa deveria ter realizado considerando 2018 como data final
    if(ano_18 < 2018){
        qtde_votacoes = ((2018 - ano_18)/4) + 1;
        cout << qtde_votacoes << endl;
        if(qtde_votacoes > 0){
            cout << "A quantidade de vezes que deveria ter votado é: " << qtde_votacoes << endl;
        }
    }
    return 0;
}
