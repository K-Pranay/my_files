import java.lang.Math;
public class Thieves {  
public static void main(String[] args) {  

double y,z;
int j=1,k=1,l=1;
    //Code of Java for loop  
    for(int i=1;i<=10;i++){  
        System.out.println(i);  
double A,B,C;
A=(Math.pow(3,j));
B=(Math.pow(4,k));
C=(Math.pow(5,l));                          //wrong
y=A+B+C;
z=(y+1)%7;
j++;
k++;
//l++;

if(z==0){

System.out.println(y+1);

}
       
    }  
}  
}  





/*
double a = 30; 
        double b = 2; 
        System.out.println(Math.pow(a, b));
*/