import java.util.Scanner;

abstract class Temperature {
  double temp;

  public void setTemp(double temp) {
    this.temp = temp;
  }

  public abstract void changeTemp();
}

class Celsius extends Temperature {
  private double ctemp;

  public Celsius() {
    ctemp = 0.0;
  }

  public void changeTemp() {
    ctemp = (temp - 32) * 5 / 9;
    System.out.println("Temperature in Celsius: " + ctemp);
  }
}

class Fahrenheit extends Temperature {
  private double ftemp;

  public Fahrenheit() {
    ftemp = 0.0;
  }

  public void changeTemp() {
    ftemp = temp * 9 / 5 + 32;
    System.out.println("Temperature in Fahrenheit: " + ftemp);
  }
}

public class TempConverter {
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    Fahrenheit f = new Fahrenheit();
    Celsius c = new Celsius();
    System.out.print("Enter temperature in Celsius: ");
    double cel = sc.nextDouble();
    f.setTemp(cel);
    f.changeTemp();
    System.out.print("Enter temperature in Fahrenheit: ");
    double fah = sc.nextDouble();
    sc.close();
    c.setTemp(fah);
    c.changeTemp();
  }
}
