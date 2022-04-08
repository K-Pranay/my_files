
str=input('enter N=')
str2=input('enter 3 digit '+str+' numbers with 1 space between')
lst=str2.split()
if len(lst)!=int(str):
    print('hey check the digits you have entered,try again')
    quit()
lst2=[]
lst3=[]
for i in lst:
    if int(i)>1000 and int(i)<100 and int(str)>500:
        print('follow the constraints N<500 and it should be a 3 digit number')
        exit()
    #calculating bit score
    lst2=[]
    for k in i:
        lst2.append(int(k))
    lst2.sort()
    lst3.append(lst2[2]*11+lst2[0]*7)
#their are bit pairs in lst3 wirth most significant bit inside
# now i have to make pairs in lst3
lst31=[]
for kpr in lst3:
    lst31.append(kpr-int(kpr/100)*100)
# lst31 has fonal bitscore
oddlst3=[]
evenlst3=[]
count=0
for i in lst31:
    if count%2==0:
        evenlst3.append(i)
    else:
        oddlst3.append(i)
    count=count+1
pairs=0
msb=[]
for count in evenlst3:
    msb.append(int(count/10))
for count in oddlst3:
    msb.append(int(count/10))
histo=dict()
for i in msb:
    histo[i]=histo.get(i,0)+1

for x,y in histo.items():
    if y==2:
        pairs=pairs+1
    elif y>2:
        pairs=pairs+2
print(lst3)
print(lst31)
print(histo)
print(pairs)
