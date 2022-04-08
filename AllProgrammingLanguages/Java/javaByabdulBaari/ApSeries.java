import java.util.Scanner;

/**
 * ApSeries
 */
public class ApSeries {

  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    int a, d , n;
    System.out.println("enter a , d, n for a standard ap series.");
    a= sc.nextInt();
    d=sc.nextInt();
    n=sc.nextInt();
    sc.close();
    for (int i=0;i<n-1 ;i++ ) {
      System.out.print(a+i*d+",");
    }
    System.out.println(a+(n-1)*d);
  }
}
