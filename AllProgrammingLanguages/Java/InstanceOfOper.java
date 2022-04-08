/**
 * InstanceOfOper
 */
 abstract class A implements Z{
   public int i = 10;
   public void display(){}
 }
  class B extends A{}

abstract interface Z
{
  public void display();
}

public class InstanceOfOper extends B {

  public static void main(String[] args)
  {
    A obj = new B();
    if(obj instanceof B)
    {
      System.out.println("yes" +obj.i);
    }

  }
}
