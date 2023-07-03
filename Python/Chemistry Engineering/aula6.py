num1 = int(input('Num1: '))
num2 = int(input('Num2: '))
num3 = int(input('Num3: '))

if(num1 >= num2 and num1 >= num3):
    maior = num1
    if(num2 >= num3):
        maior2 = num2
    else:
        maior2 = num3
elif(num2 >= num1 and num2 >= num3):
    maior = num2
    if(num1 >=num3):
        maior2 = num1
    else:
        maior2 = num3
else:
    maior = num3
    if(num1 >= num2):
        maior2 = num1
    else:
        maior2 = num2
print('A soma entre os maiores é: {}'.format(maior+maior2))
