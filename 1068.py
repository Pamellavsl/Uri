while True:
    try:
        cont = 0
        entrada = input()

        for i in entrada:
            if i == '(':
                cont = cont + 1
            elif i == ')':
                cont = cont - 1
            if cont<0:
                break
        if (cont != 0):
            print("incorrect")
        else:
            print("correct")

    except EOFError:
            break
