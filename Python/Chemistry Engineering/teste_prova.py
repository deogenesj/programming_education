n = int(input("n: "))
cont = 3
if(n < 3):
    print("n deve ser maior ou igual a 3")
else:
    x1 = int(input())
    x2 = int(input())
    if(cont % 2 == 0):
        xn = x1+x2
    else:
        xn = x1*x2
    print(f"X({cont}): {xn}")
    cont = cont + 1
    x1 = x2
    x2 = xn
