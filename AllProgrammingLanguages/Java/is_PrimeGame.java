/*
 * Enter your code here. Read input from STDIN. Print your output to STDOUT.
 * Your class should be named CandidateCode.
*/

import java.io.*;
import java.util.*;
public class is_PrimeGame
{
    public static boolean isprime(int N)
    {
        if (N<=1)
        {
            return false;
        }
    if(N<=3)
    {
        return true;
    }
    if(N%3==0 || N%2==0)  //next five numbers is taken care
    {
        return false;
    }
    for (int i = 5; i*i<N; i=i+6)    //////////////i think we have to use i*i<=N
    {
        if(N%i==0 || N%(i+2)==0)
        {
            return false;
        }
    }
    return true;
    }

    public static void main(String args[] ) throws Exception
    {
        Scanner sc = new Scanner(System.in);
        int T = sc.nextInt();
        while (T-- > 0)
        {
            int a = sc.nextInt();
            int b = sc.nextInt();
            // int first = 0;
            // int last = 0;
            int result = -1;
            // System.out.println(result);
            for(int i = a; i<=b; i++)
            {
                if(isprime(i))
                {
                    result = i;
                    break;
                }
            }
            if(result == -1)
            {
                System.out.println(result);
                continue;
            }
            for(int i = b; i>=result; i--)
            {
                if(isprime(i))
                {
                    if(i == result)
                    {
                        result = 0;
                    }
                    else
                        result = i - result;
                    break;
                }
            }
            System.out.println(result);
        }
    	//Write code here

   }
}
