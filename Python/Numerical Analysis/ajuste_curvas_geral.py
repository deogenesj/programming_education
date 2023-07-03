def g0x():
    return 1

def g1x(n):
    return n

def g2x(n):
    return n**2

x = [-1.5, -0.5, 1.25, 1.50]
y = [1.15, -0.37, 0.17, 0.94]
#Soma G0
soma_g0g0 = 0
soma_g1g0 = 0
soma_g2g0 = 0
soma_yig0 = 0
soma_g0 = [0, 0, 0, 0]

#Soma G1
soma_g0g1 = soma_g1g0
soma_g1g1 = 0
soma_g2g1 = 0
soma_yig1 = 0
soma_g1 = [soma_g0[0], 0, 0, 0]

#Soma G2
soma_g0g2 = soma_g2g0
soma_g1g2 = soma_g2g1
soma_g2g2 = 0
soma_yig2 = 0
soma_g2 = [soma_g0[-2], soma_g1[-2], 0, 0]

#Multiplicação g0g0
for i in range(len(x)):
    soma_g0g0 = soma_g0g0 + g0x()
print(soma_g0g0)

#Multiplicação g1g0
for i in x:
    soma_g1g0 = soma_g1g0 + g1x(i)
print(soma_g1g0)

#Multiplicação g2g0
for i in x:
    soma_g2g0 = soma_g2g0 + g2x(i)
print(soma_g2g0)

#Multiplicação yig0
for i in y:
    soma_yig0 = soma_yig0 + i
print(soma_yig0)
soma_g0 = [soma_g0g0, soma_g1g0, soma_g2g0, soma_yig0]

#Multiplicação g0g1
soma_g0g1 = soma_g1g0
#Multiplicação g1g1
for i in x:
    soma_g1g1 = soma_g1g1 + (g1x(i) * g1x(i))

#Multiplicação g2g1
for i in x:
    soma_g2g1 = soma_g2g1 + (g2x(i) * g1x(i))

#Multiplicação yig1
for i in range(len(y)):
    soma_yig1 = soma_yig1 + (y[i] * g1x(x[i]))

print("\nAgora os g1s")
print(soma_g0g1)
print(soma_g1g1)
print(soma_g2g1)
print(soma_yig1)
soma_g1 = [soma_g0g1, soma_g1g1, soma_g2g1, soma_yig1]

#Multiplicação g0g2
soma_g0g2 = soma_g2g0
#Multiplicação g1g2
soma_g1g2 = soma_g2g1
#Multiplicação g2g2
for i in x:
    soma_g2g2 = soma_g2g2 + (g2x(i) * g2x(i))

#Multiplicação yig2
for i in range(len(y)):
    soma_yig2 = soma_yig2 + (y[i] * g2x(x[i]))

print("\nAgora os g dois")
print(soma_g0g2)
print(soma_g1g2)
print(soma_g2g2)
print(soma_yig2)
soma_g2 = [soma_g0g2, soma_g1g2, soma_g2g2, soma_yig2]

e1 = [soma_g0g0, soma_g1g0, soma_g2g0, soma_yig0]
e2 = [soma_g0g1, soma_g1g1, soma_g2g1, soma_yig1]
e3 = [soma_g0g2, soma_g1g2, soma_g2g2, soma_yig2]

print(f"\n{e1}")
print(e2)
print(e3)
#trocar e3 com e1
aux = e1[:]
e1 = e3[:]
e3 = aux[:]
print("\n nova matriz: ")
print(e1)
print(e2)
print(e3)

###################################################
#1ª rodada
cE2 = round(e2[0]/e1[0], 4)
cE3 = round(e3[0]/e1[0], 4)

#atualizar e2
for i in range(len(e2)):
    e2[i] = round(e2[i] - cE2*e1[i], 4)

#atualizar e3
for i in range(len(e3)):
    e3[i] = round(e3[i] - cE3*e1[i], 4)

print("\n zerando e2 e e3")
print(e1)
print(e2)
print(e3)
print("")

###################################################
#Segunda rodada - zerar E3
cE3 = round(e3[1]/e2[1], 4)

#atualizar e3
for i in range(len(e3)):
    e3[i] = round(e3[i] - cE3*e2[i], 4)

print("\n zerando e3 e triangulação pronta!")
print(e1)
print(e2)
print(e3)
print("")

#Retrosubstituição
a2 = round(e3[-1]/e3[-2], 4)
a1 = round(((e2[-1] - (e2[-2]*a2))/e2[1]), 4)
a0 = round(((e1[-1] - (e1[1]*a1) - (e1[2]*a2))/e1[0]), 4)

print(f"\nOs coeficientes são: a0={a0}, a1={a1}, a2={a2}")

incognita = -1.5
g_de_x = a0 + a1*incognita + (a2*(incognita**2))
print(f"O valor de g(x) para {incognita} é: {round(g_de_x, 4)}")
