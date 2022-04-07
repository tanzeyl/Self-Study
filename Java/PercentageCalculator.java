import java.util.Scanner;

public class PercentageCalculator
{
  public static void main(String args [])
  {
    Scanner sc = new Scanner(System.in);
    float m1, m2, m3, m4, m5, perc;
    System.out.println("Enter the marks in subject one.");
    m1 = sc.nextInt();
    System.out.println("Enter the marks in subject two.");
    m2 = sc.nextInt();
    System.out.println("Enter the marks in subject three.");
    m3 = sc.nextInt();
    System.out.println("Enter the marks in subject four.");
    m4 = sc.nextInt();
    System.out.println("Enter the marks in subject five.");
    m5 = sc.nextInt();
    perc = (m1+m2+m3+m4+m5)/5;
    System.out.println("The percentage is: " + perc);
    sc.close();
  }
}
