phrase1 = input()
text1 = input()

def count_phrases_in_text(phrase1, text1):

    # Write your code here

    op=0
    lst1=phrase1.lower().split()
    lst2=text1.lower().split()

    if len(lst1)==1:
        return text1.count(phrase1)

    x=0
    z=1
    flag=0
    for i in lst2:

        if flag==1:
            z=z-1
            continue
        if z==0:
            flag=0
            z=1
        count=0
        if(i in lst1):
            for z in range(1,len(lst1)):
                try:
                    if(lst2[x+z] in lst1):
                        count = count+1
                except:
                    count=-1
            if count==len(lst1)-1:
                op+=1
                flag=1
                z=len(lst1)
        x+=1
    return op
output = count_phrases_in_text(phrase1, text1)
print(output)
