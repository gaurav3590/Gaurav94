import re
s='Rain in the Spain'
if re.search('Rain',s):
    print('Exists')
if re.search(r'n/b',s):
    print('Exists')

print(re.findall('r..n',s))
print(re.split('r..n',s))