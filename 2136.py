entrada = []
listaNomes = []
contNomes = []
listAmigos = []
listNotAmigos = []

while True:
  entrada = [i for i in input().split()]
  if entrada[0] == "FIM":

    for i in listAmigos:
      cont = 0
      for char in i:
        cont = cont + 1
      contNomes.append(cont)


    contMinimo = max(contNomes)
    index = contNomes.index(contMinimo)
    amigoHabby = listAmigos[index]

    listAmigos.sort()
    listNotAmigos.sort()

    for i in listAmigos:
      print(i)
    for j in listNotAmigos:
      print(j)

    print("\nAmigo do Habay:\n{}".format(amigoHabby))

    break
  if entrada[0] not in listaNomes:
    listaNomes.append(entrada[0])
    if entrada[1] == "YES":
      listAmigos.append(entrada[0])
      listaNomes.append(entrada[0])
    else:
      listNotAmigos.append(entrada[0])
      listaNomes.append(entrada[0])
