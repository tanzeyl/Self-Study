import java.util.Scanner;

public class PositiveNegative {
  public static void main(String[] args) {
    int n, j = 0, t;
    Scanner sc = new Scanner(System.in);
    System.out.println("Enter the size of the array.");
    n = sc.nextInt();
    int[] a = new int[n];
    System.out.println(("Enter the elements."));
    for (int i = 0; i < n; i++)
      a[i] = sc.nextInt();
    for (int i = 0; i < n; i++) {
      if (a[i] < 0) {
        if (i != j) {
          t = a[i];
          a[i] = a[j];
          a[j] = t;
        }
        j++;
      }
    }
    for (int i = 0; i < n; i++)
      System.out.print(" " + a[i]);
    sc.close();
  }
}
