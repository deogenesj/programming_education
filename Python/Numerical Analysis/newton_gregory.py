# interpolação: Newton-Gregory
def ordem3(aux, x, h, ordem_3):
    parcial = (aux-x[0])*(aux-x[1])*(aux-x[2])
    resul = round((ordem_3[0]/(6*(h**3)))*parcial, 4)
    print(f"o result 3 é : {resul}")
    return resul

def ordem2(aux, x, h, ordem_2):
    parcial = (aux-x[0])*(aux-x[1])
    result = round((ordem_2[0]/(2*(h**2)))*parcial, 4)
    print(f"o result 2 é : {result}")
    return result

x = [2.5, 2.6, 2.7, 2.8]
y = [2.58, -0.36, 2.76, -3.98]
h = x[1]-x[0]
ordem_1 = []
ordem_2 = []
ordem_3 = []

for i in range(len(y)-1):
    ordem_1.append(round(y[i+1]-y[i], 4))

print(ordem_1)

for i in range(len(ordem_1)-1):
    ordem_2.append(round(ordem_1[i+1]-ordem_1[i], 4))

print(ordem_2)

for i in range(len(ordem_2)-1):
    ordem_3.append(round(ordem_2[i+1]-ordem_2[i], 4))

print(ordem_3)

aux = 2.52
polinomio = y[0] + round(((ordem_1[0]/h)*(aux-x[0])), 4) + ordem2(aux, x, h, ordem_2) + ordem3(aux, x, h, ordem_3)
print(polinomio)
