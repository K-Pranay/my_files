
#
# Complete the 'find_total_headbutts' function below.
#
# The function is expected to return an INTEGER.
# The function accepts INTEGER n1 as parameter.
#
n = int(input().strip())

def find_total_headbutts(n1):
    # Write your code here
    if n1==1:
        return 0
    #l=1
    sum=0
    for i in range(1,n1):
        l=n1-i
        sum=sum+l
    return sum

output = find_total_headbutts(n)
print(output)
