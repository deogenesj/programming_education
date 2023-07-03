'''
3. (bolsa) Imagine em um cenário futuro que a UFPR esteja pensando em
desenvolver uma bolsa de estudos. Crie um programa para ajudar a simular
cenários de cálculo de uma bolsa de estudos para estudantes.
A bolsa de estudo geralmente leva em conta o desempenho dos estudantes
que irão concorrer às bolsas, por exemplo sua média geral.
Considere que um aluno com média geral 7 e menor não pode
concorrer à bolsa, por ter apenas um desempenho ruim ou para
“para passar”. Alunos com média geral acima de 9 recebem 20% de desconto
em cursos de pós-graduação da UFPR. Já alunos com média geral
entre 9 e 8 recebem 14%. Por fim, os demais alunos recebem 10%
de desconto. Com isso, faça uma função para leia em uma lista com
a nota de N alunos (N sendo informado pelo usuário). Crie outra função
que receba a lista e mostre, para cada aluno, a quantidade de desconto
que ele teria
'''
def bolsa(estudantes):
    for aluno in estudantes:
        if(aluno < 7.1):
            print("Sem bolsa")
        elif(aluno > 9):
            print("20% de desconto")
        elif(aluno >= 8 and aluno <= 9):
            print("14% de desconto")
        else:
            print("10% de desconto")

n = int(input("Digite a quantidade de alunos: "))
alunos = []
for i in range(n):
    aux = float(input(f"Digite a média do aluno {i+1}: "))
    alunos.append(aux)

bolsa(alunos)
