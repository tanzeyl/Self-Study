public class StudentInfo
{
    public static void main(String args[])
    {
      String name, rollno, course;
      int sem;
      name = args[0];
      rollno = args[1];
      course = args[2];
      sem = Integer.parseInt(args[3]);
      System.out.println("Name:" + name);
      System.out.println("University Roll number: " + rollno);
      System.out.println("Course: " + course);
      System.out.println("Semester: " + sem);
    }
  }
