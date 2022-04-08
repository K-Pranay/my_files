from itertools import permutations
import math


n=int(input())
l=list(map(int,input().split()))

list=[]

# floor division is nearest whole number
s1=math.factorial(n)//math.factorial(n-(n))
s2=math.factorial(n)//math.factorial(n-(n-1))

list.append(s1)
list.append(s2)

if(n%2==0):
    x=sum(list)+2
else:
    x=sum(list)-1

print("%.6f"%(x/list[-1]))
