public class Regex {
    public static void main(String[] args) {
        String s = "01101111010";
        char[] ch = s.toCharArray();
        int i = 0, c = 0, flag = 0;
        while (i < s.length()) {
            if (ch[i] == '0') {
                for (int j = i + 1; j < s.length(); j++) {
                    if (ch[j] == '1')
                        flag = 0;
                    else
                        flag = 1;
                    if (flag == 1) {
                        c++;
                        i = j - 1;
                        break;
                    }
                }
                i++;
            }
        }
        System.out.println("Number of pattern are : " + c);
    }
}
