#método de eliminação de gauss
e1 = [-4.7, 4.4, -6.6, -3.8, 5.1]
e2 = [-4.4, -2.4, -0.6, -3.0, -57.4]
e3 = [0.1, -0.3, 6.8, 5.4, -8.7]
e4 = [3.0, -0.8, 3.5, 2.2, 10.9]

###################################################
#1ª rodada
cE2 = round(-4.4/-4.7, 4)
cE3 = round(0.1/-4.7, 4)
cE4 = round(3/-4.7, 4)

#atualizar e2
for i in range(5):
    e2[i] = round(e2[i] - cE2*e1[i], 4)

#atualizar e3
for i in range(5):
    e3[i] = round(e3[i] - cE3*e1[i], 4)

#atualizar e4
for i in range(5):
    e4[i] = round(e4[i] - cE4*e1[i], 4)

print(e1)
print(e2)
print(e3)
print(e4)
print("")

###################################################
#Segunda rodada - zerar E3 e E4
cE3 = round(-0.2063/-6.5193, 4)
cE4 = round(2.0085/-6.5193, 4)

#atualizar e3
for i in range(5):
    e3[i] = round(e3[i] - cE3*e2[i], 4)

#atualizar e4
for i in range(5):
    e4[i] = round(e4[i] - cE4*e2[i], 4)

print(e3)
print(e4)
print("")

###################################################
#Última rodada - zerar E4
cE4 = round(1.0061/6.4831, 4)

#atualizar e4
for i in range(5):
    e4[i] = round(e4[i] - cE4*e3[i], 4)

print(e1)
print(e2)
print(e3)
print(e4)
print("")

#Retrosubstituição
print(f"x4 = {round(e4[4]/e4[3], 4)}")
print(f"x3 = {round(((-6.6267 + (-5.3015*4.5319))/6.4831), 4)}")
print(f"x2 = {round(((-62.1746 + (-5.5789*-4.7281) + (-0.5576*4.5319))/-6.5193), 4)}")
print(f"x1 = {round(((5.1 + (-4.4*5.8785) + (6.6*-4.7281) + (3.8*4.5319))/-4.7), 4)}")


#Testando soluções alternativas...
x1 = 5.5229
x2 = -15.3206
x3 = -18.0863
x4 = 20.4762
print(f"{-4.4*x1 -2.4*x2 -0.6*x3 -3*x4} = -57.4")
print(f"{-4.7*x1 +4.4*x2 -6.6*x3 -3.8*x4} = 5.1")
print(f"{(0.1*x1) + (-0.3*x2) + (6.8*x3) + (5.4*x4)} = -8.7")
print(f"{(3*x1) + (-0.8*x2) + (3.5*x3) + (2.2*x4)} = -10.9")
