import math
x = [0, 1.5, 3.0, 4.5, 6.0, 6.5]
for i in x:
    print(f"{i} = {1.0034*i + 1.0135*math.cos(i)}")
