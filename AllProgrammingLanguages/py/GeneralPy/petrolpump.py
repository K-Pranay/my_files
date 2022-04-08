# #similar to 2d arrays in python
#
# rows=5
# cols=5
# list2d = [[0 for i in range(cols)] for j in range(rows)] # (or)  list2d = [[0]*cols]*rows   this has a drawback
# for arr in list2d:
#     print(arr)
#
# #initialized all values to zeroes in arrays
# list2d[1][2]=1
# for arr in list2d:
#     print(arr)
# # done with arrays

# refer Absminsumdiff.java for clear understanding

str=input("enter line of values")
list1=str.split()
sum = 0
i   = 0
list=[]
for x in list1:
    list.append(int(x))
    sum=sum+int(x)
    i+=1

print(i)
print(sum)

if (sum%2==0):
    sum=int(sum/2)
else:
    sum=int(sum/2)+1

rows,cols=(i,sum+1)

print(rows,cols)

arr = [[0 for i in range(cols)]for j in range(rows)]

for x in range(i):
    arr[x][0]=1

for x in range(cols):
    if(x==list[0]):
        arr[0][x]=1
# for list2d in arr:
#     print(list2d)

for x in range(i):
    if(x==0):
        continue
    for y in range(cols):
        if(y==0):
            continue
        if(arr[x-1][y]==1):
            arr[x][y]=arr[x-1][y]
        else:
            if y-list[x]<0:                   #arr[neg number] is acessing from reverse
                continue
            arr[x][y]=arr[x-1][y-list[x]]

for list2d in arr:
    print(list2d)
# done with making 2d array now check the values and make results

# check last row from last col where 1 is present

for x in range(cols-1,0,-1):           #3 2 1  '0 not included'
    print(x)
    if(arr[rows-1][x]==1):  # last row is enough
        print("found")
        break
print(x)
#now we got index

print('minimum time required to fill petrol is:',sum+sum-x)
