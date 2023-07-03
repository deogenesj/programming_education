'''
4) Crie uma função que receba uma lista de numeros preenchida
e uma posição. Transforme essa posição da lista para 0. Caso
nenhuma posição seja enviada, trate como padrão a última posição da
lista (-1).
'''
def zerar(lista, posicao = -1):
    if(posicao < len(lista) and len(lista) > 0):
        lista[posicao] = 0
    else:
        print("Lista vazia ou índice fora do escopo")
#aqui começa a execução do codigo
lista = [1, 2, 3, 4, 5]
print(lista)
zerar(lista, 3)
zerar(lista)
print(lista)
