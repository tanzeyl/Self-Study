import java.util.Scanner;

public class Employee {
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    try {
      System.out.print("Enter employee's name: ");
      String name = sc.nextLine();
      nameCheck(name);
      System.out.print("Enter employee's ID: ");
      int employeeId = sc.nextInt();
      idCheck(employeeId);
      System.out.print("Enter Department ID: ");
      int departmentId = sc.nextInt();
      departmentCheck(departmentId);
      System.out.println("Employee's Name\t: " + name);
      System.out.println("Employee's ID\t: " + employeeId);
      System.out.println("Department ID\t: " + departmentId);
    } catch (EmployeeException ee) {
      System.out.println(ee);
    }
  }

  public static void nameCheck(String str) throws EmployeeException {
    if (!Character.isUpperCase(str.charAt(0)))
      throw new EmployeeException("First letter of Employee's name should be uppercase.");
  }

  public static void idCheck(int employeeId) throws EmployeeException {
    if (employeeId < 2001 || employeeId > 5000)
      throw new EmployeeException("Employee ID should in the range 2001-5000.");
  }

  public static void departmentCheck(int departmentId) throws EmployeeException {
    if (departmentId < 1 || departmentId > 5)
      throw new EmployeeException("Department ID should be in the range 1 to 5.");
  }
}

class EmployeeException extends Exception {
  public EmployeeException(String s) {
    super(s);
  }
}
