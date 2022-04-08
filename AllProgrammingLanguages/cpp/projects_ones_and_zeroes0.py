#my new python
f = open("rdm.txt", "a")
f.write("")
str=''
for i in range(0):   #ones
    str= str+"1"+" "
for i in range(14):   #zeroes
    str= str+"0"+" "
f.write(str)
f.close()

# #open and read the file after the appending:
# f = open("rdm.txt", "r")
# print(f.read())
