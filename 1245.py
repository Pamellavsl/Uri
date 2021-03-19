direita = []
esquerda = []
cont = 0
listCont = []
while True:

    try:
        for i in range(61):
            direita.append(0)
            esquerda.append(0)

        quantTeste = int(input())
        for i in range(quantTeste):
            entrada = [i for i in input().split()]
            numero = int(entrada[0])
            lado = entrada[1]
            if lado == 'D':
                direita[numero] = direita[numero] + 1
            else:
                esquerda[numero] = esquerda[numero] + 1
        for i in range(61):
            if direita[i] > 0 and esquerda[i]>0:
                if direita[i] == esquerda[i]:
                    cont = cont + esquerda[i]
                elif direita[i] > esquerda[i]:
                    cont = cont + esquerda[i]
                elif esquerda[i] > direita[i]:
                    cont = cont + direita[i]
        listCont.append(cont)
        cont = 0
        direita.clear()
        esquerda.clear()

    except EOFError:
        for i in listCont:
            print(i)
        break
