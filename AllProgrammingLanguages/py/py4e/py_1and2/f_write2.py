f = open("rdm.txt", "w")
f.write("Woops! I have deleted the content!")
#make sure this file doesnot have important content as it will be deleted
f.close()

#open and read the file after the appending:
f = open("rdm.txt", "r")
print(f.read())
