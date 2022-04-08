class MyClass {
  public MyClass()
  {System.out.println("2");}
private void add(int x,int y)
{
  System.out.println(x+y);
}
}

public class accessCheck extends MyClass
{

  public accessCheck(){System.out.println("1");}

  public void show()
  {
    add(10,12);
  }

  public static void main(String[] args)
  {
    // System.out.println(x);
    new accessCheck();
  }
}
