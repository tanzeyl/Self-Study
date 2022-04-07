import java.util.Scanner;

public class ReverseOrder
{
  public static void main(String[] args)
  {
    Scanner sc = new Scanner(System.in);
    int n, i;
    System.out.println("Enter the size of the array.");
    n = sc.nextInt();
    int [] a = new int[n];
    System.out.println("Enter the elements.");
    for(i=0; i<n; i++)
      a[i] = sc.nextInt();
    System.out.println("Revrse order:");
    for (i=n-1; i>=0; i--)
      System.out.print(a[i] + " ");
    sc.close();
  }
}
