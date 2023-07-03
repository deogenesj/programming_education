luz = float(input("Digite o valor da luz: "))
agua = float(input("Digite o valor da agua: "))
aluguel = float(input("Digite o valor do aluguel: "))
internet = float(input("Digite o valor da internet: "))

janeiro = luz+agua+aluguel+internet
print(f"O gasto total em janeiro foi: {janeiro}")

luz = float(input("Digite o valor da luz de fevereiro: "))
agua = float(input("Digite o valor da agua: "))
aluguel = float(input("Digite o valor do aluguel: "))
internet = float(input("Digite o valor da internet: "))

fevereiro = luz+agua+aluguel+internet
print(f"O gasto total em fevereiro foi: {fevereiro}")


luz = float(input("Digite o valor da luz de março: "))
agua = float(input("Digite o valor da agua: "))
aluguel = float(input("Digite o valor do aluguel: "))
internet = float(input("Digite o valor da internet: "))

marco = luz+agua+aluguel+internet
print(f"O gasto total em marco foi: {marco}")

luz = float(input("Digite o valor da luz de abril: "))
agua = float(input("Digite o valor da agua: "))
aluguel = float(input("Digite o valor do aluguel: "))
internet = float(input("Digite o valor da internet: "))

abril = luz+agua+aluguel+internet
print(f"O gasto total em abril foi: {abril}")

media = (janeiro+fevereiro+marco+abril)/4

print(f"A média é: {media}")

print(f"De janeiro para fevereiro: {fevereiro-janeiro}")
print(f"De fevereiro para março: {marco-fevereiro}")
print(f"De março para abril: {abril-marco}")
