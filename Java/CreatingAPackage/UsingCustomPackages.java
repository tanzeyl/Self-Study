import Arithmetic.Sum;
import Arithmetic.Difference;

public class UsingCustomPackages {
  public static void main(String[] args) {
    System.out.println(s.add(3, 4));
    Difference d = new Difference(5, 2);
    System.out.println(d.difference());
  }
}
