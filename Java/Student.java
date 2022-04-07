import java.util.Scanner;
public class Student
{
    public static void main(String [] args)
    {
        Scanner sc = new Scanner(System.in);
        int age, sem;
        String name, rolln, course;
        name = sc.next();
        rolln = sc.next();
        course = sc.next();
        age = sc.nextInt();
        sem = sc.nextInt();
        System.out.println(name);
        System.out.println(rolln);
        System.out.println(course);
        System.out.println(age);
        System.out.println(sem);
        sc.close();
    }
}
