abstract class parent1
{
   static int var1;
   //double var2;
   abstract void try1(double x,double y);      //display only
   public double try2(int a,double b)         //sum
	{
	return (a+b);
	}
    public double try3(int a,double b)          //substraction
	{
	return (a-b);
	}
}

class child1 extends parent1
{
void try1(double a,double b)
	{
	System.out.println("two numbers are chosen");
	System.out.println("their sum is "+a);
	System.out.println("their difference is "+b);
	}
}

public class assign2a
{
  public static void main(String[] args)
	{
	     System.out.println("here is a wonderfull calculation for you!!! ");
	     child1 obj1=new child1();
	     double x=obj1.try2(2,2.5);
	     double y=obj1.try3(2,2.5);
	     obj1.try1(x,y);
	}

}
