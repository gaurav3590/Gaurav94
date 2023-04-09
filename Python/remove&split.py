def rs(String,word):
    newStr=String.replace(word,"")
    return newStr.strip()

a="             \n \n \t Hello Good Morning!               "
print(a)
print(a.strip())    
b=rs(a,"Hello")
print(b)