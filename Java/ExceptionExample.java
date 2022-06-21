import java.util.Scanner;

public class ExceptionExample {
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    int[] marks = { 1, 2, 3, 4, 5 };
    int count = 0;
    while (true) {
      int key = sc.nextInt();
      try {
        System.out.println(marks[key]);
      } catch (ArrayIndexOutOfBoundsException e) {
        System.out.println(e);
        count++;
        if (count == 5) {
          System.out.println("ERROR");
          break;
        }
      }
    }
  }
}
