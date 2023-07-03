notas = []
soma = 0
media = 0
n_aprovados = 0
lista_media = []

for i in range(5):
    notas = []
    notas.append(float(input('Digite a 1ª nota: ')))
    notas.append(float(input('Digite a 2ª nota: ')))
    notas.append(float(input('Digite a 3ª nota: ')))
    notas.append(float(input('Digite a 4ª nota: ')))
    soma = notas[0] + notas[1] + notas[2] + notas[3]
    media = soma/4
    lista_media.append(media)
    if(media >= 7):
        n_aprovados = n_aprovados+1


print(f"O nº de aprovados é: {n_aprovados}")
print(lista_media)
