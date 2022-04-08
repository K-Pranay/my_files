def split(lxt):
    return list(lxt)
str=input()
N=int(input())

List=[]
subLength=0

for i in range(N):
    List.append(input())
    subLength=subLength+len(List[i])

i=i+1 # i is no of small strings
MainList=[]
for x in str:
    MainList.append(x)

if subLength != len(MainList):
    print('NO')
    quit()
else:
    print('YES')
#
# if any new letter print('NO')
#
#


# i=0
# for z in List:
#     if (str[i:1] in split(z)):
#
D={}
for x in str:
    if x in split(str):
        try:
            D[x]=D[x]+1
        except:
            D[x]=1
    else:
        D[x]=1
    #count=count+1
print(D)
# for x,y in D.items():
#     if y==1:
#         for z in List:
#             if x in split(z):
