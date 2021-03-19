listaCodigos = []
codigo = []

while True:
  try:
    quantLivros = int(input())
    for i in range (quantLivros):
      codigo.append(input())

    codigo.sort()
    for i in codigo:
        listaCodigos.append(i)
    codigo.clear()

  except EOFError:
    for i in listaCodigos:
      print(i)
    break
