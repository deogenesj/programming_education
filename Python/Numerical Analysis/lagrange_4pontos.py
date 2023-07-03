#Lagrange
#p(x) = y0L0(xi) + y1L1(xi) + y2L2(xi) + ynLn(xi)
#L = (x-xj)/(xk - xj)
#L0 = (x-x1)*(x-x2)*(x-x3)/(x0-x1)*(x0-x2)*(x0-x3)
#L1 = (x-x0)*(x-x2)*(x-x3)/(x1-x0)*(x1-x2)*(x1*x3)
#L2 = (x-x0)*(x-x1)*(x-x3)/(x2-x0)*(x2-x1)*(x2-x3)
#L3 = (x-x0)*(x-x1)*(x-x2)/(x3-x0)*(x3-x1)*(x3-x2)
x0 = 2.2
x1 = 2.5
x2 = 4
x3 = 4.6
y = [-2.04, -3.26, 0.41, -5]

x = 3.67
L0 = ((x-x1)*(x-x2)*(x-x3))/((x0-x1)*(x0-x2)*(x0-x3))
L1 = ((x-x0)*(x-x2)*(x-x3))/((x1-x0)*(x1-x2)*(x1-x3))
L2 = ((x-x0)*(x-x1)*(x-x3))/((x2-x0)*(x2-x1)*(x2-x3))
L3 = ((x-x0)*(x-x1)*(x-x2))/((x3-x0)*(x3-x1)*(x3-x2))
print(f"L0 é {L0}")
print(f"L1 é {L1}")
print(f"L2 é {L2}")
print(f"L3 é {L3}")
result = (y[0]*L0) + (y[1]*L1) + (y[2]*L2) + (y[3]*L3)
print(result)

a = 3.67
L0 = (a**3 - 10.8*a**2 + 36.52*a -36.8)/1.26
print(L0)
