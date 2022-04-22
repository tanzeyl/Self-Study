import java.util.Scanner;

public class BuzzNumber {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int n;
        System.out.println("Enter the number.");
        n = sc.nextInt();
        if (n % 10 == 7 && n % 7 == 0)
            System.out.println("This is a buzz number.");
        else
            System.out.println("This is not a buzz number.");
        sc.close();
    }
}
