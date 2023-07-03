# Escreva o seu código aqui :-)
e1 = [10899.36, 104.4, 1, 1538]
e2 = [9781.21, 98.9, 1, 1544]
e3 = [8704.9, 93.3, 1, 1548]
cE2 = round(9781.21/10899.36, 4)
cE3 = round(8704.9/10899.36, 4)

print(cE2)
print(cE3)
#atualizar e2
for i in range(4):
    e2[i] = round(e2[i] - cE2*e1[i], 4)

#atualizar e3
for i in range(4):
    e3[i] = round(e3[i] - cE3*e1[i], 4)

print(e1)
print(e2)
print(e3)
print("")

###################################################
#Segunda rodada - zerar E3
cE3 = round(5.2114/9.9157, 4)
print(cE3)
print("")

#Trocar E2 com E3
aux = e2
e2 = e3
e3 = aux

#atualizar e3
for i in range(4):
    e3[i] = round(e3[i] - cE3*e2[i], 4)

print(e1)
print(e2)
print(e3)
print("")

e3[0] = 0
e3[1] = 0

a0 = round(e3[-1]/e3[-2], 4)
print(a0)

a1 = round((e2[-1] - (e2[-2]*a0))/e2[-3], 4)
print(a1)

a2 = round((e1[-1] - (e1[-3]*a1) - a0)/e1[0], 4)
print(a2)
print("")

x = 100
result = a2*(x**2) + a1*x + a0
print(result)
