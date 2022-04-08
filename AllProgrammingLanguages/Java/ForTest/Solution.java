import java.util.Scanner;
import java.util.Arrays;
class Solution
{
    static int max_count = 0;
    static int mostFrequent(int arr[], int n)
    {
        max_count =0;
        Arrays.sort(arr);

        int res = arr[0];
        int curr_count=0 ;
        if((res%2) == 0)  //even
          curr_count = 1;

        max_count = curr_count;
        // System.out.println(max_count);
        for (int i = 1; i < n; i++)
        {
            if((arr[i]%2) != 0)  //odd
                continue;

            if (arr[i] == arr[i - 1])
                curr_count++;
            else
            {
                if (curr_count > max_count)
                {
                    max_count = curr_count;
                    res = arr[i - 1];
                }
                curr_count = 1;
            }
        }
        if (curr_count > max_count)
        {
            max_count = curr_count;
            res = arr[n - 1];
        }
        // System.out.println(max_count);
        return res;
    }

    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);
        int T = sc.nextInt();
        int count = 1;
        while(T-- > 0)
        {
            int result=0;
            int a=sc.nextInt();
            int b=sc.nextInt();
            int c=sc.nextInt();
            int d=sc.nextInt();
            int f=sc.nextInt();
            int g=sc.nextInt();
            int h=sc.nextInt();
            int i=sc.nextInt();

            if(a+b+c+d+f+g+h+i == 0 )
            {
                System.out.println("Case #"+count+": 8");
                count++;
                continue;
            }
            int arr[] = new int[4];
            arr[0] = a+i;
            arr[1] = b+h;
            arr[2] = c+g;
            arr[3] = d+f;

            int e = mostFrequent(arr,4);
            // System.out.println(max_count);
            result  = max_count;

            if((a+c) == 2 *b)
            {
                result++;
                // System.out.println(result);

            }
            if((a+g) == 2*d)
            {
                result++;
                // System.out.println(result);
            }
            if((g+i) == 2 *h)
            {
                result++;
                // System.out.println(result);
            }
            if((c+i) == 2 *f)
            {
                result++;
                // System.out.println(result);
            }
            System.out.println("Case #"+count+": "+result);
            count++;

        }
    }
}

// 1
// 3 4 11
// 10 9
// -1 6 7
