fh=open('sample_marks.txt')
fh2 = open("new_file.txt", "w")
fh2= open('new_file.txt','a')
for f1 in fh:
    x=f1.find('121')
    print(x)
    str=f1[x:]
    fh2.write(str+'\n')
print('done')
