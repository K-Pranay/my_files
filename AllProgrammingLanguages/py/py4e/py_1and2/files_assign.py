name=input('enter file name with .txt:   ')#'mobx_py_assign.txt'
fh=open(name)
#inp=fh.read()
#for inp1 in inp:
#    if
count=0
sum=0
for fh1 in fh:
    if fh1.startswith('X-DSPAM-Confidence:'):
        count=count+1
        str=fh1[20:27]
        sum=sum+float(str)
str2=sum/count
print("Average spam confidence:",str2)
