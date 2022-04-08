import re
f1=open('main_data.txt')
sum=0
for str in f1:
    lst=re.findall('[0-9]+',str)
    for kpr in lst:
        sum=sum+int(kpr)
print(sum)
#print(sum([ int(i) for i in re.findall('[0-9]+',open('main_data.txt').read())]))
#this is single line
