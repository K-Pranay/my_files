
a=int(input())
b=(input().split())
c=(input().split())
# print(ord(b[0]))
# print(ord(b[1]))
d=ord(b[1])-ord(b[0])+1
# print(d)
print(a*(d**2)*((int(c[1])-int(c[0])+1)**4))
