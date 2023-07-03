#Escreva um programa para indicar se um número é ímpar ou par.
#Se for #par, escreva “O {numero} é par”.
#Se for ímpar, escreva na tela “O {numero} #é ímpar”.
numero = int(input('Digite um numero: '))

if(numero%2 == 0):
    print(f'O {numero} é par!')
if(numero%2 != 0):
    print(f'O {numero} é ímpar!')

