import java.util.Scanner;

public class Alphabets {
    void merge(String a, String b) {
        String c = a.concat(b);
        String d = "", e = "";
        int i;
        for (i = 0; i < c.length(); i++) {
            if (c.charAt(i) == 'a' || c.charAt(i) == 'e' || c.charAt(i) == 'i' || c.charAt(i) == 'o'
                    || c.charAt(i) == 'u' || c.charAt(i) == 'A' || c.charAt(i) == 'E' || c.charAt(i) == 'I'
                    || c.charAt(i) == 'O' ||
                    c.charAt(i) == 'U') {
                d += c.charAt(i);
            } else {
                e += c.charAt(i);
            }
        }
        d = d.replaceAll("\\s+", " ");
        System.out.print(d);
        System.out.println(e);
    }

    int merge(String a) {
        int i, sum = 0, temp;
        for (i = 0; i < a.length(); i++) {
            if (Character.isDigit(a.charAt(i))) {
                sum += Character.getNumericValue(a.charAt(i));
            }
        }
        return sum;
    }

    public static void main(String args[]) {
        int sum;
        Alphabets ob = new Alphabets();
        ob.merge("Graphic", "Era");
        sum = ob.merge("hle2llow3or91d");
        System.out.println(sum);
    }
}
