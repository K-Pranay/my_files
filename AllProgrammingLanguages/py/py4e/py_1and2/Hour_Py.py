Twords=list([])
count=0
fh=open('mobx_py_assign.txt')
for fh1 in fh:
    if fh1.startswith('From '):
        words=fh1.split()
        Twords.append(words[5])
        count=count+1

flst=[]
count=0
for str in Twords:
    lst=str.split(':')
    flst.append(lst[0])
    count=count+1

count=0
di = dict()
for hr in flst:
    if hr in flst[:count]:
        di[hr]=di[hr]+1
    else:
        di[hr]=1
    count= count+1

lst=list()
print(di)
t=sorted(di.items())
for k,v in t:
    print(k,v)
