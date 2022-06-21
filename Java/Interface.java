interface Cycle {
  int a = 45;

  void speedUp(int increment);

  void applyBrake(int decrement);
}

interface Horn {
  void horn1();

  void horn2();
}

class AvonCycle implements Cycle, Horn {
  int speed;

  AvonCycle(int a) {
    this.speed = a;
  }

  @Override
  public void speedUp(int a) {
    speed += a;
  }

  @Override
  public void applyBrake(int a) {
    speed -= a;
  }

  @Override
  public void horn1() {
    System.out.println("PEE PEE");
  }

  @Override
  public void horn2() {
    System.out.println("POO POO");
  }

  public int getSpeed() {
    return speed;
  }
}

public class Interface {
  public static void main(String[] args) {
    AvonCycle c = new AvonCycle(10);
    c.speedUp(2);
    c.applyBrake(5);
    c.horn1();
    c.horn2();
    System.out.println(c.getSpeed());
  }
}
