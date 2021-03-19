idade = int(input())
soma = 0
cont = 0

while idade>0:
  soma = soma + idade
  cont = cont + 1

  idade = int(input())

media = soma/cont
print("%.2f" %(media))

