lista = []
num = int(input())

for i in range(10):
  if i == 0:
    lista.append(num)
  else:
    temp = lista[i-1]*2
    lista.append(temp)

for j in range(len(lista)):
  print("N[%i] = %i" %(j, lista[j]))
