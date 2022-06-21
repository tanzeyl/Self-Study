import java.util.ArrayList;
import java.util.Scanner;

public class RemoveMethod {
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    System.out.println("Enter size: ");
    int n = sc.nextInt();
    ArrayList<String> arr = new ArrayList<String>(n + 1);
    System.out.println("Enter the string for array list: ");
    int count = n;
    while (sc.hasNext()) {
      String i = sc.nextLine();
      arr.add(i);
      count--;
      if (count == -1)
        break;
    }
    arr.remove(0);
    for (int i = 0; i < arr.size(); i++) {
      String word = arr.get(i);
      if (word.length() % 2 == 0) {
        arr.remove(i);
        i--;
      }
    }
    System.out.println("\nAfter removing the element the size of the ArrayList is: " + arr.size());
    for (String name : arr) {
      System.out.println("Name is: " + name);
    }
  }
}
