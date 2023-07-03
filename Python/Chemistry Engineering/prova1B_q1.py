ano_nasc = int(input())
idade = 2022 - ano_nasc
if(idade < 18 and idade > 15):
    print("Seu voto é optativo")
elif(idade > 69):
    print("Seu voto é optativo")
elif(idade<16):
    print("Não pode votar")
else:
    print("Seu voto é obrigatório")
    qtde_votacoes = int((2018-(ano_nasc+18))/4) +1
    print(f"Deveria ter votado {qtde_votacoes} vezes")


