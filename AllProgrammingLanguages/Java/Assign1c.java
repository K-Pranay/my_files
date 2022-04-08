import java.lang.*;

abstract class Parent
{
	static int a;
	double db;
	abstract void product();
	void getfathername()
	{
		System.out.println("father name is malla reddy k");
	}
	void getmothername()
	{
		System.out.println("mother name is thriveni k");
	}
}

class Child extends Parent
{
	void product()
	{
		a=2;
		System.out.println("product is "+a*db);
	}
}

public class Assign1c
{
	public static void main(String[] args)
	{
		Child c= new Child();
		c.product();
		c.getfathername();
  	c.getmothername();
	}
}
