import java.util.Scanner;

public class Solution
{
    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);
        int T;
        T = sc.nextInt();
        int count=1;
        while(T-- !=0)
        {
            int len = sc.nextInt();
            int K = sc.nextInt();
            String str = sc.next();
            int goodnessscore = 0;
            for(int i = 0; i< len;i++)
            {
                if(str.charAt(i) != str.charAt(len-i -1))
                {
                    goodnessscore ++;
                }

            }
            int result =0;

            result = K-goodnessscore/2;
            if(result <0)
                result = result *(-1);
            System.out.println("Case #"+count+ ": " +result);
            count++;
        }
    }
}