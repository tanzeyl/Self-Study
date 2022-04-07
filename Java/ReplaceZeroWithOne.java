import java.util.Scanner;
public class ReplaceZeroWithOne
{
  public static void main(String args[])
  {
    int num, conv_num = 0, place = 1, digit, temp;
    Scanner sc = new Scanner(System.in);
    System.out.println("Enter a number. ");
    num = sc.nextInt();
    temp = num;
    while(temp>0)
    {
      digit = temp%10;
      if(digit==0)
        conv_num=conv_num+(1*place);
    else
      conv_num=conv_num+(digit*place);
    place = place*10;
    temp = temp/10;
    }
    System.out.println("The number after removing all zeroes is : " +conv_num);
    sc.close();
  }
}
