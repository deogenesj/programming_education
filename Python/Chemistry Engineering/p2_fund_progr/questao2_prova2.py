def calc_media(dicio):
    soma = 0
    for i in dicio:
        soma = soma + dicio[i]
    return soma/len(dicio)
###########
dicio = {}
nome = input("Digite o nome: ")
while(nome != "Sair"):
    media = float(input("Digite a média: "))
    dicio[nome] = media
    nome = input("Digite o nome: ")

#Chamar a função para calcular a media geral a partir do dicionário
media_geral = calc_media(dicio)

for i in dicio:
    print(f"O(A) aluno(a) {i} tem nota {dicio[i]} e está distante {dicio[i]-media_geral} da média.")

