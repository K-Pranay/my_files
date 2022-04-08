import java.lang.*;
// import java.util.Scanner;

public class IncDec {
public static void main(String[] args) {
  int x=4;
  int y=x++;
  int z;

  System.out.println("x="+x+"    "+"y="+y);
  z= 2*x+++3*++x;  //2*(x++)+3*(++x);
  System.out.println("z="+z);

  //you can increment float variable too.
  float a = 3.2f;
  System.out.println(++a);

  //char also;
  char b='A';
  b++;
  System.out.println(b);  //B gets printed;

  //important below
  byte c = 5;
  c++;                //accepted
                      //c=c+1 is an error because 1 is an integer it is an important point
                      //same is true with short also
  System.out.println(c);



}

}
