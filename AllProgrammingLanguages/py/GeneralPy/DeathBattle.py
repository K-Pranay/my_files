T=int(input())  #number of test cases

list=[]
listT=[]
for i in range(T):
    str=input()
    lst=str.split()
    for x in lst:
        list.append(int(lst[i]))
    listT.append(list)
    list=[]
print(listT)
