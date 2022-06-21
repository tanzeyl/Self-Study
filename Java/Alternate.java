import java.util.*;

public class Alternate {
  public static ArrayList<Integer> alt(ArrayList<Integer> list1, ArrayList<Integer> list2) {
    Iterator<Integer> i1 = list1.iterator();
    Iterator<Integer> i2 = list2.iterator();
    ArrayList<Integer> result = new ArrayList<Integer>();

    while (i1.hasNext() || i2.hasNext()) {
      if (i1.hasNext()) {
        result.add(i1.next());
      }
      if (i2.hasNext()) {
        result.add(i2.next());
      }
    }
    return result;
  }

  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    System.out.println("Enter size 1: ");
    int n = sc.nextInt();
    ArrayList<Integer> arr1 = new ArrayList<Integer>(n + 1);
    System.out.println("Enter the string for array list: ");
    int count = n;
    while (sc.hasNext()) {
      int i = sc.nextInt();
      arr1.add(i);
      count--;
      if (count == 0)
        break;
    }
    System.out.println("Enter size 2: ");
    int b = sc.nextInt();
    ArrayList<Integer> arr2 = new ArrayList<Integer>(n + 1);
    System.out.println("Enter the string for array list: ");
    int c = b;
    while (sc.hasNext()) {
      int i = sc.nextInt();
      arr2.add(i);
      c--;
      if (c == 0)
        break;
    }
    ArrayList<Integer> res = new ArrayList<Integer>();
    res = alt(arr1, arr2);
    System.out.println("\nAfter processing: ");
    for (int name : res) {
      System.out.print(name + " ");
    }
  }
}
