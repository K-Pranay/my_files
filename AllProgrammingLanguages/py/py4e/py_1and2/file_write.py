f = open("rdm.txt", "a")
f.write("   \nNow the file has more content!")
f.close()

#open and read the file after the appending:
f = open("rdm.txt", "r")
print(f.read())
