import java.util.Scanner;

public class MyCalculator {
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    System.out.println("Enter n and p: ");
    int n = sc.nextInt();
    int p = sc.nextInt();
    try {
      isPositive(n, p);
      double result = Math.pow(n, p);
      System.out.println(result);
    } catch (NegativeIntegerException nie) {
      System.out.println(nie);
    }
  }

  public static void isPositive(int n, int p) throws NegativeIntegerException {
    if (n < 0)
      throw new NegativeIntegerException("n should be non negative.");
    if (p < 0)
      throw new NegativeIntegerException("p should be non negative.");
    if (p == 0 && n == 0)
      throw new NegativeIntegerException("both n and p should not be zero.");
  }
}

class NegativeIntegerException extends Exception {
  public NegativeIntegerException(String s) {
    super(s);
  }
}
