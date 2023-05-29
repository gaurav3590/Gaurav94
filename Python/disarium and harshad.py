s=0
s2=0
for i in range(1,101):
    for j in range((len(str(i))),0,-1):
        d=i%10
        s=s+(d**j)
        d=d//10

    for l in range(1,i+1):
        r=l%10
        s2=s2+r
        r=r//10
        
    if(s==i and s2==i):
        print("disarium and harshad numbers are:",i)
else:
    print("all disarium and harshad numbers between 1 and 100 are printed..")
    