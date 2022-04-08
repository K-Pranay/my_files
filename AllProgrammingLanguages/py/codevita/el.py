n=int(input())
str=input()
a=0
b=0

while True:
    str=str.replace("B-A","z")
    str=str.replace("-A","AA")
    str=str.replace("B-","BB")
    if(str.find('-A')==(-1) and str.find('B-')==(-1)):
        break
# print(str)
for x in str:
    if (x=='A'):
        a+=1
    elif(x=='B'):
        b+=1
    else:
        pass
# a=str.count('A')
# b=str.count('B')
if (a>b):
    print('A')
elif(b==a):
    print('Coalition government')
else:
    print('B')
