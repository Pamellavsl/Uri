quantEntrada = int(input())
entrada = []
stack = []
contAbre = 0
cont = 0
listCont = []

for i in range(quantEntrada):
  lista = [i for i in input().split()]
  entrada.append(lista)

for i in entrada:
  for j in i:
    for w in j:
      if w == '<':
        stack.append(w)
        contAbre = contAbre + 1
      elif w == '>' and contAbre>0:
        stack.pop()
        contAbre = contAbre - 1
        cont = cont + 1

  listCont.append(cont)
  cont = 0
  contAbre = 0

for i in listCont:
  print(i)





