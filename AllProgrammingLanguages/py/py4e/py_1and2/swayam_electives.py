fh =open('SWAYAM courses.txt')
fh2=open('new_file2.txt','w')
#fh2=open('new_file2.txt','a')
fh2.write('SWAYAM Courses for ACRS:\n')
lst=range(20)
x=0
flag=0
for str in fh:
    if flag==1:
        str2=''
        for i in range(50-len(str+x.__str__())): # for adding required no of spaces after str
            str2=str2+' '
        fh2.write(x.__str__()+')'+str.rstrip()+str2+':\n')
        flag=0
        continue
    else:
        try:
            x=int(str)
        except:
            continue
        if x in lst:
            flag=1
print('done!')
