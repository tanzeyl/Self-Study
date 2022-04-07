import java.util.Scanner;

public class KeySearch
{
  public static void main(String [] args)
  {
    Scanner sc = new Scanner(System.in);
    int n, key, i;
    System.out.println("Enter the size of the array.");
    n = sc.nextInt();
    int [] a = new int[n];
    System.out.println("Enter the elements.");
    for (i=0; i<n; i++)
      a[i] = sc.nextInt();
    System.out.println("Enter the key element.");
    key = sc.nextInt();
    for(i=0; i<n; i++)
    {
      if (a[i] == key)
      {
        System.out.println(a[i] + " is present in the array.");
        break;
      }
    }
    if (i == n)
    System.out.println(key + " is not present in the array.");
    sc.close();
  }
}
