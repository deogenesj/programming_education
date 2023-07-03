'''
converter apenas os números pares de uma lista em uma tupla
'''

lista = []
for i in range(5):
    aux = int(input("Digite um num: "))
    lista.append(aux)

lista_aux = []
for i in lista:
    if(i%2 == 0):
        lista_aux.append(i)

print(lista_aux)
valores_imutaveis = tuple(lista_aux)
print(valores_imutaveis)
