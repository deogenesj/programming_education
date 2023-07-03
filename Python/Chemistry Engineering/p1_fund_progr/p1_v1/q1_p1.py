disciplina = input("Digite a disciplina: ")
if(disciplina == 'P' or disciplina == 'p'):
    nota1 = float(input("Digite a nota da P1: "))
    nota2 = float(input("Digite a nota da P2: "))
    nota_final = (nota1+nota2)/2

elif(disciplina == 'C' or disciplina == 'c'):
    nota1 = float(input("Digite a nota da P1: "))
    nota2 = float(input("Digite a nota da P2: "))
    nota3 = float(input("Digite a nota da P3: "))
    nota_final = nota1*0.20 + nota2*0.30 + nota3*0.50

print(f"Nota final: {nota_final}")
if(nota_final > 69.0):
    print("Aprovado!")
elif(nota_final < 30.0):
    print("Reprovado")
else:
    print("Exame")


