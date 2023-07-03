num = int(input())
soma = 0
cumulativa = 0
while(num != 0):
    if(num < soma):
        cumulativa = 99
    soma = num + soma
    num = int(input())
if(cumulativa == 99):
    print("não é cumulativa")
else:
    print("é cumulativa")
