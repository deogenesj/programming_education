import math
def fxi(xi):
    a = 12*(math.cos(-xi)) + (-20/(xi**2)) + (5*(xi**2)) -59.65
    return a

def flinha(xi):
    a = 12*(math.sin(-xi)) + (40/(xi**3)) + (10*xi)
    return a

xi = 3.7634
f_xi = fxi(xi)
print(f"F de x é: {f_xi:.4f}")
f_linha = flinha(xi)
print(f"F linha de x é: {f_linha:.4f}")
total = xi - (f_xi/f_linha)
print(f"O novo valor de x é: {total:.4f}")
print(f'O erro é: {abs(xi-total)}')
