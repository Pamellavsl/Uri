lista = []
nome = [] 
contPositivo = 0
contNegativo = 0

quantidade = int(input())

for i in range(quantidade):
    nomes = input()
    nome = nomes.split(" ")
    lista.append(nome[1])
    if "+" in nomes:
      contPositivo = contPositivo + 1
    else:

      contNegativo = contNegativo + 1
        

lista.sort()

for i in lista:
    print(i)
    
print("Se comportaram: %i | Nao se comportaram: %i" %(contPositivo, contNegativo)) 


    
