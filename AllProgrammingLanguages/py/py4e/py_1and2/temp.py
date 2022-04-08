Twords=list([])
count=0
fh=open('mobx_py_assign.txt')
for fh1 in fh:
    if fh1.startswith('From'):
        words=fh1.split()
        Twords.append(words[1])
        count=count+1

for n in Twords:
    print(n)
print(count)
