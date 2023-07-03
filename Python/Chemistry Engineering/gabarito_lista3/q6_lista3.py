'''
6. (contagem) Escreva um programa para ler uma lista V de até 10 valores
reais. Em seguida, o programa deve calcular o número de vezes que cada
número da lista ocorre na mesma, colocando estes resultados
em uma nova lista R de valores inteiros. Ao final, a nova lista deve ser
mostrada na tela
'''
listaV = []
for i in range(10):
    aux = int(input("Digite um numero: "))
    listaV.append(aux)

listaV_sem_duplicata = []
for i in listaV:
    if(i not in listaV_sem_duplicata):
        listaV_sem_duplicata.append(i)

listaR = []
for i in listaV_sem_duplicata:
    qtde = listaV.count(i)
    listaR.append(qtde)

for i in range(len(listaV_sem_duplicata)):
    print(f"Qtde de {listaV_sem_duplicata[i]} na lista: {listaR[i]}")
