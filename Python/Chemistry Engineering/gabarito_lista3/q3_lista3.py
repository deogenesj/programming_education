'''
3. (disciplinas) Faça um dicionário com a chave sendo o nome de 5
disciplinas que você está tendo este semestre. O valor respectivo
de cada chave deve ser o nome do Professor que ministra a disciplina.
Imprima o dicionário. Leia do usuário uma matéria que ele gostaria de
excluir desse semestre, e faça a exclusão do dicionário.
Imprima o dicionário mais uma vez
'''
dicio = {}
dicio["Vetores e Geometria Analítica"] = "Prof. João"
dicio["Cálculo I"] = "Profa. Maria"
dicio["Ética"] = "Prof. Platão"
dicio["Seminários"] = "Prof. Hannah"
dicio["Extensão Universitária"] = "Prof. Márcio"

for i in dicio:
    print(f"Disciplina: {i} - {dicio[i]}")

print("-----------------------")

aux = input("Digite uma disciplina a ser removida: ")
if(aux in list(dicio.keys())):
    dicio.pop(aux)
else:
    print(f"{aux} não é uma disciplina cadastrada!")

print("-----------------------")

for i in dicio:
    print(f"Disciplina: {i} - {dicio[i]}")
