import java.util.Scanner;

/**
 * tables
 */
public class tables {

  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    System.out.println("enter the table you want to get as output!");
    int n = sc.nextnextInt();
    for( int i=1;i<=10; i++)
    System.out.println(n+"x"+i+" = "+n*i);
  }
}
