'''
Crie uma função que recebe três notas e retorna a média de um aluno.
Utilize essa função para calcular a nota de três alunos, utilizando
três listas.
'''
def calcula_media(nota1, nota2, nota3):
    soma = nota1+nota2+nota3
    media = soma/3
    return media
aluno1 = []
aluno2 = []
aluno3 = []
for i in range(3):
    n = float(input(f"Digite a {i+1}a nota: "))
    aluno1.append(n)

for i in range(3):
    n = float(input(f"Digite a {i+1}a nota: "))
    aluno2.append(n)

i = 0
while(i < 3):
    n = float(input(f"Digite a {i+1}a nota: "))
    aluno3.append(n)
    i = i+1

resultado1 = calcula_media(aluno1[0], aluno1[1], aluno1[2])
resultado2 = calcula_media(aluno2[0], aluno2[1], aluno2[2])
resultado3 = calcula_media(aluno3[0], aluno3[1], aluno3[2])
print(f"Aluno 1: {resultado1}")
print(f"Aluno 2: {resultado2}")
print(f"Aluno 3: {resultado3}")












'''
Crie uma função para receber um valor de salário e um valor de desconto
(de 0 a 500 reais) do salário. Calcule o quanto a pessoa terá de desconto em um ano
(12 meses). Caso o usuário não envie um valor de desconto de salário,
considere que o desconto padrão é de 10% do salário enviado.
'''


