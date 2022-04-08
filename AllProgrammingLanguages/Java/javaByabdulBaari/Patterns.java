import java.lang.*;

/**
 * Patterns
 */
public class Patterns {

  public static void main(String[] args) {

    for(int i=1;i<=25; i+=5)
    {
      for( int j=i;j<i+5;j++)
      {
        System.out.format("%03d ",j);  //printf() also same
      }
      System.out.println();
    }
  }
}
