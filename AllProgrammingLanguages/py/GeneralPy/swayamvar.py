brides=input('enter numbers of brides present')
bstr=input('enter brides tastes')
gstr=input('grooms taste')
"""
brides=4
bstr='rrmm'
gstr='mrmr'
"""
x=int(brides)
if len(bstr)!= x or len(gstr)!=x:
    print('check your input and try agsin')
    quit()
#lst=bstr.split('r')
#for k in lst:
#    print(k.split('m'))
histo=dict()
for g in gstr:
    histo[g]=histo.get(g,0)+1
print(histo)
#dictinariis working

for b in bstr:
    if b=='r':
        if histo['r']<1:
            break
        histo['r']=histo['r']-1
    elif b=='m':
        if histo['m']<1:
            break
        histo['m']=histo['m']-1
print(histo['m']+histo['r'])#these many unmarried
#five line code done by someone
"""
number_of_brides_and_grooms = 5#int(input())
brides = 'rmmrr'#input()
grooms = 'mmmmr'#input()
i = 0
while i < number_of_brides_and_grooms:
    index = grooms.find(brides[0])
    if index < 0:
        break
    grooms = grooms[index+1:]+grooms[:index]
    brides = brides[1:]
    i += 1
print(len(brides),end="")
"""
