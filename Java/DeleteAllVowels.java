import java.util.Scanner;

public class DeleteAllVowels {
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    String result, s;
    System.out.println("Enter a string.");
    s = sc.next();
    StringBuffer str = new StringBuffer(s);
    result = str.toString().replaceAll("[aeiouAEIOU]", "");
    System.out.println("After removing all vowels, the string is: " + result);
  }
}
