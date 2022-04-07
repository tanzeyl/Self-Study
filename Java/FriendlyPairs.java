import java.util.Scanner;

public class FriendlyPairs
{
public static void main(String args[])
{
  Scanner sc = new Scanner(System.in);
  int sum1= 0,sum2 = 0,abd1= 0,abd2 = 0, num1, num2;
  System.out.println("Enter first number.");
  num1 = sc.nextInt();
  System.out.println("Enter second number.");
  num2 = sc.nextInt();
  for(int i=1; i<=num1; i++)
  {
    if(num1% i == 0)
      sum1 = sum1+i;
  }
  for(int j=1; j<=num2; j++)
  {
    if(num2%j == 0)
      sum2 = sum2+j;
  }
  abd1 = sum1/num1;
  abd2 = sum2/num2;
  if(abd1==abd2)
    System.out.println("Given numbers are friendly pairs.");
  else
    System.out.println("Given number are not friendly pairs.");
    sc.close();
}
}
