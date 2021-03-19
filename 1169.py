quantTestes = int(input())
varDobro = 1

for i in range(quantTestes):
    entrada = int(input())
    for j in range(entrada+1):
        if j>0:
            varDobro = varDobro*2
    quantGrama = varDobro/12
    quantKg = quantGrama/1000

    print("%i kg" %(quantKg))
    varDobro = 1
