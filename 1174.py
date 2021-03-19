lista = []

for i in range(100):
  num = float(input())
  lista.append(num)

for j in range(len(lista)):
  if lista[j]<=10:
    print("A[%i] = %.1f" %(j, lista[j]))
