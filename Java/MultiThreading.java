class Cooking extends Thread {
  @Override
  public void run() {
    int i = 5;
    while (true) {
      System.out.println("Cooking has taken " + i + " seconds.");
    }
  }
}

class Texting extends Thread {
  @Override
  public void run() {
    int i = 7;
    while (true) {
      System.out.println("Texting has taken " + i + " seconds.");
    }
  }
}

public class MultiThreading {
  public static void main(String[] args) {
    Cooking c = new Cooking();
    Texting t = new Texting();
    c.start();
    try {
      c.sleep(5000);
    } catch (InterruptedException e) {
      System.out.println(e);
    }
    t.start();
    try {
      t.sleep(5000);
    } catch (InterruptedException e) {
      System.out.println(e);
    }
  }
}
