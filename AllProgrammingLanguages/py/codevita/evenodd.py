from math import factorial  as fc
str=input()# two spaced integers
k=int(input())
list=str.split()
Low=list[0]
High=list[1]
# now my logic
# repeated word are also accepted
# all permutations such that there sum is even
# even only when odd + odd or even + even
# if sum is for k times then make a formulae first
# for 3
# o+o+e
# e+e+e
# for 4
# o+o+o+o
# all es
# e+e+o+o
# and so on
# make a factorial function         #done
#how many odds available and even available in range
print(str,k,list,Low, High)

#r=k
#[r+n-1]!/r![n-1)!

#case calculator












#
# from itertools import permutations
# import math
#
# # def get_count(d):
# #     c=0
# #     for i in d:
# #         c+=1
# #     return c
#
# n=int(input())
# l=list(map(int,input().split()))
#
# cc=[]
#
# # d1=permutations(l,n-1)
# # d2=permutations(l,n)
# # cc.append(get_count(d1))
# # cc.append(get_count(d2))
#
# s1=math.factorial(n)//math.factorial(n-(n))
# s2=math.factorial(n)//math.factorial(n-(n-1))
#
# cc.append(s1)
# cc.append(s2)
#
# if(n%2==0):
#     t=sum(cc)+2
# else:
#     t=sum(cc)-1
#
# print("%.6f"%(t/cc[-1]))
