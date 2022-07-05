import java.util.Scanner;
import java.io.File;
import java.io.FileWriter;
import java.io.IOException;;

public class WritingAndCopying {
  public static void main(String[] args) {
    // Creating a file
    try {
      File myfile1 = new File("abc.txt");
      myfile1.createNewFile();
    } catch (Exception e) {
      System.out.println(e);
    }

    try {
      File myfile2 = new File("xyz.txt");
      myfile2.createNewFile();
    } catch (Exception e) {
      System.out.println(e);
    }

    // Reading to that file
    try {
      FileWriter myfile3 = new FileWriter("abc.txt");
      myfile3.write("My name is Tanzeel Khan.\nGood evening everyone.");
      myfile3.close();
    } catch (IOException e) {
      System.out.println(e);
    }

    // Copying text
    try {
      File myfile3 = new File("abc.txt");
      FileWriter myfile4 = new FileWriter("xyz.txt");
      Scanner sc = new Scanner(myfile3);
      while (sc.hasNextLine()) {
        String line = sc.nextLine();
        myfile4.write(line);
      }
      myfile4.close();
    } catch (IOException e) {
      System.out.println(e);
    }
  }
}
