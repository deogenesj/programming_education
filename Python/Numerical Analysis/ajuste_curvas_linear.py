x = [1, 1.5, 2]
y = [1.2, 1.3, 2.3]
soma_1 = 0 #guardar o somatorio de 1
soma_x = 0 #guardar o somatorio de xi
soma_y = 0 #guardar o somatorio de yi
soma_x2 = 0 #guardar o somatorio de x²
soma_yi_xi = 0 #guardar o somatorio de yi*xi

for i in range(len(x)):
    soma_1 = soma_1 + 1

for i in x:
    soma_x = soma_x + i

for i in y:
    soma_y = soma_y + i

for i in x:
    soma_x2 = soma_x2 + i**2

for i in range(len(y)):
    soma_yi_xi = soma_yi_xi + (y[i] * x[i])

print(soma_1)
print(soma_x)
print(soma_y)
print(soma_x2)
print(soma_yi_xi)

matriz = [[soma_1, soma_x], [soma_x, soma_x2]]
vetor_y = [soma_y, soma_yi_xi]
a = round(((soma_y * soma_x2) - (soma_x * soma_yi_xi))/((soma_1 * soma_x2) - (soma_x**2)), 4)
b = round(((soma_1*soma_yi_xi) - (soma_y * soma_x))/((soma_1 * soma_x2) - (soma_x**2)), 4)
print(a)
print(b)

incognita = 3
g_de_x = a + (b*incognita)
print(f"O valor de g(x) para {incognita} é: {round(g_de_x, 4)}")
