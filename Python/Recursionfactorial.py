def fact(n):
    if n==0 or n==1:
        return 1
    return n*fact(n-1)
c=fact(5)
print(str(c))