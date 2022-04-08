n1 = int(input().strip())
# z='a'
# print(int(ord(z)))
#print(chr(97))
def find_middle_out_queue_structure(n1):
    lst=[0,1]
    len=2
    for i in range(2,n1):
        if len%2==0:
            lst.insert(int(len/2),i)
        else:
            lst.insert(int((len+1)/2),i)
        len+=1
    str=''
    print(lst)
    for i in lst:
        str=str+chr(i+97)+' '
    # print(str)
output = find_middle_out_queue_structure(n1)
