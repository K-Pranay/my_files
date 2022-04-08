import java.io.*;
import java.util.*;

public class ReverseString {

    public static void main(String[] args) {

        Scanner sc=new Scanner(System.in);
        String A=sc.next();
        sc.close();
        /* Enter your code here. Print output to STDOUT. */
        char B[]= new char[A.length()];
        int i= A.length()-1;
        // System.out.println(i);
        // System.out.println(A.charAt(3));
        for(int j=0;i>=0;j++,i--)
        {
          B[i]=(char)(A.charAt(j));
          //System.out.print("here once");
          //System.out.print(B[i]);
          // System.out.println(A.charAt(j));
        }
        //System.out.println(B[3]);
        for (char x : B) {
          System.out.println(x);
        }
        String str = new String(B);
        System.out.println(str);
        if(str.equals(A))
        {
          System.out.println("its is a palindrome");
        }
        else
          System.out.println("it is not a palindrome");
    }
}
