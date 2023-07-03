def soma_numeros(n1, n2):
    aux = n1+n2
    return aux

def elevado(base, expoente):
    res = 1
    if(expoente == 0):
        res = 1
    else:
        for i in range(expoente):
            res = base * res
    return res

print(elevado(0, 5))
