import java.util.Scanner;

class EmployeeException extends Exception {
  EmployeeException(String s) {
    super(s);
  }
}

public class EmployeeTwo {
  public static void checkName(String s) throws EmployeeException {
    if (!Character.isUpperCase(s.charAt(0)))
      throw new EmployeeException("First name should be capital.");
  }

  public static void checkID(int s) throws EmployeeException {
    if (s < 2001 || s > 5000)
      throw new EmployeeException("ID should be in range 2001-5000.");
  }

  public static void checkDept(int s) throws EmployeeException {
    if (s < 1 || s > 5)
      throw new EmployeeException("Department should be in range 1-5.");
  }

  public static void main(String[] args) {
    String name;
    int id, dept;
    Scanner sc = new Scanner(System.in);
    try {
      System.out.println("Enter the name.");
      name = sc.nextLine();
      checkName(name);
      System.out.println("Enter the employee ID.");
      id = sc.nextInt();
      checkID(id);
      System.out.println("Enter the department.");
      dept = sc.nextInt();
      checkDept(dept);
    } catch (EmployeeException e) {
      System.out.println(e);
    }
  }
}
