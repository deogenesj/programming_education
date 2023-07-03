num = int(input())
maior = num
while(num != 0):
    if(num > maior):
        maior = num
    num = int(input())
print(maior)
