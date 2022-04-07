import java.util.Scanner;
import java.lang.Math;

public class BankDeposit
{
  public static void main(String args[])
  {
    int p, r, choice;
    double n, a;
    Scanner sc = new Scanner(System.in);
    System.out.println("1. Term Deposit\n2. Recurring Deposit");
    choice = sc.nextInt();
    switch (choice)
    {
      case 1: System.out.println("Enter principal.");
                  p = sc.nextInt();
                  System.out.println("Enter rate of interest.");
                  r = sc.nextInt();
                  System.out.println("Enter the time in years.");
                  n = sc.nextDouble();
                  a = (p*(1+r))/(Math.pow(100.0, n));
                  System.out.println("Maturity amount: " + a);
                  break;
      case 2: System.out.println("Enter monthly installments.");
                  p = sc.nextInt();
                  System.out.println("Enter rate of interest.");
                  r = sc.nextInt();
                  System.out.println("Enter the time in years.");
                  n = sc.nextDouble();
                  a = (p*n)+(((p*n)*(n+1))/2)*(r/100.0)*(1.0/12);
                  System.out.println("Maturity amount: " + a);
                  break;
    default: System.out.println("Invalid choice.");
    }
    sc.close();
  }
}
