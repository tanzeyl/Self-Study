import java.util.Scanner;

abstract class Shape {
  protected abstract double rectangleArea(double length, double breadth);

  protected abstract double squareArea(double side);

  protected abstract double circleArea(double radius);
}

public class Area extends Shape {
  public double rectangleArea(double length, double breadth) {
    return length * breadth;
  }

  public double squareArea(double side) {
    return side * side;
  }

  public double circleArea(double radius) {
    final double PI = 3.14159265;
    return PI * radius * radius;
  }

  public static void main(String[] args) {
    Area area = new Area();
    Scanner sc = new Scanner(System.in);
    System.out.print("Enter length and breadth of the rectangle: ");
    double length = sc.nextDouble();
    double breadth = sc.nextDouble();
    System.out.print("Enter side of the square: ");
    double side = sc.nextDouble();
    System.out.print("Enter radius of the circle: ");
    double radius = sc.nextDouble();
    sc.close();
    System.out.println("Area of the rectangle: " + area.rectangleArea(length, breadth));
    System.out.println("Area of the square: " + area.squareArea(side));
    System.out.println("Area of the circle: " + area.circleArea(radius));
  }
}
