fh=open('sample_marks.txt')
fh2 = open("new_file.txt", "x")# make sure u delete the file before making this or use 'w'in the mode
fh2= open('new_file.txt','a')
for f1 in fh:
    lst=f1.split()
    for str in lst[1:]:
        fh2.write(str+' ')
    fh2.write('\n')
print('done')
