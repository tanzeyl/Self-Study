import java.util.Scanner;
import java.io.File;
import java.io.FileWriter;
import java.io.IOException;

public class File2 {

  public static boolean checkPalin(String s) {
    StringBuffer sb = new StringBuffer(s);
    sb.reverse();
    String s1 = sb.toString();
    if (s.equals(s1))
      return true;
    return false;
  }

  public static void main(String[] args) {
    Scanner s2 = new Scanner(System.in);
    try {
      int count;
      System.out.println("Enter the number of lines you want to write.");
      count = s2.nextInt();
      FileWriter file = new FileWriter("test.txt");
      while (count != 0) {
        String s = s2.next();
        file.write(s);
        file.write("\n");
        count--;
      }
      file.close();
    } catch (Exception e) {
      System.out.println(e);
    }
    try {
      int ctr = 0;
      File f = new File("test.txt");
      Scanner sc = new Scanner(f);
      while (sc.hasNextLine()) {
        String line = sc.nextLine();
        String[] s = new String[line.length()];
        s = line.split(" ");
        for (int i = 0; i < s.length; i++) {
          if (checkPalin(s[i]))
            ctr++;
        }
      }
      System.out.println("Number of palindromes are: " + ctr);
    } catch (Exception e) {
      System.out.println(e);
    }
  }
}
