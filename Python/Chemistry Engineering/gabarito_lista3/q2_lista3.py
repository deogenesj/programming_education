'''
2. (intersecao) Faça um programa que preencha duas listas A e B de 5 posições
com números inteiros. As listas representam conjuntos e seus elementos
estão em uma ordem qualquer. O programa deve calcular e imprimir uma
lista C tal que C = A ∩ B, ou seja, C deve conter a interseção entre
os conjuntos A e B.
'''

listaA = []
listaB = []
listaC = []

#Preencher o conjunto A
for i in range(5):
    aux = int(input("Digite a lista A: "))
    listaA.append(aux)

#Preencher o conjunto B
for i in range(5):
    aux = int(input("Digite a lista B: "))
    listaB.append(aux)

#Achar a intersecao
for i in listaA:
    if(i in listaB):
        listaC.append(i)

print(f"A interseção é: {listaC}")
