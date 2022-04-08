from math import factorial  as facto
from itertools import permutations
n=int(input())
l=list(map(int,input().split()))
list=[]


s1=facto(n)
list.append(s1)

list.append(s1)

if(n%2==0):   # for odd next time use n&1  it will automatically be 0
    x=2*s+2
else:
    x=2*s1-1

print("%.6f"%(x/list[-1]))
