lista = []

print("Digite a lista inicial: ")
for i in range(5):
    aux = int(input())
    lista.append(aux)
#encontrar o maior
maior = lista[0]
for i in lista:
    if(i > maior):
        maior = i

#encontrar o menor
menor = lista[0]
for i in lista:
    if(i < menor):
        menor = i

print(f"Menor valor: {menor}")
print(f"Maior valor: {maior}")

#modificar a lista original de acordo com as regras
for i in range(len(lista)):
    if(lista[i] > 0):
        lista[i] = lista[i]-maior
    elif(lista[i] < 0):
        lista[i] = lista[i]+menor

print("Nova lista: ")
print(lista)
