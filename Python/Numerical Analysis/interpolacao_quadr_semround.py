# Escreva o seu código aqui :-)
e1 = [10899.36, 104.4, 1, 1538]
e2 = [9781.21, 98.9, 1, 1544]
e3 = [8704.9, 93.3, 1, 1548]
cE2 = e2[0]/e1[0]
cE3 = e3[0]/e1[0]

print(cE2)
print(cE3)
#atualizar e2
for i in range(4):
    e2[i] = e2[i] - cE2*e1[i]

#atualizar e3
for i in range(4):
    e3[i] = e3[i] - cE3*e1[i]

print(e1)
print(e2)
print(e3)
print("")

###################################################
#Segunda rodada - zerar E3
#Trocar E2 com E3
aux = e2
e2 = e3
e3 = aux

cE3 = e3[1]/e2[1]
print(cE3)
print("")

#atualizar e3
for i in range(4):
    e3[i] = e3[i] - cE3*e2[i]

print(e1)
print(e2)
print(e3)
print("")

e3[0] = 0
e3[1] = 0

a0 = e3[-1]/e3[-2]
print(a0)

a1 = (e2[-1] - (e2[-2]*a0))/e2[-3]
print(a1)

a2 = (e1[-1] - (e1[-3]*a1) - a0)/e1[0]
print(a2)
print("")

x = 100
result = a2*(x**2) + a1*x + a0
print(result)
