N=int(input("inserisci quanti numeri vuoi considerare: "))
MyList=[]
prodotto=1
for i in range (0,N):
    num=int(input("inserisci un numero: "))
    MyList.append(num)
for numero in MyList:
    prodotto= prodotto*numero
print(prodotto)

