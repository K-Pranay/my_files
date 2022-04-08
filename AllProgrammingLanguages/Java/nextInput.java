/**
 * nextInput
 */
 import java.util.Scanner;

public class nextInput {

  public static void main(String[] args)
  {
    int x;
    int y;
    String str;

    Scanner sc = new Scanner(System.in);

     x = sc.nextInt();
     y = sc.nextInt();
     sc.nextLine();
     str = sc.nextLine();

     System.out.println(x+" "+y+ " "+ str);
  }
}
