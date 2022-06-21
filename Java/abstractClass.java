import java.util.Scanner;

abstract class Shape {
  public abstract float area();
}

class Rectangle extends Shape {
  float l, b;

  Rectangle(float a, float b) {
    this.l = a;
    this.b = b;
  }

  @Override
  public float area() {
    return l * b;
  }
}

class Square extends Shape {
  float s;

  Square(float a) {
    this.s = a;
  }

  @Override
  public float area() {
    return s * s;
  }
}

public class abstractClass {
  public static void main(String args[]) {
    Rectangle r = new Rectangle(10, 30);
    Square s = new Square(5);
    System.out.println(s.area());
    System.out.println(r.area());
  }
}
