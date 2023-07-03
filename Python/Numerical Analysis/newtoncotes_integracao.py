def f_de_x(n):
    result = round(n**3, 4)
    print(result)
    return result

def somatorio_lista(lista):
    soma = 0
    for i in lista:
        soma = soma + i
    return soma

h = 0.3333
n = 6
ponto = -1
c = [-1]
cont = 0
while (cont < n):
    ponto = round(ponto+h, 4)
    c.append(ponto)
    cont = cont + 1

print(c)
pontos_medios = []
for i in range(len(c)-1):
    print(round((c[i]+c[i+1])/2, 4))
    pontos_medios.append(round((c[i]+c[i+1])/2, 4))

print(pontos_medios)

calculo = []
for i in pontos_medios:
    calculo.append(f_de_x(i))

soma = somatorio_lista(calculo)
result_final = round(soma*h, 4)
print(result_final)
