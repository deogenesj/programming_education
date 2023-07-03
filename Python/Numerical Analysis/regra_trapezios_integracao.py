def f_de_x(x, pos, n):
    result = round(1/x, 4)
    if(pos != 0 and pos != n):
        result = result * 2
    return result

def somatorio_lista(lista):
    soma = 0
    for i in lista:
        soma = soma + i
    return soma

h = 0.1
n = 6
ponto = 3
c = [3]
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
result_final = round(soma*(h/2), 4)
print(f"O resultado da integral é: {result_final}")
