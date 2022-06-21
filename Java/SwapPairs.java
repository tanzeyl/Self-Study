import java.util.ArrayList;
import java.util.Scanner;

public class SwapPairs {
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
    for (int i = 0; i <= arr.size() - 2; i += 2) {
      String str = arr.get(i + 1);
      arr.set(i + 1, arr.get(i));
      arr.set(i, str);
    }
    System.out.println("Swapped list is:");
    for (String name : arr) {
      System.out.println(name);
    }
  }
}
