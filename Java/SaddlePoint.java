import java.util.Scanner;

public class SaddlePoint
{
  public static void main(String[] args)
  {
    Scanner sc = new  Scanner(System.in);
    int i, j, m, n;
    System.out.println("Enter the dimensions of the matrix.");
    m = sc.nextInt();
    n = sc.nextInt();
    int [][] a = new int[m][n];
    System.out.println("Enter the elements.");
    for (i=0; i<m; i++)
    {
      for (j=0; j<n; j++)
        a[i][j] = sc.nextInt();
    }

  }
}
