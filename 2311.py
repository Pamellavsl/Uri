num = int(input())
lista = []
resultado = []
nomes = []

for i in range(num):
    soma = 0
    notaFinal = 0
    nome = input()
    nomes.append(nome)
    notaDePartida = float(input())
    lista = [float(i) for i in input().split()]
    menorNota = min(lista)
    maiorNota = max(lista)
    lista.remove(menorNota)
    lista.remove(maiorNota)

    for i in range(len(lista)):
        soma = soma + lista[i]

    notaFinal = soma*notaDePartida
    resultado.append(notaFinal)

for i in range(len(nomes)):
    print("%s %.2f" %(nomes[i], resultado[i]))


