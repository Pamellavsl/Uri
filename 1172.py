lista = []

for i in range(10):
  num = int(input())
  if num<=0:
    num = 1
    lista.insert(i, num)
  else:
    lista.insert(i, num)

for i in range(len(lista)):
  print("X[%i] = %i" %(i, lista[i]))
