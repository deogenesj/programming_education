#gauss-seidel

#primeira iteração
x1 = 4.7
x2 = -4.5
x3 = -8.7
x4 = -9.5

denoxi = (-125.1 -4.7*x2 -4.1*x3 -1.9*x4)
xi = round(denoxi/-10.8, 4)
denoxii = (-12.1 +5.6*xi -1.7*x3 -1.3*x4)
xii = round(denoxii/-9.2, 4)
denoxiii = (68.4 +6.9*xi -8*xii -4*x4)
xiii = round(denoxiii/-20.1, 4)
denoxiv = (-155.1 +7.9*xi +5.8*xii +3.2*xiii)
xiv = round(denoxiv/18.1, 4)

print("---------PRIMEIRA ITERAÇÃO------------")
print(f"x1 = {denoxi}/-10.8 = {xi}")
print(f"x2 = {denoxii}/-9.2 = {xii}")
print(f"x3 = {denoxiii}/-20.1 = {xiii}")
print(f"x4 = {denoxiv}/18.1 = {xiv}")
print(f"erro x1 = {xi-x1}")
print(f"erro x2 = {xii-x2}")
print(f"erro x3 = {xiii-x3}")
print(f"erro x4 = {xiv-x4}")

#segunda iteração
x1 = 4.6972
x2 = -4.4939
x3 = -8.6946
x4 = -9.4961

denoxi = (-125.6 -4.7*x2 -4.1*x3 -1.9*x4)
xi = round(denoxi/-10.8, 4)
denoxii = (-12.1 +5.6*xi -1.7*x3 -1.3*x4)
xii = round(denoxii/-9.2, 4)
denoxiii = (68.4 +6.9*xi -8*xii -4*x4)
xiii = round(denoxiii/-20.1, 4)
denoxiv = (-155.1 +7.9*xi +5.8*xii +3.2*xiii)
xiv = round(denoxiv/18.1, 4)

print("---------SEGUNDA ITERAÇÃO------------")
print(f"x1 = {denoxi}/-10.8 = {xi}")
print(f"x2 = {denoxii}/-9.2 = {xii}")
print(f"x3 = {denoxiii}/-20.1 = {xiii}")
print(f"x4 = {denoxiv}/18.1 = {xiv}")
print(f"erro x1 = {xi-x1}")
print(f"erro x2 = {xii-x2}")
print(f"erro x3 = {xiii-x3}")
print(f"erro x4 = {xiv-x4}")

#terceira iteração
x1 = 4.7026
x2 = -4.4957
x3 = -8.6964
x4 = -9.4946

denoxi = (-125.6 -4.7*x2 -4.1*x3 -1.9*x4)
xi = round(denoxi/-10.8, 4)
denoxii = (-12.1 +5.6*xi -1.7*x3 -1.3*x4)
xii = round(denoxii/-9.2, 4)
denoxiii = (68.4 +6.9*xi -8*xii -4*x4)
xiii = round(denoxiii/-20.1, 4)
denoxiv = (-155.1 +7.9*xi +5.8*xii +3.2*xiii)
xiv = round(denoxiv/18.1, 4)

print("---------TERCEIRA ITERAÇÃO------------")
print(f"x1 = {denoxi}/-10.8 = {xi}")
print(f"x2 = {denoxii}/-9.2 = {xii}")
print(f"x3 = {denoxiii}/-20.1 = {xiii}")
print(f"x4 = {denoxiv}/18.1 = {xiv}")
print(f"erro x1 = {xi-x1}")
print(f"erro x2 = {xii-x2}")
print(f"erro x3 = {xiii-x3}")
print(f"erro x4 = {xiv-x4}")

#quarta iteração
x1 = 4.7014
x2 = -4.4951
x3 = -8.6955
x4 = -9.4948

denoxi = (-125.6 -4.7*x2 -4.1*x3 -1.9*x4)
xi = round(denoxi/-10.8, 4)
denoxii = (-12.1 +5.6*xi -1.7*x3 -1.3*x4)
xii = round(denoxii/-9.2, 4)
denoxiii = (68.4 +6.9*xi -8*xii -4*x4)
xiii = round(denoxiii/-20.1, 4)
denoxiv = (-155.1 +7.9*xi +5.8*xii +3.2*xiii)
xiv = round(denoxiv/18.1, 4)

print("---------QUARTA ITERAÇÃO------------")
print(f"x1 = {denoxi}/-10.8 = {xi}")
print(f"x2 = {denoxii}/-9.2 = {xii}")
print(f"x3 = {denoxiii}/-20.1 = {xiii}")
print(f"x4 = {denoxiv}/18.1 = {xiv}")
print(f"erro x1 = {xi-x1}")
print(f"erro x2 = {xii-x2}")
print(f"erro x3 = {xiii-x3}")
print(f"erro x4 = {xiv-x4}")
