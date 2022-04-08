#n1 = int(input().strip())
n1=20
tsum=0
def find_plentiful_numbers(n1):
    tsum=0
    def factosum(x):
        #tsum=0
        sum=0
        if (x==2):
            return 0
        for i in range(1,int(x/2)+1):
            if (x%i==0):
                sum=sum+i
        if (sum>x):
            tsum+=x
            if (x>2):
                print(tsum)
                return tsum+factosum(x-1)

    return factosum(n1)


    # tsum=0
    # for i in range(3,n+1):
    #     if (factosum(i)):
    #         tsum+=i
    # return tsum
    # Write your code here
output = find_plentiful_numbers(n1)
print(output)
