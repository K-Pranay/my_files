import java.util.Scanner;

public class Main {
  public static void main(String[] args)
  {
      //general chit
      final int N = 20; //no of people in chit;
      int amount = 300_000; //chit win amount;
      int auction[] = new int[20];
      int cashOut[] = new int[20];
      int profit[] = new int[20];
      int forManComm = 15000; // that is 5% of total win amount;
      Scanner sc = new Scanner(System.in);
      System.out.println("enter the chit auction number that is going to be done...");
      int x = sc.nextInt();
      if(x<=0 || x>N)
      {
        System.out.println("error try again in rerun");
        return;
      }
      // System.out.println("enter each of your cash out");
      //
      
      // for(int i =0; i<x-1;i++)
      // {
      //   cashOut[i] = sc.nextInt();
      //   profit[i] = 15000 - cashOut[i];
      //   auction[i] = amount +forManComm-20*cashOut[i];
      // }
      System.out.println("your details received processing result please wait...");
      //for now lets assume we are paying the bills with 18% intrest per annum.
      System.out.println("thanks for entering your details...");

      // paid equivalent amount;
      int equiPaid = x*15000;
      int rem = 300_000-equiPaid;
      int principle = 300_000-15000;  //check this man
      int remaining_months = 20 - x;
      //simple analysis gives this result;
      // System.out.println("for it to be 12% that is 1 rupee for 100 in month:"+(principle*12*remaining_months/1200));
      // System.out.println("for it to be 15% that is 1.25 rupee for 100 in month:"+(principle*15*remaining_months/1200));
      // System.out.println("for it to be 18% that is 1.5 rupee for 100 in month:"+(principle*18*remaining_months/1200));
      // System.out.println("for it to be 21% that is 1.75 rupee for 100 in month:"+(principle*21*remaining_months/1200));
      // System.out.println("for it to be 24% that is 2 rupee for 100 in month:"+(principle*24*remaining_months/1200));
      // System.out.println("we don't recommend for going for higher amount just for calculation purposes\n i recommend that as intrest is paid earlier than using it so it can be termed as equivalent to next higher class.");

      // System.out.println("enter amount to see its percentage for you:");
      // int am = sc.nextInt();
      // int payable = (am-15000)/20;
      // float r = (am*1200/(principle*remaining_months));
      // System.out.println("equivalent intrest is :"+r+" in rupees: "+(r/12.0));
      // System.out.println("payable amount :"+payable);
      // System.out.println("amount you receive(amount to be paid is deducted):"+(300_000 - am- payable));



      //uncles method;
      System.out.println("for it to be 12% that is 1 rupee for 100 in month:"+((1)*remaining_months*300_000/(100+(1)*remaining_months)));
      System.out.println("for it to be 15% that is 1.25 rupee for 100 in month:"+((1.25)*remaining_months*300_000/(100+(1.25)*remaining_months)));
      System.out.println("for it to be 18% that is 1.5 rupee for 100 in month:"+((1.5)*remaining_months*300_000/(100+(1.5)*remaining_months)));
      System.out.println("for it to be 21% that is 1.75 rupee for 100 in month:"+((1.75)*remaining_months*300_000/(100+(1.75)*remaining_months)));
      System.out.println("for it to be 24% that is 2 rupee for 100 in month:"+((2)*remaining_months*300_000/(100+(2)*remaining_months)));

      System.out.println("enter amount to see its percentage for you:");
      int am = sc.nextInt();
      float payable = 15000 - ((am-forManComm)/20);
      double r = 100.0*am/(remaining_months*(300_000-am));
      System.out.println("equivalent intrest is :"+(r*12.0)+" in rupees: "+(r));
      System.out.println("payable amount :"+payable);
      System.out.println("amount you receive(amount to be paid is deducted):"+(300_000 - am- payable));
      System.out.println("thanks for using my application...");
  }
}
