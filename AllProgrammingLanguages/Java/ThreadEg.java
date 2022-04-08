//java threads
//import java.lang.Thread;
//multi tasks are being done simultaneously
//what is a thread?
//individual and separate unit of execution that  is a part of process 
// multiple threads can work together to accomplish a common  goal 
// eg: video game (one thread for graphics , one for user interface & one for networking );
// advantages 
 //1 thread per task
 // can provide better performance
//disadvantage
//
/*
life cycle of Thread 
new    runnable         dead
       blocked

methods start();
         run()
         wait();
        notify();
        stop();


*/


public class ThreadEg extends Thread
{


public void run(){
System.out.println("thread is running.....");
}

public static void main(String args[]){

ThreadEg obj = new ThreadEg();
obj.start();

}


}