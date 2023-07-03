'''
2. (semana) Faça um programa que leia um número e exiba o dia correspondente
da semana (1 - Domingo, 2 - Segunda, 3 - Terça, … 7 - Sábado).
Se digitar outro valor deve imprimir “Valor inválido”. Caso
nenhuma informação seja enviada para a função, utilize o valor padrão
8 - “Você deve digitar um número”.
Utilize uma função para fazer essa impressão.
'''

def semana(op = '8'):
    if(op == '1'):
        print("Domingo")
    elif(op == '2'):
        print("Segunda")
    elif(op == '3'):
        print("Terca")
    elif(op == '4'):
        print("Quarta")
    elif(op == '5'):
        print("Quinta")
    elif(op == '6'):
        print("Sexta")
    elif(op == '7'):
        print("Sábado")
    elif(op == '8'):
        print("Digite um valor válido!")
    else:
        print("Valor inválido!")


aux = input("Digite um numero de 1 a 7: ")
semana(aux)
