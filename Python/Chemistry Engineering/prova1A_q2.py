volta = float(input())
menor = volta
maior = volta
contador = 0
while(volta != -1):
    if(menor > volta):
        menor = volta
    if(maior < volta):
        maior = volta
    contador = contador + 1
    volta = float(input())
if(menor != -1):
    print(f"Numero de voltas: {contador}")
    print(f"A maior volta: {maior}")
    print(f"A menor volta: {menor}")
else:
    print("Digitou -1 de primeira")
