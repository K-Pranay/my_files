Twords=list([])
fh=open('romeo_py-assign.txt')
fh1 =fh.read()
#print(fh1)
words=fh1.split()
for x in words:
        if x not in Twords:
            Twords.append(x)
Twords.sort()
print(Twords)
