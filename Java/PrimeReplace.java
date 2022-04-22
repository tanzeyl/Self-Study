import java.util.Scanner;
import java.util.Random;

public class PrimeReplace {
    public static void main(String[] args) {
        int i;
        Scanner sc = new Scanner(System.in);
        String[] a = { "3", "5", "7" };
        Random r = new Random();
        int x = sc.nextInt();
        String s1 = Integer.toString(x);
        StringBuilder ss = new StringBuilder(s1);
        for (i = 0; i < s1.length(); i++) {
            if (s1.charAt(i) == '2') {
                char c = s1.charAt(i);
                // String str = new String(c);
                // s1 = s1.replace(c, a[r.nextInt(2)]);
                ss[i]++;
            }
        }
        s1 = ss.toString();
        x = Integer.parseInt(s1);
        System.out.println(x);
    }
}
