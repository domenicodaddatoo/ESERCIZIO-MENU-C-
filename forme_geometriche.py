import turtle
t=turtle.Screen()
t= turtle.Turtle()
N=int(input('inserisci quanti lati vuoi: '))
a=((N-2)*180/N)-180
for i in range (N):
    t.forward(100)
    t.right(a)
    
    
    


            
