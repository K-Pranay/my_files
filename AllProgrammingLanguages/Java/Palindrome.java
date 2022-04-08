//import java.
import java.util.Scanner;

public class Palindrome {
public static void main(String args[]){

System.out.println("enter a string please");

Scanner obj = new Scanner(System.in);

String kpr = obj.nextLine();

int x=kpr.length();
int y;
int z;
z=0;
y=0;
System.out.println("length is:"+x);

for(int i=0;i<=x/2;i++){

if (kpr.charAt(i)==kpr.charAt(x-1))
{
//System.out.println("first stage");

y++;
}
else{ 
//System.out.println("not a palindrome");

z++;
}
x--;
}

if(z>0)                                               //y==x/2
{System.out.println("It is not a palindrome");}       //not
else
{System.out.println("It is a palindrome");}           //yes it is a palindrome


}





}







