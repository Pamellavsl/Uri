quantidade = int(input())
lista = []
lista = [int(i) for i in input().split()]

menorValor = min(lista)
posicao = lista.index(menorValor)
print("Menor valor:", menorValor)
print("Posicao:", posicao)
