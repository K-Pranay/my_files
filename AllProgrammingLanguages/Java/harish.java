import java.util.Scanner;


class Sequences
{
    static int  getTotalNumberOfSequences(int m, int n)
    {
        if(m < n)
            return 0;

        if(n == 0)
            return 1;

        return getTotalNumberOfSequences (m-1, n) +
               getTotalNumberOfSequences (m/2, n-1);
    }

    public static void main (String[] args)
    {
        int m = 10;
        int n = 4;
        System.out.println("Total number of possible sequences "+getTotalNumberOfSequences(m, n));
    }
}

m=input()
n=input()
def all_possible_sequences(m,n):
    if m<n:
        return 0

    if n==0:
        return 1

    res=(all_possible_sequences(m-1,n)+ all_possible_sequences(m//2,n-1))
    return res
print('Total number of possible sequences:',all_possible_sequences(m,n))
