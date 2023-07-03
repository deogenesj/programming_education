'''
1. (votacao) Crie uma função que faça o comportamento de uma urna eletrônica
A função deve receber um valor de voto (entre 01 e 99).
Qualquer valor negativo ou acima de 99 é um voto nulo.
Caso o usuário não envie seu voto, o valor 00 deve ser utilizado,
que é o valor padrão para um voto em branco.
'''
def votacao(voto = 0):
    if(voto == 0):
        print("Voto em branco!")
    elif(voto < 1 or voto > 99):
        print("Voto nulo!")
    else:
        print(f"Voto {voto}")

voto = int(input("Digite seu voto: "))
votacao(voto)
