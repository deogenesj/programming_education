n1 = int(input())
n2 = int(input())
par1 = n1
par2 = n2
diferenca = abs(n1 - n2)
contador = 0
posicao = 1
while(n1 != 0 or n2 != 0):
    contador = contador + 1
    if(abs(n1-n2) > diferenca):
        par1 = n1
        par2 = n2
        diferenca = abs(n1-n2)
        posicao = contador
    n1 = int(input())
    n2 = int(input())
if(par1 != 0 or par2 != 0):
    print(f"Maior diferença: {diferenca} - na {posicao}o posição e par ({par1} {par2})")
