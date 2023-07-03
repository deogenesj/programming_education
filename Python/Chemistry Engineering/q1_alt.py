salario = float(input("Digite o valor do salário: "))
tipo = input("Qual o seu cargo? ")
tipo = tipo.upper()
if(tipo == 'F'):
    desconto = salario * 0.10
    salario = salario - desconto
elif(tipo == 'G'):
    meses = int(input("Quantos meses?"))
    if(meses > 12):
        desconto = salario * 0.3
    else:
        desconto = salario * 0.25
    salario = salario - desconto
print(f"Valor total a ser pago: {salario}")
