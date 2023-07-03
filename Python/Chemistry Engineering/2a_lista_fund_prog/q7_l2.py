res = -1
while(res != 0):
    n1 = int(input())
    n2 = int(input())
    if(n1 > n2):
        x = n1
        y = n2
    else:
        x = n2
        y = n1

    res = x**2 + 3*y -10
    print(f"Resultado: {res}")
