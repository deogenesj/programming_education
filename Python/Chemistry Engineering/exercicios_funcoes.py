'''
3) Crie uma função que receba um dicionário e retorne o maior valor
do dicionário.
'''
def retorna_maior(dicio):
    chave = list(dicio)[0]
    maior = dicio[chave]
    for i in dicio:
        if(maior < dicio[i]):
            maior = dicio[i]
    return maior

#começo da execução do código
dicionario = {}
dicionario['a'] = 7
dicionario['d'] = 7.8
dicionario['e'] = 56/5
res = retorna_maior(dicionario)
print(f"O maior valor é: {res}")
