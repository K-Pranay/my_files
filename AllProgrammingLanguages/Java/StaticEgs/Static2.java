public class Car
	{
	    static{
	        System.out.print("Engine");
	    }
	    public void Car() //here void makes difference. remove void and check;
      {
	        System.out.print("SUV");
	    }
	    public static void main(String[] args)
	    {
	        System.out.print("Accelerate");
	        Car cObj1 = new Car();
	        Car cObj2 = new Car();
	    }
	}
