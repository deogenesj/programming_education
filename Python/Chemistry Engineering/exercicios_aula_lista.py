'''
Faça um programa em Python que leia duas listas:
uma lista referente aos nomes de funcionários em uma empresa,
e outra lista referente ao salário do respectivo funcionário.
Depois, converta as duas listas em um único dicionário,
da seguinte maneira: {nome: salario}; ou dicio[nome] = salario
Faça a impressão do dicionário na tela.
Depois, peça para o usuário digitar um funcionário para ser excluído
do dicionário, faça a exclusão e faça a impressão do dicionário
novamente.
'''
funcionarios = []
salarios = []
dicio = {}
for i in range(3):
    nome = input()
    funcionarios.append(nome)
    sal = float(input())
    salarios.append(sal)

for i in range(3):
    dicio[funcionarios[i]] = salarios[i]

print(dicio)
print(f"No formato de lista: {list(dicio)}")

rem = input('Digite o funcionario a ser removido: ')

if(rem in list(dicio)):
    dicio.pop(rem)
    a
print(dicio)










