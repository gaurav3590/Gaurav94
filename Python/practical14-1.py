def fun1(l):
    n=[]
    for i in l:
        if i not in n:
            n.append(i)
    return n