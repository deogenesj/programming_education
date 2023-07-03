n1 = int(input())
n2 = int(input())
if(n1 > n2):
    x = n1
    y = n2
else:
    x = n2
    y = n1
result = (x**2) + (3*y) -10

while(result != 0):
    print(result)
    n1 = int(input())
    n2 = int(input())
    if(n1 > n2):
        x = n1
        y = n2
    else:
        x = n2
        y = n1
    result = (x**2) + (3*y) -10
