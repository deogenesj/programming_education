num = int(input())
contador = 2
primo = True
while(contador < num):
    if(num%contador == 0):
        primo = False
    contador = contador+1
if(primo):
    print("é primo")
else:
    print("não é primo")
