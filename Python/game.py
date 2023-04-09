import random

def gameWin(comp,b):
    if comp == b:
        return None
    
    elif comp=='s':
        if b == 'w':
            return False
        elif b == 'g':
            return True
    
    elif comp=='w':
        if b == 'g':
            return False
        elif b == 's':
            return True
    
    elif comp=='g':
        if b == 's':
            return False
        elif b == 'w':
            return True

b=input("Player your Turn:Snack(s),Water(w) and Gun(g)!")

print("Computer Turn:Snack(s),Water(w) and Gun(g)!")

rand=random.randint(1,3)

print(rand)

if rand==1:
    comp='snack'
elif rand==2:
    comp='water'
elif rand==3:
    comp='gun'


a = gameWin(comp, b)
if comp == b:
    print("The game is tie.")
elif a:
    print("You Win.")
else:
    print(("You Loss."))
print(f"Computer Choose : {comp}")
print(f"You Choose : {b}")
