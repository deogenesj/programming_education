def fatorial(n):
    result = 1
    cont = 2
    while(cont <= n):
        result = result * cont
        cont = cont+1
    return result

aux = int(input("Digite um número"))
aux = fatorial(aux)
print(aux)
###
##
####
####
####
##
idade = 32
ano = 1990
aux = fatorial(ano-idade)
print(aux)
