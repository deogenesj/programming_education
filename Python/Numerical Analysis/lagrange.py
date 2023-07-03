#Lagrange
#p(x) = y0L0(xi) + y1L1(xi) + y2L2(xi) + ynLn(xi)
#L = (x-xj)/(xk - xj)
#L0 = (x-x1)*(x-x2)/(x0-x1)*(x0-x2)
#L1 = (x-x0)*(x-x2)/(x1-x0)*(x1-x2)
#L2 = (x-x0)*(x-x1)/(x2-x0)*(x2-x1)
x0 = 93.3
x1 = 98.9
x2 = 104.4
y = [1548, 1544, 1538]
x = 100
L0 = (((x**2) + (x*-x2) + (-x1*x) + (x1*x2))) / ((x0-x1)*(x0-x2))
L1 = (((x**2) + (x*-x2) + (-x0*x) + (x0*x2))) / ((x1-x0)*(x1-x2))
L2 = (((x**2) + (x*-x1) + (-x0*x) + (x0*x1))) / ((x2-x0)*(x2-x1))
print(y[0]*L0)
print(y[1]*L1)
print(y[2]*L2)
result = (y[0]*L0) + (y[1]*L1) + (y[2]*L2)
print(result)
