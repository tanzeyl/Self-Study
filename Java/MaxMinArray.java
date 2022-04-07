import java.util.Scanner;
import java.util.Arrays;

public class MaxMinArray
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
    Arrays.sort(a);
    System.out.println("The maximum element is: " + a[n-1] + " and the minimum element is: " + a[0]);
    sc.close();
  }
}
