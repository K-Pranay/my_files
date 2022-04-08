public class ThreadTest extends Thread{




// pending program

public static void main(String args[]){
 A a1= new A();
 B b1 =new B();
 C c1 = new C();
 b1.setPriority(Thread.MAX_PRIORITY);
 a1.start();
 b1.start();
 c1.start();
}
}
