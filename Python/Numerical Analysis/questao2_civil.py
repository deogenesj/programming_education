import math
def fxi(xi):
    a = (11*xi) + (-2*(math.e ** xi)) + (-8/xi) + 48.91
    return a

xi = 3.7769
xii = 3.7905
f_xi = fxi(xi)
print(f'f de xi = {f_xi:.4f}')
f_xii = fxi(xii)
print(f'f de xii = {f_xii:.4f}')
numerador = (xi - xii)*f_xi
print(f"Numerador: {numerador:.4f}")
denominador = f_xi - f_xii
print(f"Denominador: {denominador:.4f}")
total = xi - (numerador/denominador)
print(f'O novo valor de x é: {total:.4f}')
print(f'O erro é: {abs(xi-total)}')
