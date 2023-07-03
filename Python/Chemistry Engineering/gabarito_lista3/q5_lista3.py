'''
5. (permuta) Escreva um programa que leia uma lista A e B de números
inteiros e positivos, com tamanho máximo de 20 valores cada um, gere e
imprima a intercalação de ambas as listas em uma nova lista de
saída com até 40 valores. As listas A e B devem ser lidas do teclado,
primeiro A e quando esta se encerrar, a B. Os dados se encerram em
ambas as listas quando for lido um número negativo que não
deve ser guardado e sinaliza “fim de dados
'''
listaA = []
listaB = []
listaC = []

contador = 0
aux = int(input("Digite a lista A: "))
while(aux >= 0 and contador <= 20):
    listaA.append(aux)
    contador = contador + 1
    aux = int(input("Digite a lista A: "))

contador = 0
aux = int(input("Digite a lista B: "))
while(aux >= 0 and contador <= 20):
    listaB.append(aux)
    contador = contador + 1
    aux = int(input("Digite a lista B: "))

#criar a permutação
i = 0
j = 0
while(i < len(listaA) or j < len(listaB)):
    if(i < len(listaA)):
        listaC.append(listaA[i])
        i = i + 1
    if(j < len(listaB)):
        listaC.append(listaB[j])
        j = j + 1

print(listaC)
