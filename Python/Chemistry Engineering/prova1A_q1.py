n = int(input()) #leitura do número
n1 = n//100 #pegar o primeiro numero (centena)
n = n%100 #mudar o N para ficar só com a dezena e unidade
n2 = n//10 #pegar o segundo numero (dezena)
n3 = n%10 #pegar o terceiro numero (unidade)
soma = n1+n2+n3
if(soma%2 == 0):
    print(f"Soma par: {soma}")
else:
    print(f"Soma ímpar. Produto: {n1*n2*n3}")
