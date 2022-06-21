import java.util.Scanner;

interface Volume {
  double PI = 3.14159265;

  void volume();
}

class Cone implements Volume {
  private final double height;
  private final double radius;

  public Cone() {
    Scanner sc = new Scanner(System.in);
    System.out.print("Enter height and radius of Cone: ");
    this.height = sc.nextDouble();
    this.radius = sc.nextDouble();
  }

  @Override
  public void volume() {
    System.out.println("Volume of the Cone: " + PI * radius * radius * height / 3);
  }
}

class Hemisphere implements Volume {
  private final double radius;

  public Hemisphere() {
    Scanner input = new Scanner(System.in);
    System.out.print("Enter radius of Hemisphere: ");
    this.radius = input.nextDouble();
  }

  @Override
  public void volume() {
    System.out.println("Volume of the Hemisphere: " + PI * radius * radius * radius * 2 / 3);
  }
}

class Cylinder implements Volume {
  private final double radius;
  private final double height;

  public Cylinder() {
    Scanner in = new Scanner(System.in);
    System.out.print("Enter height and radius of Cylinder: ");
    this.height = in.nextDouble();
    this.radius = in.nextDouble();
  }

  @Override
  public void volume() {
    System.out.println("Volume of the Cylinder: " + PI * radius * radius * height);
  }
}

public class Volumes {
  public static void main(String[] args) {
    Cone c = new Cone();
    Hemisphere h = new Hemisphere();
    Cylinder cy = new Cylinder();
    c.volume();
    h.volume();
    cy.volume();
  }
}
