entrada = [int(i) for i in input().split()]
numAtacantes = entrada[0]
numDefesa = entrada[1]

while entrada[0]!= 0 and entrada[1]!=0:
    listaAtacantes = [int(i) for i in input().split()]
    listaDefesa = [int(i) for i in input().split()]

    listaDefesa.sort()
    listaAtacantes.sort()

    if listaAtacantes[0] == listaDefesa[1]:
        print("N")
    elif listaAtacantes[0] == listaDefesa[0] and listaDefesa[0] == listaDefesa[1]:
        print("N")
    elif listaDefesa[1] < listaAtacantes[0]:
        print("N")
    else:
        print("Y")

    entrada = [int(i) for i in input().split()]
