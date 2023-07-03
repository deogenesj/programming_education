salario = float(input("Digite o valor do salario: "))
cargo = input("Qual o seu cargo? ")

if(cargo == 'F' or cargo == 'f'):
    print(f"Valor total a ser pago: {salario*0.9}")
elif(cargo == 'G' or cargo == 'g'):
    meses = int(input("Quantos meses esta no cargo?"))
    if(meses > 12):
        print(f"Valor total a ser pago: {salario*0.70}")
    else:
        print(f"Valor total a ser pago: {salario*0.75}")
