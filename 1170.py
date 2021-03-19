quantTeste = int(input())
cont = 0

for i in range(quantTeste):
    entrada = float(input())
    while True:
        entrada = entrada/2
        cont = cont + 1
        if entrada<=1:
            print("%i dias" %(cont))
            cont = 0
            break
