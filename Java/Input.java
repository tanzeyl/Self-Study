import java.util.*;

public class Input
{
  public static void main(String args[])
  {
    Scanner sc = new Scanner(System.in);
    System.out.println("Enter your name.");
    String name = sc.next();
    System.out.println(name);
    sc.nextLine();
    System.out.println("Enter a sentence.");
    String sentence = sc.nextLine();
    System.out.println(sentence);
    sc.close();
  }
}
