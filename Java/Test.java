import java.util.Scanner;
public class Test
{
  public static void main(String[] args)
  {
    Scanner sc = new Scanner(System.in);
    int key, i;
    int n;
    System.out.println("enter the elements of array");
    n = sc.nextInt();
    int [] a = new int[n];
    for (i=0;i<n;i++)
    {
      a[i] = sc.nextInt();
    }
    System.out.println("Enter the key you want to search");
    key = sc.nextInt();
    for(i=0;i<n;i++)
    {
      if(a[i]==key)
      {
          System.out.println("key is present in the array");
          break;
      }
    }
    if (i == n)
      System.out.println("key is not present.");
  }
}
