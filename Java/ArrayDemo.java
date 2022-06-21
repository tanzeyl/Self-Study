import java.util.Arrays;
import java.util.Scanner;

public class ArrayDemo {
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    System.out.print("Enter the size of array: ");
    int n = sc.nextInt();
    int[] array = new int[n];
    inputArray(array);
    Arrays.sort(array);
    System.out.print("Enter the target sum: ");
    int sum = sc.nextInt();
    arrayFunc(array, sum);
    System.out.print("Enter size of array A: ");
    int p = sc.nextInt();
    int[] A = new int[p];
    inputArray(A);
    System.out.print("Enter size of array B: ");
    int q = sc.nextInt();
    int[] B = new int[q];
    inputArray(B);
    arrayFunc(A, p, B, q);
    System.out.print("A: ");
    printArray(A);
    System.out.print("B: ");
    printArray(B);
  }

  public static void inputArray(int[] array) {
    Scanner input = new Scanner(System.in);
    for (int i = 0; i < array.length; i++)
      array[i] = input.nextInt();
  }

  public static void printArray(int[] array) {
    System.out.print("[");
    for (int j = 0; j < array.length; j++) {
      if (j == array.length - 1)
        System.out.print(array[j] + "]");
      else
        System.out.print(array[j] + ", ");
    }
    System.out.println();
  }

  public static void arrayFunc(int[] array, int sum) {
    int low = 0, high = array.length - 1, tempSum;
    while (low < high) {
      tempSum = array[low] + array[high];
      if (tempSum == sum) {
        System.out.println(array[low] + " + " + array[high] + " = " + sum);
        high--;
        low++;
      } else if (tempSum > sum)
        high--;
      else
        low++;
    }
    return;
  }

  public static void arrayFunc(int[] A, int p, int[] B, int q) {
    int[] arr = new int[p + q];
    int i = 0, j = 0, k = 0;
    while (i < p && j < q) {
      if (A[i] < B[j])
        arr[k++] = A[i++];
      else
        arr[k++] = B[j++];
    }
    while (i < p)
      arr[k++] = A[i++];
    while (j < q)
      arr[k++] = B[j++];
    i = 0;
    j = 0;
    k = 0;
    while (i < p)
      A[i++] = arr[k++];
    while (j < q)
      B[j++] = arr[k++];
  }
}
