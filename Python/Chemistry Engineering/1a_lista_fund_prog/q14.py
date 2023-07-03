num = int(input("Digite um numero entre 0 e 10: "))

while(num < 0 or num >10):
    num = int(input("Tente de novo: "))

print("\n\n\n\n")

cont = 3

while(cont > 0):
    cont = cont - 1
    num2 = int(input("Tente adivinhar o numero:"))
    if(num == num2):
        print("Parabéns! Você acertou")
        cont = 0
    elif(num2 < num):
        print("Muito baixo")
        print(f"Você tem {cont} tentativas restantes")
    else:
        print("Muito alto")
        print(f"Você tem {cont} tentativas restantes")
