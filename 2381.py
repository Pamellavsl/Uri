listaAlunos = []
lista = []
lista = [int(i) for i in input().split()]
quantAlunos = lista[0]
numSorteado = lista[1]


for i in range(quantAlunos):
  nome = input()
  listaAlunos.append(nome)

listaAlunos.sort()
listaAlunos.insert(0,"nulo")

for i in range(len(listaAlunos)):
  if i == numSorteado:
    sorteado = listaAlunos[i]

print(sorteado)
