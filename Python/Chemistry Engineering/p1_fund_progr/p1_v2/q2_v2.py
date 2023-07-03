n = int(input("n: "))
if(n < 2):
    print("n deve ser maior ou igual a 3")
else:
    cont = 3
    x1 = int(input("x(1):"))
    x2 = int(input("x(2):"))
    while(cont <= n):
        if(cont % 2 == 0):
            xnovo = x1 + x2
        else:
            xnovo = x1 * x2
        print(f"x{cont} = {xnovo}")
        x1 = x2
        x2 = xnovo
        cont = cont+1
