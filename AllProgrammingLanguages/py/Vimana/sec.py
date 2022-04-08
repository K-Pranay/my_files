#d1_count = int(input().strip())
d1 = list(map(int, input().rstrip().split()))
def find_pivot_point(d):

    # Write your code here
    x=0
    y=len(d)-1
    sum1=d[0]
    sum2=d[y]

    while (True):

        if (sum1>sum2):
            y=y-1
            sum2+=d[y]
        elif(sum2>sum1):
            x=x+1
            sum1+=d[x]
        elif(sum2==sum1 and x>=y):
            return x
        else:
            y=y-1
            sum2+=d[y]
            
output = find_pivot_point(d1)
print(output)
