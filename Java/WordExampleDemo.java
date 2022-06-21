import java.util.Arrays;
import java.util.List;
import java.util.Scanner;

class WordExample {
  private String strData;

  public WordExample(String str) {
    char ch = str.charAt(str.length() - 1);
    if (ch == '.' || ch == '?' || ch == '!')
      strData = str;
    else {
      System.out.println("Invalid string.");
      System.exit(0);
    }
  }

  private boolean checkVowel(String str) {
    Character vowels[] = { 'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U' };
    List<Character> list = Arrays.asList(vowels);
    return list.contains(str.charAt(0)) && list.contains(str.charAt(str.length() - 1));
  }

  public int countWord() {
    int count = 0;
    StringBuilder sb = new StringBuilder(32);
    for (int i = 0; i < strData.length(); i++) {
      while (strData.charAt(i) != ' ') {
        sb.append(strData.charAt(i));
        i++;
        if (strData.charAt(i) == '.' || strData.charAt(i) == '?' || strData.charAt(i) == '!')
          break;
      }
      if (checkVowel(sb.toString()))
        count++;
      sb = new StringBuilder(32);
    }
    return count;
  }

  public void vowelsConsonants() {
    StringBuilder sb = new StringBuilder(32);
    for (int i = 0; i < strData.length(); i++) {
      while (strData.charAt(i) != ' ') {
        sb.append(strData.charAt(i));
        i++;
        if (strData.charAt(i) == '.' || strData.charAt(i) == '?' || strData.charAt(i) == '!')
          break;
      }
      if (checkVowel(sb.toString()))
        System.out.println(sb);
      sb = new StringBuilder(32);
    }
    for (int i = 0; i < strData.length(); i++) {
      while (strData.charAt(i) != ' ') {
        sb.append(strData.charAt(i));
        i++;
        if (strData.charAt(i) == '.' || strData.charAt(i) == '?' || strData.charAt(i) == '!')
          break;
      }
      if (!checkVowel(sb.toString()))
        System.out.println(sb);
      sb = new StringBuilder(32);
    }
  }
}

public class WordExampleDemo {
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    System.out.print("Enter a string: ");
    String s = sc.nextLine();
    WordExample we = new WordExample(s);
    System.out.println("Number of words with vowels in the start and end: ");
    System.out.println(we.countWord());
    System.out.println("Required string: ");
    we.vowelsConsonants();
  }
}
