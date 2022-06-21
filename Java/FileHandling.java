import java.util.Scanner;
import java.io.File;

public class FileHandling {
  public static void main(String[] args) {
    File f = new File("Tanzeel.txt");
    try {
      f.createNewFile();
    } catch (Exception e) {
      System.out.println(e);
    }
  }
}
