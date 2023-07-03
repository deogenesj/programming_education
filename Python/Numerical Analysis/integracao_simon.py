from math import log
def f_de_x(x, pos, n):
    result = round(-4*(x**-2) + (x**-1), 4)
    if(pos != 0 and pos != n):
        if ((pos)%2 != 0):
            result = result * 4
        else:
            result = result * 2
    return result

def somatorio_lista(lista):
    soma = 0
    for i in lista:
        soma = soma + i
    return soma

a = 4.5
b = 9.3
n = 8
h = round((b-a)/n, 4)
ponto = a
c = [a]
cont = 0
while (cont < n):
    ponto = round(ponto+h, 4)
    c.append(ponto)
    cont = cont + 1

print(c)

calculo = []
for i in range(n+1):
    calculo.append(f_de_x(c[i], i, n))

print(calculo)
soma = somatorio_lista(calculo)
print(f"a soma é: {soma}")
result_final = round(soma*(h/3), 4)
print(f"O resultado da integral é: {result_final}")
