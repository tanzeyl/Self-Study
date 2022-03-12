import java.util.*;

public class CheckPositiveNegativeOrZero
{
  public static void main(String args[])
  {
    Scanner sc = new Scanner(System.in);
    int num, res;
    System.out.println("Enter a number.");
    num = sc.nextInt();
    res = Integer.signum(num);
    if (res == 0)
    System.out.println("Number is zero.");
  else if (res == 1)
    System.out.println("Number is positive.");
  else
    System.out.println("Number is negative.");
    sc.close();
  }
}
