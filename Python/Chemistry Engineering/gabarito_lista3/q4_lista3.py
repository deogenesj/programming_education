'''
4. (salarios) Crie uma lista com valores de salários de funcionários de
uma empresa, com os valores dos salários sendo digitados pelo usuário.
Calcule a média de salários dos funcionários e apresente na tela.
Crie uma tupla com os salários maiores que a média de forma ordenada do
menor para o maior e imprima.
'''
salarios = []
contador = 0
soma = 0
aux = float(input("Digite o salário de um funcionário: "))
while(aux != 0.0):
    soma = soma + aux
    salarios.append(aux)
    contador = contador + 1
    aux = float(input("Digite o salário de outro funcionário: "))

#ordenar a lista de forma crescente
salarios.sort()

#calcular a media
media = soma/contador

#tentar achar a posicao do elemento que é maior que a média.
posicao = -1
for i in range(len(salarios)):
    if(salarios[i] > media):
        posicao = i

#se achou uma posição, imprimir
if(posicao != -1):
   tupla = tuple(salarios[posicao:])
   print(tupla)
else:
    print("Nenhum valor de salário é maior que a média!")

