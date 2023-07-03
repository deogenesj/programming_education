'''
Crie uma função que recebe três notas e retorna a média de um aluno.
Utilize essa função para calcular a nota de três alunos, utilizando
três listas.
'''
def calcula_media(nota1, nota2 = 0, nota3 = 0):
    soma = nota1+nota2+nota3
    media = soma/3
    return media

n1 = float(input(f"Digite a 1a nota: "))

resultado1 = calcula_media(n1)
print(f"Aluno 1: {resultado1}")

for i in range(5):
    print(i)

for i in range(2, 5):
    print(i)
