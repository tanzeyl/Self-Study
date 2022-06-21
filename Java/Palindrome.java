import java.util.*;
import java.io.*;

public class Palindrome {
  public static boolean ispalindrome(String s) {
    int low, high;
    low = 0;
    high = s.length() - 1;
    while (low < high) {
      if (s.charAt(low) != s.charAt(high)) {
        return false;
      }
      low++;
      high--;
    }
    return true;
  }

  public static void main(String[] args) {
    try {
      File f1 = new File("myfile.txt");
      Scanner s = new Scanner(f1);
      int c = 0;
      while (s.hasNext()) {
        String word = s.next();
        if (ispalindrome(word))
          c++;
      }
      s.close();
      System.out.print("Number of palindromes in the file are: " + c);
    } catch (FileNotFoundException e) {
      System.out.println("An error has occurred.");
      e.printStackTrace();
    }
  }
}
