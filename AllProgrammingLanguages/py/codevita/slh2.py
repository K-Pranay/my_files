N=int(input())
str=input()
#if no two cars have same speed
sum=0
for i in range(1,N+1):
    sum=sum+(1/i)
print("%.6f"%(sum))
