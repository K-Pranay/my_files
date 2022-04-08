import java.lang.*;
import java.util.Scanner;

public class cuboid {

  public static void main(String[] args) {
    float length,breadth,height,volume;
    Scanner sc = new Scanner(System.in);
    System.out.println("enter values of length breadth and height");
    length = sc.nextFloat();
    breadth = sc.nextFloat();
    height = sc.nextFloat();
    volume = length * breadth * height ;
    System.out.println("The volume is :"+volume);
    //similarly print area a= 2(lb+bh+lh);
  }
}
