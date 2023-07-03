def calcula_media(nota1, nota2 = 0, nota3 = 0):
    soma = nota1 + nota2 + nota3
    media = soma/3
    return media

a = float(input("Digite a 1ª nota:"))
b = float(input("Digite a 2ª nota: "))
c = float(input("Digite a 3ª nota: "))
media1 = calcula_media(a, b, c)
print(media1)
media2 = calcula_media(7.8, 8.4, 4.6)
print(f"Outra média: {media2}")
