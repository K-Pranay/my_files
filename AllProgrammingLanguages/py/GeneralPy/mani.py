#unsuccesfull
T=input()#no of students
MainList=[]
merit=[]
t=int(T)
for i in range(int(t)):
    list=input().split(',')
    MainList.append(list)
    merit.append([i,int(list[2])])

#merit=merit.sort()
#print(merit)
id=0
def findmax(merit):

    first=merit[0][1]
    for i in range(len(merit)):
        if (first<merit[i][1]):
            first=merit[i][1]
            id=i
            #print(id)
    try:
        merit.remove([id,first])
        return id,first
    except:
        return -2,-2
        pass


while True:

    id,max=findmax(merit)
    if (id==-2):
        continue
    print(MainList[id][1],MainList[id][0])
    if(len(merit)==0):
        break
