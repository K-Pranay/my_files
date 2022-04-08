import java.lang.*;

public class Arrays1 {
  public static void main(String[] args) {

    int A[] = {1,2,3,4,5};
    for ( int X : A) {
      System.out.println(++X);
    }
  }
}
