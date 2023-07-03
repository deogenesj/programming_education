'''
1. (pertence) Faça um programa que preencha uma lista A de até 10 posições
com números inteiros positivos. O programa deve solicitar números até que
seja digitado um valor negativo, que não deve ser colocado na lista A.
O programa deve contar e imprimir quantos inteiros positivos foram
colocados na lista. Em seguida, o programa deve ler números do teclado
e para cada número lido indicar ao usuário se ele está ou não na lista A.
Nesse ponto, a digitação novamente de um número negativo deve causar
o término do programa.
'''

listaA = []
contador = 0

num = int(input("Digite um numero: "))
while(num >= 0 and contador < 10):
    listaA.append(num)
    contador = contador + 1
    num = int(input("Digite outro numero: "))

print(f"Foram digitados {contador} numeros!")

num = int(input("Digite um numero para buscar na lista: "))
while(num >= 0):
    if(num in listaA):
        print("Achou o numero!")
    else:
        print("Não achou na lista!")
    num = int(input("Digite outro numero: "))

