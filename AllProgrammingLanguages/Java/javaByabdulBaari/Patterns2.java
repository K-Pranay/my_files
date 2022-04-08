import java.lang.*;

public class Patterns2
{
  public static void main(String[] args)
  {
    //System.out.println("hello");

    /*
    for(int i=1;i<=5; i++)
    {
      for( int j=1;j<=i;j++)
      {
        System.out.print(j+" ");
      }
      System.out.print("\n");
    }
    */

    /*
    int count=0;
    for(int i=1;i<=5; i++)
    {
      for( int j=1;j<=i;j++)
      {
        //System.out.print(++count+" ");
        System.out.printf("%-3d",++count);
      }
      System.out.print("\n");
    }
    */
    for(int i=1;i<=5; i++)
    {
      for( int j=1;j<=5+1-i;j++)
      {
        System.out.print(j+" ");
      }
      System.out.print("\n");
    }


  }
}
