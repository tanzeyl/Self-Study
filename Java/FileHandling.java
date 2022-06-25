import java.util.Scanner;
import java.io.File;
import java.io.FileWriter;
import java.io.IOException;

public class FileHandling {
  public static void main(String[] args) {
    File f1 = new File("Tanzeel.txt");
    try {
      f1.createNewFile();
    } catch (Exception e) {
      System.out.println(e);
    }
    try {
      FileWriter f2 = new FileWriter("Tanzeel.txt");
      f2.write("My name is Tanzeel Khan.\nI am doing BTech.");
      f2.close();
    } catch (IOException e) {
      System.out.println(e);
    }
    try {
      File f3 = new File("Tanzeel.txt");
      Scanner sc = new Scanner(f3);
      while (sc.hasNextLine()) {
        String line = sc.nextLine();
        System.out.println(line);
      }
      sc.close();
    } catch (Exception e) {
      System.out.println(e);
    }
  }
}
