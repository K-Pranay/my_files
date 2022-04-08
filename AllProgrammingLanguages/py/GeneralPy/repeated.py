str=input('enter string to process')
print('thank you')
#to find largest possible substring with non repaeated characters

print(len(str))
#strlong
x=dict()

for k in str:
    x[k]=x.get(k,0)+1
print(x)

#take 1 character store it in a link start adding in the str as long as to is not repeated when repeated store it in another link as main link
#need to be modified
