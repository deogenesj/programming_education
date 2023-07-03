dicio = {}
for i in range(3):
    nome = input("Digite o nome...")
    media = float(input("e a média: "))
    dicio[nome] = media

dicio.pop("Joao")
dicio.popitem()
del dicio["Ana"]

for chave, nota in dicio.items():
    print(f"Aluno(a) {chave} tem nota {nota}.")

#Erica
#Monique
#Nicole
#Nathani
