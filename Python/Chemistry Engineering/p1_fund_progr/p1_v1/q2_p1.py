print("Digite quantos passos caminhados: ")
passos = int(input())
cont = 0
soma = passos
while(passos != 0):

    cont = cont + 1
    passos = int(input())
    soma = soma + passos
print(f"Quantidade total de passos: {soma}")
if(cont != 0):
    print(f"Média de passos: {soma/cont}, referentes a {(cont/7):.2f} semanas")
else:
    print(f"Média de passos: 0 passos, referentes a 0 semanas")
