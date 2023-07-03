#gauss-jacobi

#Iteração 1
x1 = 1.8
x2 = 8.9
x3 = 2.5

denoxi = (9.1 -x2 -3.6*x3)
xi = round(denoxi/(-4.9), 4)
denoxii = (-131.7 + 8.8*x1 -4.2*x3)
xii = round(denoxii/-14.2, 4)
denoxiii = (-81.5 -6.4*x1 +6.6*x2)
xiii = round(denoxiii/-13.7, 4)

print("---------------PRIMEIRA ITERAÇÃO----------")
print(f"x1 = {denoxi}/-4.9 = {xi}")
print(f"x2 = {denoxii}/-14.2 = {xii}")
print(f"x3 = {denoxiii}/-13.7 = {xiii}")

print(f"erro x1 = {xi-x1}")
print(f"erro x2 = {xii-x2}")
print(f"erro x3 = {xiii-x3}")

#Iteração 2
x1 = 1.7959
x2 = 8.8986
x3 = 2.5022

denoxi = (9.1 -x2 -3.6*x3)
xi = round(denoxi/(-4.9), 4)
denoxii = (-131.7 + 8.8*x1 -4.2*x3)
xii = round(denoxii/-14.2, 4)
denoxiii = (-81.5 -6.4*x1 +6.6*x2)
xiii = round(denoxiii/-13.7, 4)

print("---------------SEGUNDA ITERAÇÃO----------")
print(f"x1 = {denoxi}/-4.9 = {xi}")
print(f"x2 = {denoxii}/-14.2 = {xii}")
print(f"x3 = {denoxiii}/-13.7 = {xiii}")

print(f"erro x1 = {xi-x1}")
print(f"erro x2 = {xii-x2}")
print(f"erro x3 = {xiii-x3}")

#Iteração 3
x1 = 1.7972
x2 = 8.9018
x3 = 2.5009

denoxi = (9.1 -x2 -3.6*x3)
xi = round(denoxi/(-4.9), 4)
denoxii = (-131.7 + 8.8*x1 -4.2*x3)
xii = round(denoxii/-14.2, 4)
denoxiii = (-81.5 -6.4*x1 +6.6*x2)
xiii = round(denoxiii/-13.7, 4)

print("---------------TERCEIRA ITERAÇÃO----------")
print(f"x1 = {denoxi}/-4.9 = {xi}")
print(f"x2 = {denoxii}/-14.2 = {xii}")
print(f"x3 = {denoxiii}/-13.7 = {xiii}")

print(f"erro x1 = {xi-x1}")
print(f"erro x2 = {xii-x2}")
print(f"erro x3 = {xiii-x3}")

#última iteração
x1 = 1.7969
x2 = 8.9005
x3 = 2.5

denoxi = (9.1 -x2 -3.6*x3)
xi = round(denoxi/(-4.9), 4)
denoxii = (-131.7 + 8.8*x1 -4.2*x3)
xii = round(denoxii/-14.2, 4)
denoxiii = (-81.5 -6.4*x1 +6.6*x2)
xiii = round(denoxiii/-13.7, 4)

print("---------------QUARTA ITERAÇÃO----------")
print(f"x1 = {denoxi}/-4.9 = {xi}")
print(f"x2 = {denoxii}/-14.2 = {xii}")
print(f"x3 = {denoxiii}/-13.7 = {xiii}")

print(f"erro x1 = {xi-x1}")
print(f"erro x2 = {xii-x2}")
print(f"erro x3 = {xiii-x3}")
