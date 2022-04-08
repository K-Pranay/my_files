import java.util.Scanner;
import java.util.Arrays;
public class Solution2
{
    public static boolean shrink(int i ,int arr[])
    {
        int start = arr[0]+1;
        int end = arr[1]-1;
        if(i>arr[0] && i<arr[1])
        {
            return true;
        }
        else {
          return false;
        }
    }

    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);
        int T = sc.nextInt();
        int count = 1;
        while(T-- > 0)
        {
            int result = 0;
            int N = sc.nextInt();
            int C = sc.nextInt();
            int arr[][] = new int[N][2];

            int L_min = 0;
            int R_max =0;
            for(int i = 0;i<N;i++)
            {
                arr[i][0] =sc.nextInt();
                if(L_min > arr[i][0])
                {
                    L_min = arr[i][0];
                }
                arr[i][1] =sc.nextInt();
                if(R_max < arr[i][1])
                {
                    R_max = arr[i][1];
                }
            }

            int cutsArr[] = new int[C];
            int P = R_max - L_min - 1;
            int arr2[] = new int[P];
            if((P) <= C)  //checking max possible cuts
            {
                //so there is a cut at every integer point;
                for(int i =0;i<N;i++)
                {
                    result += arr[i][1] - arr[i][0];
                }

            }
            else
            {
                int value = L_min+1;
                for(int i =value;i<P; i++)
                {
                  int count1 = 0;
                    for(int j =0; j<N;j++)
                    {
                        if(shrink(i,arr[j]))
                        {
                            count1++;
                        }
                    }
                    arr2[i] = count1;
                }

                for(int c = 0;c<C;c++)
                {
                    cutsArr[c] = 0;
                }

            }
            System.out.println("Case #"+count+": "+result);
            count++;

        }
    }
}
