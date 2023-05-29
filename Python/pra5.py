num=int(input("Enter the number:"))
a=[]
for n in range(1,num+1):
    if(num%n==0):
        a.append(n)
print(a)